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
    cin >> n;

    vector<vector<int> > a(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int> > b(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }


    for(int num = 0; num < 4; num++){
        vector<vector<int> > c(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                c[i][j] = a[n - 1 - j][i];
            }
        }

        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         cout << c[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        bool ok = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(c[i][j]){
                    if(!b[i][j]){
                        ok = false;
                        break;
                    }
                }
            }

            if(!ok) break;
        }

        if(ok){
            cout << "Yes" << endl;
            return 0;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = c[i][j];
            }
        }
    }

    cout << "No" << endl;
}
