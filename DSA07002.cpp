#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	stack<int> st;
	cin.ignore();
	while(t--){
		string s; getline(cin, s); 
		stringstream ss(s);
		string first = "", second = "", tmp;
		while(ss >> tmp){
			if(first.size() == 0) first = tmp;
			else second = tmp;
		}
		if(first == "PUSH") st.push(stoi(second));
		else if(first == "PRINT"){
			if(st.size() == 0) cout << "NONE";
			else{
				cout << st.top();
			}
			cout << endl;
		}
		else if(first == "POP")
			if(!st.empty()) st.pop();
	}
}