/*
6
afasdfasdfsfasfasd 1 2 5 4 6 2
1 1 1 1 1 1
4
*/
#include <bits/stdc++.h>
using namespace std;
#define maxx 1001
int n, a[maxx], f[maxx], trace[maxx];
int main()
{
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    //QHD
    for(int i=1; i<=n; i++){
        f[i] = 1;
        // trace[i] = 0;
        for(int j=1; j < i; j++)
            if(a[j] < a[i] and f[j] + 1 > f[i]) {
                f[i] = f[j] + 1;
            }
    }
    int imax = 1;
    for(int i=2; i<=n; i++)
        if(f[i] > f[imax])
            imax = i;
    // Truy vet
    vector<int> b;
    while (imax > 0) {
        b.push_back(a[imax]);
        imax = trace[imax];
    }
    reverse(b.begin(), b.end());
    cout << b.size() << '\n';
    for(int x : b) cout << x << ' ';
}