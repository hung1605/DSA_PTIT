#include <bits/stdc++.h>
using namespace std;

int x[20], chuaxet[20], cnt, n, m;

void in(){
    for(int i = 1; i <= n; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(chuaxet[j]){
            x[i] = j;
            chuaxet[j] = false;
            if(i == n){
                cnt ++;
                if(cnt % m == 0) in();
            }
            else{
                Try(i + 1);
            }
            chuaxet[j] = true;
        }
    }
}

void TestCase() {
    cin >> n >> m;
    memset(chuaxet, true, sizeof(chuaxet));
    cnt = 0;
    Try(1);
}

int main() {
    int T = 1;
    while (T--) TestCase();
}
