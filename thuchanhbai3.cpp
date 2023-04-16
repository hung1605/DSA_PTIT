#include <bits/stdc++.h>
using namespace std;


void testCase(){
	long long n, m;
	cin >> m >> n;
	long long a[n + 5], b[n + 5], l_blue[n + 5], r_blue[n + 5], l_yellow[n + 5], r_yellow[n + 5];
	for(long long i = 1; i <= n; i++){
		cin >> a[i];
		b[i] = m - a[i];
	}
	stack<long long> st1, st2, st3, st4;
	for(long long i = 1; i <= n; i++){
		while(!st1.empty() and b[st1.top()] >= b[i]) st1.pop();
		if(st1.empty()) l_blue[i] = 1;
		else l_blue[i] = st1.top() + 1;
		st1.push(i);
		//////////////////////////////////////////////////////////////
		while(!st3.empty() and a[st3.top()] >= a[i]) st3.pop();
		if(st3.empty()) l_yellow[i] = 1;
		else l_yellow[i] = st3.top() + 1;
		st3.push(i);
	}
	for(long long i = n; i >= 1; i--){
		while(!st2.empty() and b[st2.top()] >= b[i]) st2.pop();
		if(st2.empty()) r_blue[i] = n;
		else r_blue[i] = st2.top() - 1;
		st2.push(i);
		//////////////////////////////////////////////////////////
		while(!st4.empty() and a[st4.top()] >= a[i]) st4.pop();
		if(st4.empty()) r_yellow[i] = n;
		else r_yellow[i] = st4.top() - 1;
		st4.push(i);
	}
	long long maxarea = 0;
	for(long long i = 1; i <= n; i++){
		maxarea = max(maxarea, b[i] * (r_blue[i] - l_blue[i] + 1));
		maxarea = max(maxarea, a[i] * (r_yellow[i] - l_yellow[i] + 1));
	}
	cout << maxarea << endl;
}

int main(){
	testCase();
}

