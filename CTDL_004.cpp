#include <bits/stdc++.h>
using namespace std;

int n,k,a[100], binary[100], dem;


bool check(){
	int cnt = 0;
	for(int i = 1; i <= n; i++) if(binary[i]) cnt++;
	if(cnt != k) return false;

	int first_index = 0;
	for(int i = 1; i <= n; i++){
		if(binary[i]){
			first_index = i;
			break;	
		}
	}
	for(int i = first_index + 1; i <= n; i++){
		if(binary[i] == 1){
			if(a[first_index] > a[i]) return false;
			first_index = i;
		}
	}
	return true;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		binary[i] = j;
		if(i == n){
			if(check()){
				dem ++;
			} 
		}
		else Try(i + 1);
	}
}

int main(){
	dem = 0;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	Try(1);
	cout << dem;
}