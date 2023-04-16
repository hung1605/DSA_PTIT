#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	vector<int> answer(n);
	stack<int> st;
	int a[n];
	for(auto &i : a) cin >> i;
	for(int i = n - 1; i >= 0; i--){
		if(st.empty()){
			st.push(a[i]);
			answer[i] = -1;
		}
		else{
			while(!st.empty() and st.top() <= a[i]){
				st.pop();
			}
			if(st.empty())
				answer[i] = -1;
			else
				answer[i] = st.top();
			st.push(a[i]);
		}
	}
	for(auto i : answer)
		cout << i << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--) testCase();
}