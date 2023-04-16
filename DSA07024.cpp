#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n], left[n], right[n];
	for(auto &i : a) cin >> i;
	stack<long long> st, st2;
	int ans = 0;
	for(int i = 0; i < n; i++){
		while(!st.empty() and a[st.top()] >= a[i]) st.pop();
		left[i] = st.empty() ? 0 : st.top() + 1;
		st.push(i);
	}
	for(int i = n - 1; i >= 0; i--){
		while(!st2.empty() and a[st2.top()] >= a[i]) st2.pop();
		right[i] = st2.empty() ? n - 1 : st2.top() - 1;
		st2.push(i);
	}
	for(int i = 0; i < n; i++){
		if(right[i] - left[i] + 1 >= a[i])
			ans = max(ans,a[i]);
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) testCase();
}
