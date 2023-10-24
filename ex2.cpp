#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    priority_queue <long, vector<long>, greater<long>> q;
    long tong = 0;
    for(int i = 0; i < n; i ++){
        cin >> x;
        q.push(x);
        tong += x;
    }
    long ans = 0;
    while(q.size() > 1){
        long small = 0, big = 0, sum = 0;
        for(int i = 1; i <= k; i++){
            if(i == 1) small = q.top();
            big = q.top();
            sum += q.top(); 
            q.pop();
            if(q.empty()) break;
        }
        ans += big - small;
        // cout << big << " " << small << endl;
        q.push(sum);
    }
    cout << q.top() << endl << ans;
}
