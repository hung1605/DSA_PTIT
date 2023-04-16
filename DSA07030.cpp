#include <bits/stdc++.h>
using namespace std;

int largest_rectangle_in_histogram(int a[], int n){
	int left[n], right[n];
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
		ans = max(ans, (right[i] - left[i] + 1) * a[i]);
	}
	return ans;
}

void testCase(){
	int n, m;
	cin >> n >> m;
	int matrix[n + 5][m + 5];
	int result = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> matrix[i][j];
	}
	int arr[m] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			arr[j] = (matrix[i][j] == 1 ? arr[j] + matrix[i][j] : 0);
		result = max(result, largest_rectangle_in_histogram(arr, m));
	}
	cout << result << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) testCase();
}
