#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, int> > prime_factorize(long long n){
    vector<pair<long long, int> > res;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                n /= i;
                cnt++;
            }
            res.emplace_back(i, cnt);
        }
    }

    if(n != 1) res.emplace_back(n, 1);

    return res;
}

int main(){
    long long n;
    cin >> n;

    auto res = prime_factorize(n);
    // for(auto[f, s]: res){
    //     cout << f << " " << s << endl;
    // }

    int ans = 0;
    for(auto[f, s]: res){
        int sum = 0;
        for(long long v = max((long long) sqrt(2 * s) - 5, 0LL);; v++){
            if(v * (v + 1) <= 2 * s){
                sum = v;
            }else{
                break;
            }
        }

        ans += sum;
    }

    cout << ans << endl;   
}
