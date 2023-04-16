#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int count;
int n;
int a[100], cot[100], d1[100], d2[100];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] && d1[i - j + n] && d2[i + j - 1]){
			a[i] = j;
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
			if(i == n) count++;
			else Try(i + 1);
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
		}
	}
}

void testCase(){
	for(int i = 0; i < 100; i++) cot[i] = d1[i] = d2[i] = 1;
	count = 0;
	cin >> n;
	Try(1);
	cout << count << endl; 
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}