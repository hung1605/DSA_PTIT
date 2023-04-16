#include<bits/stdc++.h>
using namespace std;
int dp[1000000], a[1000000];

void testCase(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    dp[1] = a[1];
    dp[2] = max(a[1], a[2]);
    for(int i = 2; i <= n; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    }
    cout << dp[n] << endl;
}

int main(){
    int t; cin >> t;
    while(t--) testCase();
}