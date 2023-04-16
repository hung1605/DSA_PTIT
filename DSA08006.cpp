#include <bits/stdc++.h>
using namespace std;

void testCase(){
	queue<string> q;
	q.push("9");
	int n; cin >> n;
	while(true){
		string s = q.front();
		long long num = stoll(s);
		if(num % n == 0){
			cout << num;
			break;
		}
		q.pop();
		q.push(s + "0");
		q.push(s + "9");
	}
	cout << endl;
}

int main(){
	int t; cin >> t; 
	while(t--) testCase();
}