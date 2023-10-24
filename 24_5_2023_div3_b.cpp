#include <bits/stdc++.h>
using namespace std;

struct cap{
    int index;
    pair<int,int> p;
};

void TestCase() {
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    sort(b, b + n);
    cap list[n];
    for(int i = 0; i < n; i++){
        list[i].index = i;
        list[i].p.first = a[i];
        list[i].p.second = 0;
    }
    sort(list, list + n, [](cap a, cap b){
        return a.p.first < b.p.first;
    });
    for(int i = 0; i < n; i++)
        list[i].p.second = b[i];
    int ans[n];
    for(int i = 0; i < n; i++)
        ans[list[i].index] = list[i].p.second;
    for(auto i : ans) cout << i << " ";
    cout << endl;
}

int main() {
    int t; cin >> t;
    while (t--) TestCase();
}
