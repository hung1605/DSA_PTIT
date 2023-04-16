#include <bits/stdc++.h>
using namespace std;

long long conver(string s, int start, int end){
	long long num = 0;
	for(int i = start; i <= end; i++){
		num = num * 10 + s[i] - '0'; 
	}	
	return num;
}

void testCase(){
	string n; cin >> n;
	n = "0" + n;
	long long dp[20];
	long long sum = 0;
	dp[1] = n[1] - '0';
	for(int i = 2; i < (int)n.size(); i++){
		sum = 0;
		for(int j = i; j >= 1; j--){
			sum += conver(n, j, i);
		}
		dp[i] = dp[i - 1] + sum;
	}
	cout << dp[n.size() - 1] << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}