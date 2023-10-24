#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s;
	cin >> n >> s;
	int tmp1 = s, tmp2 = n;
	if(s < 1 or s > 9 * n){
		cout << -1 << " " << -1;
		return 0;
	}
	//smallest
	int first;
	for(int i = 1; i <= 9; i ++){
		if(s - i >= 0 and s - i <= (n - 1) * 9){
			first = i;
			break; 
		}
	}
	s -= first;
	n --;
	int small[10], big[10];
	memset(small, 0, sizeof(small));
	memset(big, 0, sizeof(big));
	for(int i = 0; i < 9; i++){
		small[i] = (9*n - s) / (9 - i);
		s -= small[i] * i;
		n -= small[i];
	}
	small[9] = n;
	// big
	s = tmp1; n = tmp2;
	big[9] = s / 9;
	s -= big[9] * 9;
	n -= big[9];
	for(int i = 8; i >= 1; i--){
		big[i] = s / i;
		s -= big[i] * i;
		n -= big[i];
	}
	big[0] = n;
	// in
	// for(int i = 0; i < 10; i++) cout << small[i] << " ";
	// cout << endl;
	// for(int i = 0; i < 10; i++) cout << big[i] << " ";
	// cout << endl;
	cout << first;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < small[i]; j ++){
			cout << i;
		}
	}
	cout << " ";
	for(int i = 9; i >= 0; i--){
		for(int j = 0; j < big[i]; j ++){
			cout << i;
		}
	}
}