#include <bits/stdc++.h>
using namespace std;

string diff(char s){
	if(s == '0') return "1";
	return "0";
}

void testCase(){
	string gray; cin >> gray;
	string binary = "";
	binary += gray[0];
	for(int i = 1; i < (int)gray.size(); i++){
		if(gray[i] == '1'){
			binary += diff(binary[i - 1]);
		}
		else{
			binary += binary[i - 1];
		}
	}
	cout << binary << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}