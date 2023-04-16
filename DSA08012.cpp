#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int l, r; cin >> l >> r;
	int cnt = 0;
	for(int i = l; i <= r; i++){
		vector<bool> chuagap(6, true);
		bool valid = true;
		string num = to_string(i);
		for(auto c : num){
			int digit = c - '0';
			if(chuagap[digit] and (digit <= 5)){
				chuagap[digit] = false;
			}
			else{
				valid = false;	
				break;
			}
		}
		if(valid){
			cnt++;
		} 
	}
	cout << cnt << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}