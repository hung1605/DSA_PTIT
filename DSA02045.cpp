#include <bits/stdc++.h>
using namespace std;

int n, binary[100], dem;
string s;
string ans[65600];
void Try(int i){
	for(int j = 0; j <= 1; j++){
		binary[i] = j;
		if(i == n - 1){
			string tmp = "";
			for(int z = 0; z < n; z++){
				if(binary[z]) tmp += s[z];
			}
			if(tmp.size() != 0) ans[dem++] = tmp;
		}
		else Try(i + 1);
	}
}

void testCase(){
	dem = 0;
	cin >> n >> s;
	Try(0);
	sort(ans, ans + dem);
	for(int i = 0; i < dem; i++) cout << ans[i] << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}