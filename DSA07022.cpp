#include<bits/stdc++.h>
using namespace std;

int solan[1000005];

void testcase(){
	memset(solan, 0, sizeof(solan));
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		solan[a[i]] ++;
	}
	int b[n];
	b[n - 1] = -1;
	stack<int> st;
	st.push(a[n - 1]);
	for(int i = n - 2; i >= 0; i--){
		while(!st.empty() and solan[a[i]] >= solan[st.top()]){
			st.pop();
		}
		if(st.empty()){
			b[i] = -1;
			st.push(a[i]);
		}
		else{
			b[i] = st.top();
			st.push(a[i]);
		}
	}
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
