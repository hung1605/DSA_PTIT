#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
int a[5];
string arr_dd[3] = {"02", "20", "22"};
void in(string s){
	cout << s[0] << s[1] << "/";
	cout << s[2] << s[3] << "/";
	cout << s[4] << s[5] << s[6] << s[7] << endl;
}

bool symetrix(string s){
	for(int i = 0; i < (int)s.size() / 2; i++){
		if(s[i] != s[s.size() - i - 1]) return false;
	}
	return true;
}

void check(){
	string tmp;
	for(int i = 0; i < 3; i++){
		tmp = "";
		tmp += arr_dd[i];
		tmp += "022";
		for(int j = 2; j <= 4; j++) tmp += to_string(a[j]);
		ans.push_back(tmp);
	}
}

void Try(int i){
	for(int j = 0; j <= 2; j += 2){
		a[i] = j;
		if(i == 4){
			check();
		}
		else Try(i + 1);
	}
}

int main(){
	Try(2);
	sort(ans.begin(), ans.end());
	for(auto x : ans) in(x);
}