#include <bits/stdc++.h>
using namespace std;

int n;
int value[30], binary[30];
set<string> s;

string convert(){
	string tmp = "";
	for(int i = 1; i <= n; i++){
		if(binary[i]) tmp += to_string(value[i]) + " ";
	}
	return tmp;
}

bool check(){
	vector<int> tmp;
	for(int i = 1; i <= n; i++) if(binary[i]) tmp.push_back(value[i]);
	if(tmp.size() < 2) return false;
	for(int i = 1; i < (int)tmp.size(); i++){
		if(tmp[i - 1] > tmp[i]){
			return false;
		} 	
	} 
	return true;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		binary[i] = j;
		if(i == n){
			if(check()){
				s.insert(convert());
			}
		}
		else Try(i + 1);
	}
}

void testCase(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> value[i];
	Try(1);
}

int main(){
	testCase();
	for(auto x : s) cout << x << endl;
}