#include <bits/stdc++.h>
using namespace std;

int convert(string s){
	int num = 0;
	for(auto i : s) num = num*10 + i - '0';
	return num;
}

void testCase(){
	vector<int> a(10001,0), b(10001,0);
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	stringstream ss1(s1), ss2(s2);
	string tmp;
	while(ss1 >> tmp){
		string so_hang = "", so_mu = "";
		for(auto i : tmp){
			if(isdigit(i)) so_hang += i;
			else break;
		}
		for(int i = tmp.size() - 1; i >= 0; i--){
			if(isdigit(tmp[i])) so_mu = tmp[i] + so_mu;
			else break;
		}
		// cout << so_hang << so_mu << endl;
		int somu = convert(so_mu), heso = convert(so_hang);
		a[somu] = heso;
	}
	while(ss2 >> tmp){
		string so_hang = "", so_mu = "";
		for(int i = 0; i < (int)tmp.size(); i++){
			if(isdigit(tmp[i])) so_hang = so_hang + tmp[i];
			else break;
		}
		for(int i = tmp.size() - 1; i >= 0; i--){
			if(isdigit(tmp[i])) so_mu = tmp[i] + so_mu;
			else break;
		}
		// cout << so_hang << so_mu << endl;
		int somu = stoi(so_mu), heso = convert(so_hang);
		b[somu] = heso;
	}
	int last_index;
	for(int i = 0; i < 10001; i++)
		if(a[i] + b[i]){
			last_index = i; 
			break;
		} 
	for(int i = 10001; i > last_index; i--) 
		if(a[i] + b[i]) 
			cout << a[i] + b[i] << "*x^" << i << " + ";
	cout << a[last_index] + b[last_index] << "*x^" << last_index << endl;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--) testCase();
}
