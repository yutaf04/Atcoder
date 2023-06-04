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

    string s, t;
    cin >> s >> t;

    int n = s.size();
    set<char> S = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
    vector<int> alpha1(26, 0), alpha2(26, 0);

    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '@') a++;
        if(t[i] == '@') b++;
        if(s[i] != '@') alpha1[s[i] - 'a']++;
        if(t[i] != '@') alpha2[t[i] - 'a']++;
    }

    
    bool flag = true;
    for(int i = 0; i < 26; i++){
        if(alpha1[i] != alpha2[i]){
            if(S.count(char('a' + i))){
                int d = abs(alpha1[i] - alpha2[i]);
                if(alpha1[i] < alpha2[i]) a -= d;
                else b -= d;
            }else{
                flag = false;
            }
        }
    }

    //cout << a << " " << b << endl;
    if(a >= 0 && b >= 0 && flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}


/*

メモ

SとTのアルファベットの個数をカウント
@の個数もカウント

どちらかのアルファベットが足りない場合は
それがatcoder上の文字ならば@から使う
そうでないならばNo

SとT両方の@の個数が0以上ならYes
それ以外はNo

*/
