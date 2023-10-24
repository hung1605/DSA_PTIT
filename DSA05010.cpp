#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n, k;
	cin >> n >> k;
	int a[n];
	int slpt = 0;
	for(int &i : a){
		cin >> i;
		if(i % k == 0){
			slpt ++;
		}
		
	} 
	
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
