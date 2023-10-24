#include<bits/stdc++.h>
using namespace std;

vector<int> x(5);
bool flag;

void Try(int i = 1, int res = x[0]){
	if(flag) return;
	if(i == 5){
		if(res == 23){
			flag = true;
		}
		return;
	}
	Try(i + 1, res + x[i]);
	Try(i + 1, res - x[i]);
	Try(i + 1, res * x[i]);
}

void testcase(){
	flag = false;
	for(int i = 0; i < 5; i++)cin >> x[i];
	sort(x.begin(),x.end());
	do{
		Try();
	}
	while(!flag and next_permutation(x.begin(),x.end()));
	cout << (flag ? "YES\n" : "NO\n");
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
