#include <bits/stdc++.h>
using namespace std;

vector<int> prime;
vector<bool> filter(200,true);
int n, p, s, X[20], dem, ans[20000][15];

void in(){
	for(int i = 1; i <= dem; i++){
		for(int j = 1; j <= n; j++)
			cout << prime[ans[i][j]] << " ";
		cout << endl;
	}
}

void prime_filter(){
	for(int i = 2; i <= sqrt(200); i++){
		for(int j = i * i; j <= 200; j += i) filter[j] = false;
	}
	prime.push_back(0);
	for(int i = 2; i < 200; i++){
		if(filter[i]) prime.push_back(i);
	}
}

bool check(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += prime[X[i]];
	}
	return sum == s;
}

void Try(int i){
	for(int j = X[i - 1] + 1; j < (int)prime.size(); j++){
		if(prime[j] > p){
			X[i] = j;
			if(i == n){
			if(check()){
				dem++;
				for(int k = 1; k <= n; k++)
					ans[dem][k] = X[k];
				}
			}
			else Try(i + 1);
		}
	}
}

void testCase(){
	cin >> n >> p >> s;
	dem = 0;
	X[0] = 0;
	Try(1);
	cout << endl;
	cout << dem << endl;
	in();
}

int main(){
	prime_filter();
	int t; cin >> t;
	while(t--) testCase();
}