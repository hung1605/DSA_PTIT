#include <bits/stdc++.h>
using namespace std;
int a[100005], l[100005], r[100005];
void testCase() {
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) 
        l[i] = (a[i - 1] < a[i] ? l[i - 1] + 1 : 1);
    for (int i = n; i >= 1; --i) 
        r[i] = (a[i] > a[i + 1] ? r[i + 1] + 1 : 1);
    int maxx = 0;
    for (int i = 1; i <= n; ++i) {
        maxx = max(maxx, l[i] + r[i] - 1);
    }
    cout << maxx << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}