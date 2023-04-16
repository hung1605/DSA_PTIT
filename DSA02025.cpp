#include <bits/stdc++.h>
using namespace std;

int n, ans, temp;
string A[25], X[25];
bool chuaxet[25];

bool search(string s, char x){
	int left = 0, right = s.size() - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(x < s[mid]){
			right = mid - 1;
		}
		else if(x > s[mid]){
			left = mid + 1;
		}
		else return true;
	}
	return false;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(chuaxet[j]){
			X[i] = A[j]; chuaxet[j] = false;
			int dem = 0;
			if(i > 1){
				for(char x : X[i - 1])
					if(search(X[i], x) == true) dem++;
			}
			temp += dem;
			if(i == n) ans = min(ans,temp);
			else if(temp < ans) Try(i + 1);
			temp -= dem;
			chuaxet[j] = true;	
		}
	}
}

int main(){
	for(int i = 1; i <= 25; i++) chuaxet[i] = true;
	ans = 1e9;
	temp = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> A[i];
	Try(1);
	cout << ans;
}