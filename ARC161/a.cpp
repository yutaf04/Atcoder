#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(begin(a), end(a));

    int m = n - n / 2;
    int j = 0;
    bool ok = true;
    for(int i = m; i < n; i++){
        if(!(a[i] > a[j] && a[i] > a[j+1])){
            ok = false;
        }
        j++;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}
