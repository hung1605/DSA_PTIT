#include<bits/stdc++.h>
using namespace std;
int num = 1000000;
vector<bool> prime(num,true);
void filter(){
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(num); i++){
		if(prime[i]){
			for(int j = i * i; j < num; j += i){
				prime[j] = false;
			}
		}
	}
}
void testCase(){
	int n; cin >> n;
	for(int i = 2; i < n; i++){
		if(prime[i] and prime[n - i]){
			cout << i << " " << n - i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main(){
	filter();
	int t; cin >> t;
	while(t--) testCase();
}