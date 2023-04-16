#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin >> n;
	int a[n + 5][n + 5];
	vector<int> adj[n + 1];
	for(auto &i : adj) i.clear();
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j]){
				adj[i].push_back(j);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(auto j : adj[i]) cout << j << " ";
		cout << endl;
	}
}
