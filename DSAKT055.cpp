#include<bits/stdc++.h>
using namespace std;
int f[1005][1005];
int c[1005],A[1005];
int n,V;
void testCase(){
    cin >> n >> V;
    memset(f, 0, sizeof(f));
    for(int i = 1; i <= n; i++) cin >> A[i];
    for(int i = 1; i <= n; i++) cin >> c[i];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= V; j++){
            f[i][j] = f[i - 1][j];
            if(j >= A[i]){
                f[i][j] = max(f[i][j], f[i - 1][j - A[i]] + c[i]);
            }
        }
    }
    cout << f[n][V] << endl;
}

int main(){
    int t; cin >> t;
    while(t--) testCase();
}