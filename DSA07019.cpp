#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	long long hist[n];
	for(int i = 0; i < n; i++) cin >> hist[i];
	long long tp, area_with_top, max_area = 0;
	stack<int> st;
	for(int i = 0; i < n; i++){
		if(st.empty() or (hist[i] >= hist[st.top()]) ) st.push(i);
		else{
			tp = st.top(); st.pop();
			area_with_top = hist[tp] * (st.empty() ? i : i - st.top() - 1);
			i--;
			max_area = max(max_area, area_with_top);
		}
	}
	while(st.empty() == false){
		tp = st.top(); st.pop();
		area_with_top = hist[tp] * (st.empty() ? n : n - st.top() - 1);
		max_area = max(max_area, area_with_top);
	}
	cout << max_area << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}

