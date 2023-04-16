#include <bits/stdc++.h>
using namespace std;

void testCase(){
	queue<int> q;
	int n; cin >> n;
	while(n--){
		string option; cin >> option;
		if(option == "PUSH"){
			int num; cin >> num;
			q.push(num);
		}
		else if(option == "PRINTFRONT"){
			if(q.empty()) cout << "NONE";
			else cout << q.front();
			cout << endl;
		}
		else
			if(!q.empty()) q.pop();	
	}
}

int main(){
	testCase();
}