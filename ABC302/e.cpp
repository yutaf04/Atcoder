#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<set<int> > deg(n);
    int now = n;
    while(q--){
        int t;
        cin >> t;

        if(t == 1){
            int u, v;
            cin >> u >> v;
            u--; v--;
            if(deg[u].empty()) now--;
            if(deg[v].empty()) now--;
            deg[u].insert(v);
            deg[v].insert(u);
        }else{
            int v;
            cin >> v;
            v--;
            if(!deg[v].empty()){
                while(!deg[v].empty()){
                    int u = *deg[v].begin();
                    deg[v].erase(u);
                    deg[u].erase(v);
                    if(deg[u].empty()){
                        now++;
                    }     
                }
                now++;
            }
        }

        cout << now << endl;
    }
}
