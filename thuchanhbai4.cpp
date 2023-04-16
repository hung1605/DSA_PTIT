#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n + 5];
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	int l[n+5], r[n+5];
	stack<int> st;
	for(int i = 1; i <= n; i++){
		while(!st.empty() and a[st.top()] <= a[i]) st.pop();
		if(st.empty()) l[i] = 0;
		else l[i] = st.top();
		st.push(i);
	}
	stack<int> st2;
	for(int i = n; i >= 1; i--){
		while(!st2.empty() and a[st2.top()] <= a[i]) st2.pop();
		if(st2.empty()) r[i] = n + 1;
		else r[i] = st2.top();
		st2.push(i);
	}
	int cnt = 0;
	for(int i = 1; i <= n - 1; i++){
		int j = i + 1;
		while(r[i] >= j and l[j] <= i and j <= n){
			cnt++;
			j++;
		} 
	}
	cout << cnt;
}

int main(){
	testCase();
}

