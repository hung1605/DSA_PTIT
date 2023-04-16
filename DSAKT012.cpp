#include <bits/stdc++.h>
using namespace std;

int n, sum, ans;
vector<int> a;

void Try(int index, int value, int count){
	if(index == n or value >= sum or count >= ans){
		ans = (value == sum) ? min(ans, count) : ans;
		return;
	}
	Try(index + 1,value,count);
	Try(index + 1,value + a[index], count + 1);
}

int main(){
	ans = INT_MAX;
	cin >> n >> sum;
	a.resize(n);
	for(int &i : a) cin >> i;
	Try(0,0,0);
	cout << (ans == INT_MAX ? -1 : ans);
}