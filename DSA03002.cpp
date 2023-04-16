#include <bits/stdc++.h>
using namespace std;

int minize(string x){
	int res = 0;
	for(int i = 0; i < (int)x.size(); i++){
		if(x[i] == '6') res = res*10 + 5;
		else res = res * 10 + x[i] - '0';
	}
	return res;
}

int maximize(string x){
	int res = 0;
	for(int i = 0; i < (int)x.size(); i++){
		if(x[i] == '5') res = res*10 + 6;
		else res = res * 10 + x[i] - '0';
	}
	return res;
}

int add_min(string a, string b){
	return minize(a) + minize(b);
}

int add_max(string a, string b){
	return maximize(a) + maximize(b);
}

int main(){
	string a, b;
	cin >> a >> b;
	cout << add_min(a, b) << " " << add_max(a, b);
}