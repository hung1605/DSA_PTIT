#include <bits/stdc++.h>
using namespace std;

void testCase(){
	long long n;
	queue<string> q;
	q.push("1");
	cin >> n;
	int count = 0;
	while(true){
		string s = q.front();
		q.pop();
		long long num = stoll(s);
		if(num <= n) count++;
		else break;
		q.push(s + "0");
		q.push(s + "1");
	}
	cout << count << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}