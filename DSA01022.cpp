#include <bits/stdc++.h>
using namespace std;

int n,ans;
int a[20], canxet[20];
vector<bool> chuaxet(20, true);

bool check(){
	for(int i = 1; i <= n; i++){
		if(a[i] != canxet[i]) return false;
	}
	return true;
}

void Try(int i,int &count){
	for(int j = 1; j <= n; j++){
		if(chuaxet[j]){
			a[i] = j;chuaxet[j] = false;
			if(i == n){
				count++;
				if(check()) ans = count;
			}
			else Try(i + 1, count);
			chuaxet[j] = true;
		}
	}
}

void testCase(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> canxet[i];
	int count = 0;
	Try(1,count);
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}