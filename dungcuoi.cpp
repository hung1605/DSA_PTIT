#include <bits/stdc++.h>
using namespace std;

int n, hoanvi[100];
int m;
string s;
vector<bool> chuaxet(100,true);
vector<string> b;

void print(){
	for(int i = 1; i <= m; i++){
		cout << b[hoanvi[i] - 1] << " ";
	}
	cout << s << endl;
}

void Try(int i){
	for(int j = 1; j <= n - 1; j++){
		if(chuaxet[j]){
			hoanvi[i] = j;
			chuaxet[j] = false;
			if(i == n - 1){
				print();
			}
			else Try(i + 1);
			chuaxet[j] = true;
		}
	}
}

int main(){
	cin >> n;
	string a[1000];
	for(int i = 1; i <= n; i++) cin >> a[i];
	cin >> s;
	for(int i = 1; i <= n; i++){
		if(a[i] != s) b.push_back(a[i]);
	}
	m = n - 1;
	sort(b.begin(), b.end());
	Try(1);
}