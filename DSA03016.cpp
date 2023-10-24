#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int s, d;
	cin >> s >> d;
	if(s > 9*d ){
		cout << -1 << endl;
		return;
	}
	int amount_of_number[100];
	int first = 1;
	for(int i = 1; i <= 8; i++){
		int tmp = (9*d - s)/(9 - i);
		if(tmp > 0){
			first = i;
			d -= 1;
			s -= i;
			break;
		}
	}
	for(int i = 0; i <= 8; i++){
		amount_of_number[i] = (9*d - s)/(9 - i);
		// cout << i << " " << amount_of_number[i] << endl;
		d -= amount_of_number[i];
		s -= amount_of_number[i] * i;
	}
	amount_of_number[9] = d;
	cout << first;
	for(int i = 0; i <= 9; i++){
		for(int j = 0; j < amount_of_number[i]; j++){
			cout << i;
		}
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}