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

    int n, q;
    cin >> n >> q;

    map<int, set<int> > box;
    map<int, multiset<int> > num;
    while(q--){
        int t;
        cin >> t;

        if(t == 1){
            int i, j;
            cin >> i >> j;
            box[i].insert(j);
            num[j].insert(i);
        }

        if(t == 2){
            int i;
            cin >> i;

            for(auto k: num[i]){
                cout << k << " ";
            }
            cout << endl;
        }

        if(t == 3){
            int i;
            cin >> i;

            for(auto k: box[i]){
                cout << k << " ";
            }
            cout << endl;
        }
    }
}
