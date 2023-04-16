#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	multiset<long long> ms;
	for(int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		ms.insert(tmp);
	}
	long long result = 0;
	multiset<long long>::iterator it;
	while(ms.size() > 1){
		long long x = *ms.begin();
		it = ms.begin();
		ms.erase(it);
		long long y = *ms.begin();
		it = ms.begin();
		ms.erase(it);
		ms.insert(x + y);
		result += (x + y);
	}
	cout << result << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}