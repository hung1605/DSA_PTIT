#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    pair<int,int> a[n];
    int dp[n];
    int ans = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a, a + n, [](pair<int,int> a, pair<int,int> b){
        return a.first < b.first;
    });
    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[j].second < a[i].first)
                dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--) testCase();
}