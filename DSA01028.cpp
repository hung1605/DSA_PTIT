#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[20], giatri[20];

void in(){
	for(int i = 1; i <= k; i++){
		cout << giatri[a[i]] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k) in();
		else Try(i + 1);
	}
}

int main(){
	cin >> n >> k;
	set<int> s;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		s.insert(x);
	}
	int j = 1;
	for(int x : s){
		giatri[j] = x;
		j++;
	}
	n = s.size();
	Try(1);

}