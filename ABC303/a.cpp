#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define all(x) (x).begin(), (x).end()
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
    string s, t;
    cin >> n >> s >> t;

    bool ok = true;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            if((s[i] == '1' && t[i] == 'l') || (s[i] == '0' && t[i] == 'o') ||(s[i] == 'l' && t[i] == '1') || (s[i] == 'o' && t[i] == '0') ){
            }else{
                ok = false;
            }
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

}
