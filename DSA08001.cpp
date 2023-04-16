#include <bits/stdc++.h>
using namespace std;

void testCase(){
	queue<int> q;
	int n; cin >> n;
	while(n--){
		int option;
		cin >> option;
		switch(option){
		case 1:
			cout << q.size() << endl;
			break;
		case 2:
			cout << (q.empty() == true ? "YES\n" : "NO\n");
			break;
		case 3:
			int num; cin >> num;
			q.push(num);
			break;
		case 4:
			if(!q.empty()) q.pop();
			break;
		case 5:
			cout << (q.empty() == true ? -1 : q.front());
			cout << endl;
			break;
		case 6:
			cout << (q.empty() == true ? -1 : q.back());
			cout << endl;
			break;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}