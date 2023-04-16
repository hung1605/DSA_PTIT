#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;//3[b2[ca]]
    stack<int> st;
    string ans = "";
    for(int i = 0; i < (int)s.length(); i++){
        if(s[i] == '[') st.push(i);
        else if(s[i] == ']'){
            int index = st.top() - 1;
            if(index >= 0 and '0' <= s[index] and s[index] <= '9'){
                // tìm số lần lặp
                int start;
                for(int z = index; z >= 0; z--){
                    if(isdigit(s[z])) start = z;
                    else break;
                }
                int range = stoi(s.substr(start, index - start + 1));
                // lấy xâu cần lặp
                string tmp1 = ans;
                string tmp2 = "";
                for(int z = st.top() + 1;'a' <= s[z] and s[z] <= 'z'; z++)
                    tmp2 += s[z];
                string tmp = tmp2 + tmp1;
                // cout << tmp << endl;
                // lặp xâu
                ans = "";
                for(int k = 0; k < range; k++)
                    ans += tmp;
            }
            else{
                if(s[index] == ']'){
                    string tmp1 = ans;
                    string tmp2 = "";
                    for(int z = st.top() + 1;'a' <= s[z] and s[z] <= 'z'; z++)
                        tmp2 += s[z];
                    string ans = tmp2 + tmp1;
                }
                // lấy xâu cần lặp
                
            }
            st.pop();
        }
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while (t--) testCase();
}