#include <bits/stdc++.h>
using namespace std;

void check(vector<int> a, int len){
	for(int i = 0; i < len / 2; i++){
		if(a[i] != a[len - i - 1])
			return;
	}
	for(int i = 0; i < len; i++)
		cout << a[i] << " ";
	cout << endl;
}

void sinh(vector<int> a, int index, int len){
	for(int i = 0; i <= 1; i++){
		a[index] = i;
		if(index == len - 1){
			check(a,len);
		}
		else sinh(a,index + 1, len);
	}
}
int main(){
	int n; cin >> n;
	vector<int> a(n);
	sinh(a,0,n);
}
	