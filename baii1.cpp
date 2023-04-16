#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int h[100005];
	for(int i = 1; i <= n; i++){
		cin >> h[i];
	}
	sort(h + 1, h + n + 1);
	// for(int i = 1; i <= n; i++) cout << h[i] << " ";
	int answer = 0;
	for(int i = 1; i <= n - 3; i++){
		if(h[i] == h[i + 3]) answer = h[i];
	}
	if(answer == 0) cout << "NO";
	else cout << answer;
}