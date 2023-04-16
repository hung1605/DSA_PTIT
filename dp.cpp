#include <bits/stdc++.h>
using namespace std;

int m,n,a[21][21],MAX=-1;

struct toa_do{
    int r,c;
};

toa_do duong_di[42],duong_di_tot_nhat[42];
void bt(toa_do cur,int dep){
    duong_di[cur.r + cur.c - 1] = cur;
    if(cur.r == m && cur.c == n){
        if(dep > MAX){
            MAX = dep;
            memcpy(duong_di_tot_nhat,duong_di,sizeof duong_di);
        }
        return;
    }
    if(cur.c<n && a[cur.r][cur.c+1]!=-1)
        bt({cur.r,cur.c+1},dep+a[cur.r][cur.c+1]);
    if(cur.r<m && a[cur.r+1][cur.c]!=-1)
        bt({cur.r+1,cur.c},dep+a[cur.r+1][cur.c]);
}
int main(){
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
         cin>>a[i][j];

    bt({1,1},a[1][1]);
    cout<<MAX<<endl;
    if(MAX!=-1){
        for(int i=1;i<=n+m-1;i++)
        cout<< duong_di_tot_nhat[i].r << ' ' << duong_di_tot_nhat[i].c << '\n' ;
    }      
}
