#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int sz[100005];
set<int> s;

int find_set(int v) {
    return v == parent[v] ? v : parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    sz[v] = 1; 
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b]) swap(a, b); 
        parent[b] = a;
        sz[a] += sz[b];
    } 	
}

int main(){
	int t; cin >> t;
	while(t--){
		int x, y, z;
		cin >> x >> y >> z;
		if(z == 1){
			if(s.count(x) == 0) make_set(x);	
			if(s.count(y) == 0) make_set(y);	
			union_sets(x, y);
		}
		if(z == 2){
			if(s.count(x) == 0 or s.count(y) == 0)
				cout << 0 << endl;
			else{
				x = find_set(x);
			    y = find_set(y);
			    if (x != y) cout << 0 << endl;
			    else cout << 1 << endl;	
			}
		}
	}
}