#include <bits/stdc++.h>
using namespace std;

vector<int> List[25];
bool chuaxet[25];
int V, E;
bool check;

int findParent(int u){
	if(u != parent[u]){
		parent[u] = findParent(parent[u]);
	}
	return parent[u];
}

void Union(int u, int v){
	int a = findParent(u), b = findParent(v);
}

void testCase(){
	
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}