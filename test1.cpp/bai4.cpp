#include<bits/stdc++.h>
using namespace std;

vector<int> List[1005];

void testcase(){
	for(int i = 1; i <1005; i++) List[i].clear();
	int v,e;
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int u, v;
		cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	int chan = 0, le = 0;
	for(int i = 1; i <= v; i++){
		if(List[i].size() % 2 == 0) chan ++;
		else le ++;
	}
	if(le == 0){
		cout << 2 << endl;
		return;
	}
	if(le == 2){
		cout << 1 << endl;
		return;
	}
	else{
		cout << 0 << endl;
		return;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
