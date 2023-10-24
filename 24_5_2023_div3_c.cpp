#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    int a[n];
    for(auto &i : a) cin >> i;
    sort(a, a + n);
    bool le[n];
    memset(le, false, sizeof(le));
    for(int i = 1; i < n; i++)
        if(a[i - 1] % 2 == 1 or le[i - 1]) le[i] = true;
    for(int i = 0; i < n; i++){
        if(a[0] % 2 == 0){
            if(a[i] % 2 == 1){
                if(!le[i]){
                    // cout << "so le ko the quy ve chan la: " << a[i] << "\n";
                    cout << "NO\n";
                    return;
                }
            } 
        }
        else{
            if(a[i] % 2 == 0){
                if(!le[i]){
                    // cout << "so chan ko the quy ve le la: " << a[i] << "\n";
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int main() {
    int t; cin >> t;
    while (t--) TestCase();
}
