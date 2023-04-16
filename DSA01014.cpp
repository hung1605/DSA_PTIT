#include <bits/stdc++.h>
using namespace std;

bool ok = true;
int n, k ,s, dem;
bool chuaxet[50];
int X[50];

void in(){
	for(int i = 1; i <= k; i++) cout << X[i] << " ";
	cout << endl;
}

bool check(){
	int sum = 0;
	for(int i = 1; i <= k; i++) sum += X[i];
	return sum == s;
}

void Try(int i){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){// n or min(n, 9)
		if(chuaxet[j]){
			X[i] = j;chuaxet[j] = false;
			if(i == k){
				if(check()){
					dem++;
					// in();	
				} 
			}
			else Try(i + 1);
			chuaxet[j] = true;
		}
	}
}

void testCase(){
	cin >> n >> k >> s;
	if(n == 0 and k == 0 and s == 0){
		ok = false;
		return;
	} 
	for(int i = 1; i < 25; i++) chuaxet[i] = true;
	dem = 0;
	X[0] = 0;
	Try(1);
	cout << dem << endl;
}

int main(){	
	while(true){
		testCase();
		if(ok == false) break;
	} 
}