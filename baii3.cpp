#include<bits/stdc++.h>
using namespace std;

long long luythua(long long a, long long b, long long c){
	if(b == 1) return a;
	long long tamthoi = luythua(a,b / 2, c) % c;
	if(b % 2 == 0) return (tamthoi * tamthoi ) % c;
	else return (tamthoi * tamthoi * a) % c;
}

int main(){
	string a;
	cin >> a;
	long long A = 0;
	long long B;
	int c;
	cin >> B >> c;
	if(a.length() <= 18){
		long long tmp = 0;
		for(int i = 0; i < a.size(); i++){
			tmp = tmp * 10 + a[i] - '0';
		}
		A = tmp;
	}
	else{
		int len = a.size();
		long long tmp = 0;
		for(int i = len - c; i < len; i++){
			tmp = tmp * 10 + a[i] - '0';
		}
		A = tmp;
	}
	long long mod = 1;
	for(int i = 1; i <= c; i++) mod *= 10;
	cout << luythua(A,B,mod);
}