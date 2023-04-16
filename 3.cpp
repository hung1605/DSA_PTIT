#include <bits/stdc++.h>
using namespace std;
int n,k,cnt = 0;
void check(vector<int> a, vector<int> b){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i] * b[i];
	}
	if(sum != k) return;
	cnt++;
	for(int i = 0; i < n; i++){
		if(a[i]) cout << b[i] << " ";
	}
	cout << endl;
}

void sinh(vector<int> a, vector<int> b, int index){
	for(int i = 0; i <= 1; i++){
		a[index] = i;
		if(index == n - 1){
			check(a,b);
		}
		else sinh(a,b,index + 1);
	}
}
int main(){
	cin >> n >> k;
	vector<int> a(n);
	vector<int> b(n);
	for(int i = 0; i < n; i++) cin >> b[i];
	sinh(a,b,0);
	cout << cnt; 
}
	