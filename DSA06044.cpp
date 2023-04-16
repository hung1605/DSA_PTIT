#include <bits/stdc++.h>
using namespace std;


int main(){
	int n; cin >> n;
	int a[n + 5];
	vector<int> chan, le;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(i % 2 == 1) le.push_back(a[i]);
		else chan.push_back(a[i]);
	}
	sort(le.begin(), le.end(), [](int a, int b){
		return a < b;
	});
	sort(chan.begin(), chan.end(), [](int a, int b){
		return a > b;
	});
	int odd = 0, even = 0;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 1){
			cout << le[odd++] << " ";
		}
		else cout << chan[even++] << " ";
	}
}