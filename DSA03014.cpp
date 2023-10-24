#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll x[20], n, ans;
bool flag;
string s;

bool cube(ll n){
	ll tmp = cbrt((long double) n);
	return tmp * tmp * tmp == n;
}

void check(){
	ll num = 0;
	for(int i = 0; i < n; i++){
		if(x[i]) num = num*10 + s[i] - '0';
	}
	if(cube(num) and num){
		ans = max(ans, num);
		flag = true;
	}
}

void Try(ll i){
	for(int j = 1; j >= 0; j--){
		x[i] = j;
		if(i == n - 1) check();
		else Try(i + 1);
	}
}


void testcase(){
	flag = false;
	ans = -1;
	cin >> s;
	n = s.size();
	Try(0);
	cout << (flag ? ans : -1) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
