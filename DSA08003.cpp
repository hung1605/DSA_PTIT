#include <bits/stdc++.h>
using namespace std;

void testCase(){
	deque<int> q;
	int n; cin >> n;
	while(n--){
		string option; cin >> option;
		if(option == "PUSHFRONT"){
			int num; cin >> num;
			q.push_front(num);
		}
		else if(option == "PRINTFRONT"){
			if(q.empty()) cout << "NONE";
			else cout << q.front();
			cout << endl;
		}
		else if(option == "POPFRONT"){
			if(!q.empty()) q.pop_front();
		}
		else if(option == "PUSHBACK"){
			int num; cin >> num;
			q.push_back(num);
		}
		else if(option == "PRINTBACK"){
			if(q.empty()) cout << "NONE";
			else cout << q.back();
			cout << endl;
		}
		else{
			if(!q.empty()) q.pop_back();
		}
	}
}

int main(){
	testCase();
}