#include <bits/stdc++.h>
using namespace std;
int n, k;
int value[20],binary[20];
bool flag = true;

void print(){
	int last_index = n;
	while(binary[last_index] == 0) last_index--;
	cout << "[";
	for(int i = 1; i <= n; i++){
		if(binary[i]){
			cout << value[i];
			if(i != last_index) cout << " ";
		} 
	}
	cout << "] ";
	flag = false;
}

bool check(){
	int sum = 0;
	for(int i = 1; i <= n; i++) sum += value[i] * binary[i];
	return sum == k;
}

void Try(int i){
	for(int j = 1; j >= 0; j--){
		binary[i] = j;
		if(i == n){
			if(check()) print();
		}
		else Try(i + 1);
	}
}

void testCase(){
	flag = true;
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> value[i];
	sort(value + 1, value + n + 1);
	Try(1);
	if(flag) cout << -1;
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}