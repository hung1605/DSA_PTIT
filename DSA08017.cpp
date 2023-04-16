#include <bits/stdc++.h>
using namespace std;

void testCase(){
	queue<string> q;
	queue<string> q2;
	int n; cin >> n;
	vector<string> ans;
	q.push("6");
	q.push("8");
	while((int)q.front().size() <= n){
		string s = q.front();
		ans.push_back(s);
		q.pop();
		q.push(s + "6");
		q.push(s + "8");
	}
	sort(ans.begin(), ans.end(), [](string a, string b){
		if(a.size() == b.size()) return a > b;
		return a.size() > b.size();
	});
	for(auto i : ans) cout << i << " ";
	cout << endl;
}

int main(){
	int t; cin >> t; 
	while(t--) testCase();
}