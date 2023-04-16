#include <bits/stdc++.h>
using namespace std;

void testCase(){
	map<int, bool> mp;
	int n; cin >> n;
	queue<pair<int, int>> q;
	q.push({n, 0});
	while(!q.empty()){
		int value = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if(value == 2){
			cout << cnt + 1 << endl;
			return;
		}
		for(int i = 2; i <= sqrt(value); ++i){
			if(value % i == 0 and !mp[value / i]){
				q.push({value / i, cnt+1});
				mp[value/i] = true;
			}
		}
		q.push({value - 1,cnt + 1});
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}