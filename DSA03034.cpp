#include <bits/stdc++.h>
using namespace std;

map<int,int> common(map<int, int> a, map<int, int> b){
	map<int, int> res;
	for(auto i : a){
		if(b.find(i.first) != b.end()){
			res[i.first] = min(i.second, b[i.first]);
		}
	}
	return res;
}

void testCase(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[n],b[m],c[k];
	map<int,int> ma, mb, mc; 
	for(int &i : a){
		cin >> i;
		ma[i]++;
	}
	for(int &i : b){
		cin >> i;
		mb[i]++;
	} 
	for(int &i : c){
		cin >> i;
		mc[i]++;	
	} 
	map<int, int> chung = common(mc, common(ma,mb));
	for(auto i : chung){
		for(int j = 0; j < i.second; j++){
			cout << i.first << " ";
		}
	}
	if(chung.size() == 0) cout << "NO";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}