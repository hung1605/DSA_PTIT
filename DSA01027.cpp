#include <bits/stdc++.h>
using namespace std;

int n;
int a[20],giatri[20];
vector<bool> chuaxet(20,true);

void in(){
	for(int i = 1; i <= n; i++){
		cout << giatri[a[i]] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(chuaxet[j]){
			a[i] = j; chuaxet[j] = false;
			if(i == n) in();
			else Try(i + 1);
			chuaxet[j] = true;
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> giatri[i];
	sort(giatri + 1, giatri + n + 1);
	Try(1);
}