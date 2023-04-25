#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define all(xx) (xx).begin(), (xx).end()
//const int MOD = 1000000007;
const int MOD = 998244353;
const int INF32 = numeric_limits<int>::max();
const ll INF64 = numeric_limits<ll>::max();
template<typename T> void chmax(T& a, const T& b){if(a < b) a = b;}
template<typename T> void chmin(T& a, const T& b){if(a > b) a = b;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    vector<int> c(n), r(n);
    for(int i = 0; i < n; i++) cin >> c[i];
    for(int i = 0; i < n; i++) cin >> r[i];

    int maxV = 0, ans = 0, ans2 = 1;
    bool flag = false;
    int maxr = r[0];
    for(int i = 0; i < n; i++){
        if(c[i] == t){
            if(r[i] > maxV){
                maxV = r[i];
                ans = i + 1;
                flag = true;
            }
        }

        if(c[i] == c[0]){
            if(r[i] > maxr){
                maxr = r[i];
                ans2 = i + 1;
            }
        }
    }

    if(flag) cout << ans << endl;
    else cout << ans2 << endl;

}
