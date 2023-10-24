#include <bits/stdc++.h>
using namespace std;

stack<int> st;
vector<int> List[1005];
bool chuaxet[1005];

void DFS(int u){
	chuaxet[u] = false;
	for(int v : List[u]){
		if(chuaxet[v]) DFS(v);
	}
	st.push(u);
}

int main(){
	
}