#include <bits/stdc++.h>
using namespace std;

void testCase(){
	long long n;
	queue<string> q;
	q.push("1");
	cin >> n;
	while(true){
		string s = q.front();
		q.pop();
		long long num = stoll(s);
		if(num % n == 0){
			cout << num << endl;
			break;
		}
		q.push(s + "0");
		q.push(s + "1");
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}