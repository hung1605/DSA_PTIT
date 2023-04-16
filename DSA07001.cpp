#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	stack<int> st;
	while(getline(cin, s)){
		stringstream ss(s);
		string first = "", second = "", tmp;
		while(ss >> tmp){
			if(first.size() == 0) first = tmp;
			else second = tmp;
		}
		if(first == "push") st.push(stoi(second));
		else if(first == "show"){
			if(st.size() == 0) cout << "empty";
			else{
				stack<int> temp;
				while(!st.empty()){
					temp.push(st.top());
					st.pop();
				}
				while(!temp.empty()){
					cout << temp.top() << " ";
					st.push(temp.top());
					temp.pop();
				}
			}
			cout << endl;
		}
		else if(first == "pop") st.pop();
	}
}