#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int s,d; 
	cin >> s >> d;
	if(s > 9*d){
		cout << -1 << endl;
		return;
	}
	int v[10];
	int first;
	for(int i = 1; i <= 9; i++){
		if(i <= s and i >= s - 9*(d - 1)){
			first = i; break;	
		} 
	}
	d--;
	s -= first;
	for(int i = 0; i <= 8; i++){
//		cout << "s: "<< s << " d: " <<  d << endl;
		v[i] = (9*d - s) / (9 - i);
		s -= v[i] * i;
		d -= v[i];
	}
	v[9] = d;
//	for(int i = 0; i <= 9; i++){
//		cout << "v[" << i << "]: " << v[i] << endl;
//	}
	cout << first;
	for(int i = 0; i <= 9; i++){
		for(int j = 0; j < v[i]; j++) cout << i;
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
