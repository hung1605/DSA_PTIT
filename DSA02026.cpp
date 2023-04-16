#include <bits/stdc++.h>
using namespace std;

string s;
char dau[2] = {'+', '-'};
int isOK;

int convert(string xau){
	return (xau[0] - '0') * 10 + xau[1] - '0';
}

bool isCorrect(){
	int a = convert(s.substr(0, 2));
	int b = convert(s.substr(5, 2)); 
	int c = convert(s.substr(10, 2));
	if(a < 10 or b < 10 or c < 10) return false;
	if(s[3] == '+') return a + b == c;
	return a - b == c;
}

void Try(int i){
	if(isOK) return;
	if(i == (int)s.size()){
		if(isCorrect() == true){
			isOK = true;
			cout << s << endl;
		}
		return;
	}
	if(s[i] == '?'){
		if(i == 3){
			for(int j = 0; j < 2; j++){
				s[i] = dau[j];
				Try(i + 1);
			}
		}
		else{
			for(int j = 0; j < 10; j++){
				s[i] = j + '0';
				Try(i + 1);
			}
		}
		s[i] = '?';
	}
	else Try(i + 1);
}


void testCase(){
	isOK = false;
	getline(cin, s);//?0 ? 12 = 28

	if(s[3] == '*' or s[3] == '/'){
		cout << "WRONG PROBLEM!\n";
		return;
	}
	
	Try(0);
	if(isOK == false){
		cout << "WRONG PROBLEM!\n";
		return;
	}
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		testCase();	
	} 
}