#include<bits/stdc++.h>
using namespace std;

string convert(string s){
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
    string result = "";
    for(auto i : s)
        if(i != '(' and i != ')')
            result += i;
    return result;
}

void testCase(){
    string s1,s2;
    cin >> s1 >> s2;
    cout << (convert(s1) == convert(s2) ? "YES\n" : "NO\n");
}

int main(){
    int t; cin >> t;
    while(t--) testCase();
}