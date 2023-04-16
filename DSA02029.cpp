#include <bits/stdc++.h>
using namespace std;

int n; 

void Try(int num, string start, string tempolary, string end){//A -> C
	if(num == 0){
		return;
	}
	Try(num - 1,start,end,tempolary);
	cout << start + " -> " + end << endl;
	Try(num - 1,tempolary,start,end);
}     

int main(){
	cin >> n;
	Try(n,"A","B","C");
}