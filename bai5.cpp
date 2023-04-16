#include <bits/stdc++.h>
using namespace std;

int dp[1000005];

bool confirm(int n){
	int m = n;
    int res = 1;
    for(int i = 2; i <= sqrt(n); i++){
    	int curr_sum = 1;
    	int curr_temp = 1;
    	while(n % i == 0){
    		n /= i;
    		curr_temp *= i;
    		curr_sum += curr_temp;
    	}
    	res *= curr_sum;
    }
    if(n >= 2)
    	res *= (1 + n);
    return res > 2*m;
}

int main(){
    int a,b;
    cin >> a >> b;
    dp[1] = 0;
    for(int i = 2; i <= b; i++){
        dp[i] = dp[i - 1];
        if(confirm(i)) dp[i]++;
    }
    cout << dp[b] - dp[a - 1];
}