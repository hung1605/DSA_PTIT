#include <bits/stdc++.h>
using namespace std;

int n, t_min, step;

void Try(int n){
	if(n == 1){
		t_min = min(t_min, step);
	}
	else{
		if(n % 3 == 0 and step < t_min){
			step ++;
			Try(n / 3);
			step --;
		}
		if(n % 2 == 0 and step < t_min){
			step++;
			Try(n / 2);
			step--;
		}
		if(step < t_min){
			step++;
			Try(n - 1);
			step--;
		}
	}
	
}

void testCase(){
	t_min = 1e9;
	step = 0;
	cin >> n;
	Try(n);
	cout << t_min << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}