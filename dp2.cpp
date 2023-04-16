#include <bits/stdc++.h>
using namespace std;

int modulo = 1e9 + 7;
int maxx = 100001
int n, k, f[maxx];
bool hong[maxx];

int main() {
    cin >> n >> k;
    memset (hong, false, sizeof hong);
    while (k--){
        int b;
        cin >> b;
        hong[b] = true;
    }
    //QHD
    f[0] = 1;
    f[1] = !hong[1];
    for(int i=2; i<=n; i++){
        if(hong[i])
            f[i] = 0;
        else
            f[i] = (f[i-1] + f[i-2]) % modulo;
    }
    cout << f[n];
}