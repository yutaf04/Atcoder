#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template<typename T>
void printArray(vector<T>& v){
    ll vsize = v.size();
    for(int i = 0; i < v.size(); i++){
        if(i > 0) cout << ' '; 
        cout << v[i];         
    }
    cout << "\n";
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;
    vector<int> c, d;
    int cnt = 1;
    while(1){
        if(a[i] < b[j]){
            c.push_back(cnt++);
            i++;
        }else{
            d.push_back(cnt++);
            j++;
        }

        if(i == n){
            while(d.size() < m) d.push_back(cnt++);
            break;
        }

        if(j == m){
            while(c.size() < n) c.push_back(cnt++);
            break;
        }
    }

    printArray(c);
    printArray(d);

}
