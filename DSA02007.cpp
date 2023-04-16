#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int k; string s;
	cin >> k >> s;
	if(!k){
		cout << s << endl;
		return;
	}
	int len = s.size();
	int cnt = 0;
	for(int i = 0; i < len; i++){
		int index = i;
		for(int j = len - 1; j > i; j--){
			if(s[j] > s[index]){
				index = j;	
			}
		}
		if(index > i){
			swap(s[i], s[index]);
			cnt++;
		}
		if(cnt == k) break;
	}
	cout << s << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}