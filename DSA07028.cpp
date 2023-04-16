#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	stack<int> st;
	vector<int> ans(n + 5);
	for(int i = 1; i <= n; i++){
		if(st.empty() or a[st.top()] > a[i]){
			ans[i] = 1;
			st.push(i);
		}
		else{
			while(!st.empty() and a[st.top()] <= a[i])
				st.pop();
			ans[i] = st.empty() ? i : i - st.top();
			st.push(i);
		}
	}
	for(int i = 1; i <= n; i++) cout << ans[i] << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}