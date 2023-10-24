#include <bits/stdc++.h>
using namespace std;

vector<int> List[100005];
int color[100005];
bool check;

void dfs(int u){
    color[u] = 1;
    for(auto v : List[u]){
        if(color[v] == 0) dfs(v);
        if(color[v] == 1) check = false;
    }
    color[u] = 2;
}

void TestCase() {
    for(auto &i : List) i.clear();
    check = true;
    map<string, int> mp;
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        string a, b;
        char c;
        cin >> a >> c >> b;
        if(!mp.count(a)) mp[a] = ++cnt;  
        if(!mp.count(b)) mp[b] = ++cnt;
        if(c == '>') List[mp[a]].push_back(mp[b]);
        else List[mp[b]].push_back(mp[a]);
    }
    for(int i = 1; i <= cnt; i++){
        memset(color, 0, sizeof(color));
        dfs(i);
        if(!check){
            cout << "imposible\n";
            return;
        }
    }
    cout << "posible\n";
}

int main() {
    int T = 1;
    while (T--) TestCase();
}
