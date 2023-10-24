#include <bits/stdc++.h>
using namespace std;
#define ii pair<int,int>

vector<int> List[250000];
int n, m;
bool chuaxet[250000];

int calculate_tree_height(int u){
	int maxheight = 0;
	queue<pair<int,int>> q;
	q.push({1,u});
	chuaxet[u] = false;
	while(!q.empty()){
		int v = q.front().second;
		int height = q.front().first;
		maxheight = max(maxheight, height);
		q.pop();
		for(auto t : List[v]){
			if(chuaxet[t]){
				q.push({height + 1, t});
				chuaxet[t] = false;
			}
		}
	}
	return maxheight;
}

void testCase(){
	for(auto &i : List) i.clear();
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	int center_vertex;
	int height_estimate = 1e9;
	for(int i = 1; i <= n; i++){
		memset(chuaxet, true, sizeof(chuaxet));
		int this_tree_height = calculate_tree_height(i);
		if(height_estimate > this_tree_height){
			height_estimate = this_tree_height;
			center_vertex = i;
		}
	}
	int x = List[center_vertex].size();
	int y = m / x - 1;
	cout << x << " " << y << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}