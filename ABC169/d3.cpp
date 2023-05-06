#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<int> pr;
    //prime-factorize
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                n /= i;
                cnt++;
            }

            pr.emplace_back(cnt);
        }
    }

    if(n != 1) pr.emplace_back(1);
    int m = pr.size();

    int ans = 0;
    for(int i = 0; i < m; i++){
        for(int j = 1; j <= 100; j++){
            if(pr[i] >= j){
                pr[i] -= j;
                ans++;
            }else{
                break;
            }
        }
    }

    cout << ans << endl;

}
