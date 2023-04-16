#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;//a–(b+c)
    stack<int> st;
    int len = s.size();
    for (int i = 0; i < len; ++i){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            if(s[st.top() - 1] == '-'){
                for(int k = st.top() + 1; k < i; k++){
                    if(s[k] == '+') s[k] = '-';
                    else if(s[k] == '-') s[k] = '+';
                }
            }
            st.pop();
        }
    }
    for(int i = 0; i < len; i++){
        if(s[i] != '(' and s[i] != ')') cout << s[i];
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while (t--) testCase();
}