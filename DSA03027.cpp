#include<bits/stdc++.h>
using namespace std;

void testcase(){
	long long n, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		long long tmp; cin >> tmp;
		ans += tmp + abs(tmp);
	} 	
	cout << ans;
}

int main(){
	testcase();
}
