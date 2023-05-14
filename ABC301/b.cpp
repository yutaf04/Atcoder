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

void upsolve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << a[0] << " ";
    for(int i = 1; i < n; i++){
        if(a[i-1] < a[i]){
            for(int j = a[i-1] + 1; j <= a[i]; j++){
                cout << j << " ";
            }
        }else{
            for(int j = a[i-1] - 1; j >= a[i]; j--){
                cout << j << " ";
            }
        }
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> c;
    c.push_back(a[0]);
    for(int i = 1; i < (int)a.size(); i++){
        if(a[i] != (a[i-1] + 1) && a[i] != (a[i-1] - 1)){
            if(a[i-1] > a[i]){
                int d = a[i - 1] - 1;
                while(d != a[i]){
                    c.push_back(d);
                    d--;
                }
            }else{
                int d = a[i - 1] + 1;
                while(d != a[i]){
                    c.push_back(d);
                    d++;
                }
            }
        }
        c.push_back(a[i]);
    }
    
    for(int i = 0; i < (int)c.size(); i++){
        cout << c[i] << " ";
    }
    cout << endl;

}


/*
メモ

新たに配列を作り直す必要はない
配列の前の値の差が1でなければその間の数字を出力していくだけ

*/
