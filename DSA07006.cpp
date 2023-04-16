#include <bits/stdc++.h>
using namespace std;

string s;
int so_ngoac;
int x[300];
set<string> ans;

void check(){
    string tmp = "";
    stack<int> st;
    int j = 0;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == '('){
            if(x[j] == 1) tmp += s[i];  
            st.push(x[j++]);
        }
        else if(s[i] == ')'){
            if(st.top() == 1){
                tmp += s[i];
            }
            st.pop();
        }
        else tmp += s[i];
    }

    int ngoac = 0;
    for(int i = 0; i < (int)tmp.size(); i++)
        if(tmp[i] == '(') ngoac++;
    if(ngoac == so_ngoac) return;

    reverse(tmp.begin(), tmp.end());
    if(ans.find(tmp) == ans.end()){
        reverse(tmp.begin(), tmp.end());
        ans.insert(tmp);
    }
}
void Try(int i){
    for(int j = 1; j >= 0; j--){
        x[i] = j;
        if(i == so_ngoac - 1){
            check();
        }
        else Try(i + 1);
    }
}

void testCase() {
    cin >> s;
    so_ngoac = 0;
    for(auto i : s)
        if(i == '(')
            so_ngoac++;
    Try(0);
    for(auto item : ans) cout << item << endl;
}

int main() {
    testCase();
}