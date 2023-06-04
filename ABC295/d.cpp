#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();

    string t;
    map<string, long long> mp;
    for(int i = 0; i < 10; i++) t.push_back('0');
    mp[t]++;
    //cout << t << endl;

    for(int i = 0; i < n; i++){
        int j = s[i] - '0';
        int k = t[j] - '0'; 
        k++;
        k %= 2;
        t[j] = (char)('0' + k);
        mp[t]++;
        //cout << t << endl;
    }

    long long ans = 0;
    for(auto [k, v]: mp){
        ans += v * (v - 1) / 2;
    }

    cout << ans << endl;
}



/*
20230322

00000000
00100000
10100000
10000000
10010000
00010000
00000000
00100000
00000000

*/
