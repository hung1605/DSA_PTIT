#include <bits/stdc++.h>
using namespace std;

int survile(int n, int s, int m){
	if(n < m) return -1;
	if(s < 7){
		int sum = s * m;
		if(sum % n == 0) return sum / n;
		return sum / n + 1;
	} 
	if((n - m) * 6 < m) return -1;
	else{
		int sum = s * m;
		if(sum % n == 0) return sum / n;
		return sum / n + 1;
	}
}

void testCase(){
	int n, s, m;
	cin >> n >> s >> m;
	cout << survile(n,s,m) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}