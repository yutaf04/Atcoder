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

    int n;
    string s;
    cin >> n >> s;

    bool ok = true;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(s[i] == 'x'){
            ok = false;
        }

        if(s[i] == 'o'){
            flag = true;
        }
    }

    if(ok && flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
