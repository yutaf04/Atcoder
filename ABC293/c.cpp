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

    int h, w;
    cin >> h >> w;

    vector<vector<ll> >a(h, vector<ll>(w, 0));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
        }
    }

    vector<int> p;
    for(int i = 0; i < h - 1; i++) p.push_back(1);
    for(int i = 0; i < w - 1; i++) p.push_back(2);

    int cnt = 0;
    do{

        int posx = 0;
        int posy = 0;
        set<int> s;
        bool ok = true;
        for(int i = 0; i < h + w - 2 + 1; i++){
            if(s.count(a[posx][posy])) ok = false;
            s.insert(a[posx][posy]);
            if(p[i] == 1) posx++;
            if(p[i] == 2) posy++;

            if(posx >= w || posy >= h) break;//これいらない
        }

        if(ok) cnt++;

    }while(next_permutation(all(p)));

    cout << cnt << endl;

}
