#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

class Matrix{
public:
	int n;
	long long a[20][20];
	Matrix operator * (Matrix A){
		Matrix Res;
		Res.n = A.n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				Res.a[i][j] = 0;
				for(int k = 0; k < n; k++){
					Res.a[i][j] += (A.a[i][k] * this->a[k][j]) % mod;
					Res.a[i][j] %= mod;	
				} 
			}
		}
		return Res;
	}
};

Matrix pow_mod(Matrix A, int k){
	if(k == 1) return A;
	Matrix tmp = pow_mod(A, k / 2);
	if(k % 2) return A * tmp * tmp;
	return tmp * tmp;
}


void testCase(){
	long long n, k;
	cin >> n >> k;
	Matrix A;
	A.n = n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> A.a[i][j];
	}
	Matrix ans = pow_mod(A, k);
	long long result = 0;
	for(int i = 0; i < n; i++){
		result += ans.a[n - 1][i] % mod;
		result %= mod;
	}
	cout << result << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
