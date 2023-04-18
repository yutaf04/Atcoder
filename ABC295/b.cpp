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

    int r, c;
    cin >> r >> c;

    vector<string> C(r);
    for(int i = 0; i < r; i++) cin >> C[i];


    vector<vector<bool> > flag(r, vector<bool>(c, false));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(C[i][j] != '.' && C[i][j] != '#'){
                int num = C[i][j] - '0';

                for(int k = 0; k < r; k++){
                    for(int l = 0; l < c; l++){
                        if(abs(k - i) + abs(l - j) <= num){
                            flag[k][l] = true;
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(C[i][j] != '.' || flag[i][j]) cout << '.';
            else cout << C[i][j];
        }
        cout << endl;
    }
    cout << endl;

}
