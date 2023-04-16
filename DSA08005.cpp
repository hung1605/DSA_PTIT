#include <bits/stdc++.h>
using namespace std;

void testCase(){
	queue<string> q;
	q.push("1");
	int n; cin >> n;
	while(n--){
		string s = q.front();
		cout << s << " ";
		q.pop();
		q.push(s + "0");
		q.push(s + "1");
	}
	cout << endl;
}

int main(){
	int t; cin >> t; 
	while(t--) testCase();
}