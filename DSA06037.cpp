#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	int a[n + 5];
	for(int i = 1; i <=n; i++)
		cin >> a[i];	
	int max_left[n + 5], min_right[n + 5];
	max_left[1] = a[1];
	for(int i = 2; i <= n; i++){
		max_left[i] = max(max_left[i - 1], a[i]);
	}
	min_right[n] = a[n];
	for(int i = n - 1; i >= 1; i--){
		min_right[i] = min(min_right[i + 1], a[i]);
	}
	vector<int> ans;
	for(int i = 1; i < n; i++){
		if(max_left[i] <= min_right[i + 1]){
			ans.push_back(i);
		}
	}
	// for(int i = 1; i <= n; i++)
	// 	cout << max_left[i] << " ";
	// cout << endl;
	// for(int i = 1; i <= n; i++)
	// 	cout << min_right[i] << " ";
	// cout << endl;
	cout << ans.size() << endl;
	if(ans.size() == 0) cout << endl;
	else{
		for(auto i : ans) cout << i << " ";
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}