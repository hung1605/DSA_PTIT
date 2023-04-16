#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int s, t; cin >> s >> t;
	vector<bool> chuaxet(100001, true);
	queue<pair<int,int>> q;
	q.push({s,0});
	set<int> sEt;
	while(!q.empty()){
		int value = q.front().first;
		int time = q.front().second;
		q.pop();
		if(value == t){
			cout << time << endl;
			return;
		}
		if(value > 1 and chuaxet[value - 1] == true){
			q.push({value - 1, time + 1});
			chuaxet[value - 1] = false;
		}
		if(value < t and chuaxet[value * 2] == true){
			q.push({value * 2, time + 1});
			chuaxet[value * 1] = false;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}