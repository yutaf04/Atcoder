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

    int n, d;
    cin >> n >> d;

    vector<int> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];

    for(int i = 1; i < n; i++){
        if(t[i] - t[i-1] <= d){
            cout << t[i] << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}
