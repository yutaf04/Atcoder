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

    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w-1; j++){
            if(s[i][j] == 'T' && s[i][j+1] == 'T'){
                s[i][j] = 'P';
                s[i][j+1] = 'C';
                j++;
            }
        }

        cout << s[i] << endl;
    }
    cout << endl;

}
