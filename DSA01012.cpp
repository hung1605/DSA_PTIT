#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	vector<string> grays_1, grays_2;
	grays_1.push_back("0");
	grays_1.push_back("1");
	grays_2.push_back("1");
	grays_2.push_back("0");
	for(int j = 1; j < n; j++){
		for(int i = 0; i < (int)grays_1.size(); i++){
			grays_1[i] = "0" + grays_1[i];
			grays_2[i] = "1" + grays_2[i];
		}
		for(auto x : grays_2) grays_1.push_back(x);
		vector<string> tmp;
		for(int i = grays_1.size() - 1; i >= 0; i--){
			tmp.push_back(grays_1[i]);
		}
		grays_2 = tmp;
	}
	for(auto x : grays_1) cout << x << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;	
	while(t--) testCase();
}