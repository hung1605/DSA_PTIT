#include <bits/stdc++.h>
using namespace std;

int n,ans;
int a[20] = {0};

bool check(){
	int continue_8 = 0, continue_6 = 0, tmp_8 = 0, tmp_6 = 0;
	if(n < 6) return false;
	if(a[1] != 8 or a[n] != 6) return false;
	for(int i = 1; i <= n; i++){
		if(a[i] == 8){
			tmp_8++; tmp_6 = 0;
			continue_8 = max(continue_8, tmp_8);
		}
		else{
			tmp_6++; tmp_8 = 0;
			continue_6 = max(continue_6, tmp_6);
		}
	}
	if(continue_8 > 1) return false;
	if(continue_6 > 3) return false;
	return true;
}

void in(){
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << endl;
}

void Try(int i){
	for(int j = 6; j <= 8; j += 2){
		a[i] = j;
		if(i == n){
			if(check()) in();
		}
		else Try(i + 1);
	}
}

void testCase(){
	cin >> n;
	Try(1);
}

int main(){
	testCase();
}