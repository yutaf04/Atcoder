#include <bits/stdc++.h>
using namespace std;

long long Pow(long long x, long long n) {
  if(n == 1) return x;
  if(n == 0) return 1;
  if(n % 2) return ((x * Pow(x, n / 2))) * Pow(x, n / 2);
  else return Pow(x, n / 2) * Pow(x, n / 2);
}


string toBinary(long long n){
    string ans;
    while(n != 0){
        if(n % 2 == 0) ans += '0';
        else ans += '1';    
        n /= 2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        string s = toBinary(n);
        //cout << "s = " << s << endl;
        int m = s.size();

        vector<long long> p;
        for(int i = 0; i < m; i++){
            if(s[i] == '1'){
                int j = m - i - 1;
                p.push_back(j);
            }
        }

        long long ans = -1;
        if(p.size() >= 3){
            //cout << "debug1" << endl;
            ans = 0;
            for(int i = 0; i < 3; i++) ans += (long long) Pow(2, p[i]);
        }else if(p.size() == 2){
            //cout << "debug2" << endl;
            if(p[1] - 2 >= 0) ans = (long long) (Pow(2, p[0]) + (long long) Pow(2, p[1] - 1) + (long long) Pow(2, p[1] - 2));
            else if(p[0] - 3 >= 0) ans = (long long) (Pow(2, p[0] - 1) + (long long) Pow(2, p[0] - 2) + (long long) Pow(2, p[0] - 3));
            else ans = -1;
        }else if(p.size() == 1 && p[0] - 3 >= 0){
            //cout << "debug3" << endl;
            ans = (long long) Pow(2, p[0] - 1) + (long long) Pow(2, p[0] - 2) + (long long) Pow(2, p[0] - 3);
        }else{
            ans = -1;
        }
        
        cout << ans << endl;
    }
}
