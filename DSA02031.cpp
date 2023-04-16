#include <bits/stdc++.h>
using namespace std;

int n;
int a[30];
vector<bool> chuaxet(30, true);

bool nguyen_am(char c){
	if(c == 'E' or c == 'A') return true;
	return false;
}
bool phu_am(char c){
	if(c == 'E' or c == 'A') return false;
	return true;
}
bool check(){
	for(int i = 2; i < n; i++){
		if(nguyen_am(char('A' + a[i] - 1))){
			if(phu_am(char('A' + a[i - 1] - 1)) and phu_am(char('A' + a[i + 1] - 1)))
				return false;
		}
	}
	return true;
}

void in(){
	for(int i = 1; i <= n; i++){
		cout << char('A' + a[i] - 1);
	}
	cout << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(chuaxet[j]){
			a[i] = j;chuaxet[j] = false;
			if(i == n){
				if(check()) in();
			} 
			else Try(i + 1);
			chuaxet[j] = true;
		}
	}
}

int main(){
	char c;
	cin >> c;
	n = c - 'A' + 1;
	Try(1);
}