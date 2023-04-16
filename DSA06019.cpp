#include <bits/stdc++.h>
using namespace std;

struct cap{
	int value, frequence;
};

void testCase(){
	int n; cin >> n;
	int a[n];
	map<int,int> mp;
	for(auto &x : a){
		cin >> x;
		mp[x]++;
	}
	cap dayso[mp.size()];
	int k = 0;
	for(auto x : mp){
		dayso[k].value = x.first;
		dayso[k].frequence = x.second;
		k++;
	}
	sort(dayso, dayso + mp.size(), [](cap a, cap b){
		if(a.frequence == b.frequence)
			return a.value < b.value;
		return a.frequence > b.frequence;
	});
	for(auto x : dayso){
		for(int i = 0; i < x.frequence; i++){
			cout << x.value << " ";
		}
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}