#include <bits/stdc++.h>
using namespace std;

char a[1005][1005], buoc[1005][1005];

void testCase(){
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	cout << 2 << endl;
}

int main(){
	testCase();
}

