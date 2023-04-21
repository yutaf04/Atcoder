#include <bits/stdc++.h>
using namespace std;
#define all(xx) (xx).begin(), (xx).end()

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n), b(m), c(n+m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    merge(all(a), all(b), begin(c));

    //sort(begin(c), end(c));
    for(int i = 0; i < n; i++) cout << lower_bound(all(c), a[i]) - begin(c) + 1 << " ";//cで何番目か
    cout << endl;

    for(int i = 0; i < m; i++) cout << lower_bound(all(c), b[i]) - begin(c) + 1 << " ";//cで何番目か
    cout << endl;

}

//merge
