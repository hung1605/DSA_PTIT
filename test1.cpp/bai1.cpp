#include<bits/stdc++.h>
using namespace std;

int a[30], x[30],n;
set<vector<int>> s;

bool prime(int m){
	for(int i = 2; i <= sqrt(m); i++){
		if(m % i == 0) return false;
	}
	return m > 1;
}

void check(){
	vector<int> v;
	string ans = "";
	int sum = 0;
	for(int k = 1; k <= n; k++){
		if(x[k] == 1){
			v.push_back(a[k]);
			sum += a[k]; 
		}
	}
	if(prime(sum)){
		s.insert(v);
	}
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			check();
		}
		else{
			Try(i + 1);
		}
	}
}

void testcase(){
	s.clear();
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1,[](int a, int b){
		return a > b;
	});
	Try(1);
	for(auto i : s){
		for(auto j : i){
			cout << j << " ";
		}
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}

