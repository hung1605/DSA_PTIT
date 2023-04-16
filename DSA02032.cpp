#include <bits/stdc++.h>
using namespace std;

int n, k; 
int a[25], x[100];
int sum, dem;
int ans[100000][105];
bool check;

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(a[j] >= x[i - 1]){
			x[i] = a[j];
			sum += x[i];
			if(sum == k){
				check = false;
				dem++;
				ans[dem][0] = i;
				for(int z = 1; z <= i; z++)
					ans[dem][z] = x[z];
			}
			else if(sum < k) Try(i + 1);
			sum -= x[i];
		}
	}
}

void testCase(){
	check = true;
	sum = 0, dem = 0;
	x[0] = 0;
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> a[i];//5 {2 2 2 2} {2 2 4} {2 6} {4 4} {8}
	sort(a, a + n);
	Try(1);
	if(check){
		cout << -1 << endl;
		return;
	}
	cout << dem << " ";//{2 2 2 2}
	for(int i = 1; i <= dem; i++){
		cout << "{";
		int len = ans[i][0];
		for(int j = 1; j < len; j++){
			cout << ans[i][j] << " ";
		}
		cout << ans[i][len] << "} ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
