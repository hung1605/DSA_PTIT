#include <bits/stdc++.h>
using namespace std;
#define ii pair<int,int>

vector<pair<int, int>> List[250000];
int n, m;
int a[1000][1000];

bool valid_square(int i, int j){
	return 0 <= i and i < n and 0 <= j and j < m;
}

int vertex_th(int i, int j){
	return i*m + j + 1;
}

void put_neighborh_vertex(int i, int j){
	if(valid_square(i - 1, j))
		List[vertex_th(i, j)].push_back({vertex_th(i - 1, j), a[i - 1][j]});
	if(valid_square(i, j - 1))
		List[vertex_th(i, j)].push_back({vertex_th(i, j - 1), a[i][j - 1]});
	if(valid_square(i + 1, j))
		List[vertex_th(i, j)].push_back({vertex_th(i + 1, j), a[i + 1][j]});
	if(valid_square(i, j + 1))
		List[vertex_th(i, j)].push_back({vertex_th(i, j + 1), a[i][j + 1]});
}

void djikstra(int s, int t){
	vector<int> d(n*m + 1, 1e9);
	d[s] = a[0][0];
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({d[s], s});
	while(!q.empty()){
		int u = q.top().second;
		int kc = q.top().first;
		q.pop();
		if(kc > d[u]) continue;
		for(auto it : List[u]){
			int v = it.first;
			int w = it.second;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
	}
	cout << d[t] << endl;
}


void testCase(){
	for(auto &i : List){i.clear();}
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			put_neighborh_vertex(i, j);	
		}
	}
	djikstra(1, n * m);
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}