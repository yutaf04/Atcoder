#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long ans = 0;
    while(a != b){
        if(a > b) swap(a, b);
        ans += (b - 1) / a;
        b -= (b - 1) / a * a;
    }

    cout << ans << endl;
}
