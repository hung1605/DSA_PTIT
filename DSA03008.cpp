#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int s[n], f[n];
	for(int i = 0; i < n; i++) cin >> s[i];
	for(int i = 0; i < n; i++) cin >> f[i];
	vector<pair<int,int>> v;
	for(int i = 0; i < n; i++){
		v.push_back({s[i], f[i]});
	}
	sort(v.begin(), v.end(), [](pair<int,int> a, pair<int, int> b){
		return a.second < b.second;
	});
	int time = 0, cnt = 0;
	for(int i = 0; i < n; i++){
		if(v[i].first >= time){
			cnt++;
			time = v[i].second;
		}
	}
	cout << cnt << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}