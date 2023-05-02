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
// #include <atcoder/all>
// using namespace atcoder;
// using mint = modint998244353;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<bool> flag(n, false);

    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if(!flag[i]){
            flag[a] = true;
        }
    }

    int k = 0;
    for(int i = 1; i <= n; i++){
        if(!flag[i]) k++;
    }

    cout << k << endl;
    for(int i = 1; i <= n; i++){
        if(flag[i]) cout << i << " ";
    }
    cout << endl;
    
}
