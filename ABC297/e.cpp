#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    sort(begin(a), end(a));

    priority_queue<long long, vector<long long>, greater<long long> >pq;
    set<long long> used;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(!used.count(a[i])){
            pq.push(a[i]);
        }
        used.insert(a[i]);
    }

    int cnt = 0;
    while(1){
        long long t = pq.top(); pq.pop();
        cnt++;
        
        if(cnt == k){
            cout << t << endl;
            return 0;
        }

        used.insert(t);
        for(int i = 0; i < n; i++){
            if(!used.count(t + a[i])){
                pq.push(t + a[i]);
                used.insert(t + a[i]);
            }
        }
    }
}
