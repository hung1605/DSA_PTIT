#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    string s; cin >> s;
    set<string> st;
    for(int i = 0; i < n - 1; i++){
        st.insert(s.substr(i, 2));
    }
    cout << st.size() << endl;
}

int main() {
    int t; cin >> t;
    while (t--) TestCase();
}
