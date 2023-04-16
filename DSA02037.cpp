#include <bits/stdc++.h>
using namespace std;

int n, sum;
int a[30];
vector<int> x;
set<vector<int>> ss;

bool prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n > 1;
}

void process(){
	vector<int> tmp;
	for(int i = n; i >= 1; i--){
		if(x[i]) tmp.push_back(a[i]);
	}
	ss.insert(tmp);
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x.push_back(j);
		sum += x[i] * a[i];
		if(i == n){
			if(prime(sum)) process();	
		}
		else Try(i + 1);
		x.pop_back();
		sum -= x[i] * a[i];
	}
}

void testCase(){
	ss.clear();
	x.clear();
	x.push_back(0);
	sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	Try(1);
	for(auto i : ss){
		int tong = 0;
		for(auto j : i){
			tong += j;
			cout << j << " ";
		}
		// cout << "        tong la: " << tong;
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		testCase();	
	} 
}
