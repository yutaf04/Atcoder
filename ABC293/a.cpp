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

    string s;
    cin >> s;

    for(int i = 1; i < s.size()/2 + 1; i++){
        swap(s[2 * i - 2], s[2 * i - 1]);
    }

    cout << s << endl;
}
