#include <bits/stdc++.h>
using namespace std;

int LCstring(string s1, string s2, string s3){
	int len1 = s1.size(), len2 = s2.size(), len3 = s3.size();
	int L[len1 + 1][len2 + 1][len3 + 1] ={};
	// for(int i = 0; i <= len1; i++)
	for(int i = 1; i <= len1; i++){
		for(int j = 1; j <= len2; j++){
			for(int k = 1; k <= len3; k++){
				if(s1[i - 1] == s2[j - 1] and s2[j - 1] == s3[k - 1]) L[i][j][k] = L[i - 1][j - 1][k - 1] + 1;
				else L[i][j][k] = max(L[i - 1][j][k], max(L[i][j - 1][k], L[i][j][k - 1]));
			}
		}
	}
	return L[len1][len2][len3];
}

void testCase(){
	string s1,s2,s3;
	int a,b,c; cin >> a >> b >> c;
	cin >> s1 >> s2 >> s3;
	cout << LCstring(s1,s2,s3) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}