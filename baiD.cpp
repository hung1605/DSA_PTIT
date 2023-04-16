#include <bits/stdc++.h>
using namespace std;
#define maxx 6005
int n, L, l[maxx], f[maxx], trace[maxx];

int main() {
    cin >> n >> L;
    for(int i = 1; i <= n; i++)
        cin >> l[i];

    f[0] = 0;

    for(int i = 1; i<= n; i++){
        f[i] = max(f[i-1], L - l[i]);
        trace[i] = i - 1;
        int thisLine = l[i];
        for(int j = i - 1; j > 0; j--){
            thisLine += l[j];
            if(thisLine > L)
                break;
            if(f[i] > max(f[j-1], L - thisLine)){
                f[i] = max(f[j-1], L - thisLine);
                trace[i] = j - 1;
            }
        }
    }
    struct dong{
        int dau, cuoi;
    };

    vector<dong> lines;

    int cuoi = n;
    while(cuoi > 0){
        lines.push_back({trace[cuoi] + 1, cuoi});
        cuoi = trace[cuoi];
    }
    reverse(lines.begin(), lines.end());
    for(dong d : lines){
        for(int i = d.dau; i <= d.cuoi; i++){
            cout << l[i];
            if(i == d.cuoi)
                cout << '\n';
            else
                cout << ' ';
        }
    }
}