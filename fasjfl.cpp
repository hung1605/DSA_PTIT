// a ^ b;

#include<bits/stdc++.h>
using namespace std;

int sum(int n){
	if(n == 1) return 1;
	return sum(n - 1) + n;
}

int fibonaci(int n){
	if(n == 0 or n == 1) return 1;
	return fibonaci(n - 1) + fibonaci(n - 2);
}

long long luythua(long long a, long long b, long long c){
	if(b == 1) return a;
	long long tamthoi = luythua(a,b / 2, c) % c;
	if(b % 2 == 0) return (tamthoi * tamthoi ) % c;
	else return (tamthoi * tamthoi * a) % c;
}

int main(){
	int n; cin >> n;
	int a[1005];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int left = 1, right = n;
	while(left <= right){
		int mid = left + (right - left) / 2;
		if(a[mid] == x){
			cout << mid;
			break;
		}
		if(a[mid] < x){
			left = mid + 1;
		}
		else right = mid - 1;
	}
}