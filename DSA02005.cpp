#include<bits/stdc++.h>
using namespace std;

vector<bool> chuaxet(100,true);

string s; 

void Try(int i){
	for(char j = 'A'; j < 'A' + s.size(); j++){
		if(chuaxet[j]){
			s[i] = j;chuaxet[j] = false;
			if(i == s.size() - 1) cout << s << " ";
			else Try(i + 1);
			chuaxet[j] = true;
		}
	}
}

void testCase(){
	cin >> s;
	Try(0);
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}