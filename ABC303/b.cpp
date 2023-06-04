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

    int n, m;
    cin >> n >> m;

    vector<vector<int> > a(m, vector<int>(n, 0));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    vector<vector<bool> > flag(n+1, vector<bool>(n+1, false));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n - 1; j++){
            flag[a[i][j]][a[i][j+1]] = true;
            flag[a[i][j+1]][a[i][j]] = true;
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            if(!flag[i][j]){
                //cout << i << " " << j << endl;
                ans++;
            }
        }
    }

    cout << ans << endl;
}
