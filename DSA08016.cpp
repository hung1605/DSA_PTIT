#include <bits/stdc++.h>
using namespace std;

int l1[] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
int r1[] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int l2[] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
int r2[] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};

inline string rotate(string s, int a[]){
	string res = "";
	for(int i = 0; i < 10; i++){
		res += s[a[i]];
	}
	return res;
}

void testCase(){
	unordered_map<string> u_mp;
	int ans = 1e9;
	string a = "", b = "1238004765";
	for(int i = 0; i < 10; ++i){
		int x; cin >> x;
		a += x + '0';
	}
	queue< pair<string, int> > q1, q2;
	q1.push({a,0});
	q2.push({b,0});
	pair<string, int> top;
	while(!q1.empty()){
		top = q1.front(); q1.pop();
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) testCase();
}