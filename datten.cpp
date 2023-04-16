#include <bits/stdc++.h>
using namespace std;
int a[30];
int n, k;
vector<string> name(1);
void in(){
	for(int i = 1; i <= k; i++){
		cout << name[a[i]] << " ";
	}
	cout << endl;
}

void next_combination(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			in();
		}
		else next_combination(i + 1);
	}
}

void testCase(){
	int tmp;
	cin >> tmp >> k;
	for(int i = 1; i <= k; i++) a[i] = i;
	set<string> s;
	for(int i = 0; i < tmp; i++){
		string ten; cin >> ten;
		s.insert(ten);
	}
	n = s.size();
	for(string x : s){
		name.push_back(x);
	}
	next_combination(1);
	cout << endl;
}

int main(){
	int t = 1;
	while(t--) testCase();
}

