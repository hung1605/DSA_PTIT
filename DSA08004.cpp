#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int k;
	string s; 
	cin >> k >> s;
	long long value = 0;
	map<char,int> mp;
	priority_queue<long long> q;
	if(s.size() <= k){
		cout << 0; 
		return;
	}
	for(auto i : s) mp[i]++;
	for(auto i : mp) q.push(i.second);
	while(k--){
		int m = q.top() - 1;
		q.pop();
		q.push(m);
	}
	while(!q.empty()){
		value += q.top()*q.top();
		q.pop();
	}
	cout << value << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}