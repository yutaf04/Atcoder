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

    string s;
    cin >> s;

    bool ok = true;
    vector<int> tmp, tmp2;
    int k;
    for(int i = 0; i < 8; i++){
        if(s[i] == 'B'){
            tmp.push_back(i);
        }

        if(s[i] == 'K'){
            k = i; 
        }

        if(s[i] == 'R'){
            tmp2.push_back(i);
        }
    }

    if(tmp[0] % 2 == tmp[1] % 2){
        ok = false;
    }

    if(!(tmp2[0] < k && k < tmp2[1])){
        ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

}
