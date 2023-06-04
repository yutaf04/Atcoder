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

void solve(){
    int n;
    string s;
    cin >> n >> s;

    int t = 0, a = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'T') t++;
        else a++;
    }

    if(t > a) cout << 'T' << endl;
    else if(t < a) cout << 'A' << endl;
    else {
        if(s.back() == 'A') cout << 'T' << endl;
        else cout << 'A' << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;

    int t = 0, a = 0;
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'T'){
            t++;
            flag = 0;
        }
        if(s[i] == 'A'){
            a++;
            flag = 1;
        }
    }

    if(t != a){
        if(t > a) cout << 'T' << endl;
        else cout << 'A' << endl;
    }else{
        if(flag) cout << 'T' << endl;
        else cout << 'A' << endl;
    }
}


/*
TとAの個数をカウント→多い方を出力
個数が同じ場合は最後の文字をみる
最後がA(T) →先にT(A)が同数になっているはず
*/
