#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<pair<long long,int> > pr;
    //prime-factorize
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                n /= i;
                cnt++;
            }

            pr.emplace_back(i, cnt);
        }
    }

    if(n != 1) pr.emplace_back(n, 1);
    int m = pr.size();

    int ans = 0;
    for(int i = 0; i < m; i++){
        int l = 0;
        int r = 100;
        while(r - l > 1){
            int mid = (l + r) / 2;
            if(mid * (mid + 1) <= 2 * pr[i].second){
                l = mid;
            }else{
                r = mid;
            }
        }

        ans += l;
    }

    cout << ans << endl;

}
