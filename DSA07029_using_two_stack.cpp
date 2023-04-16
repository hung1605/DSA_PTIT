#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;//3[b2[ca]]
    stack<int> integerStack;
    stack<char> stringStack;
    string temp = "", result = "";
    for (int i = 0; i < (int)s.size(); ++i){
        int count = 0;
        if(isdigit(s[i])){
            while (isdigit(s[i])){
                count = count * 10 + s[i] - '0'; i++;
            }
            integerStack.push(count);
            i--;
        }
        else if(s[i] == ']'){
            temp = ""; count = 0;
            if(!integerStack.empty()){
                count = integerStack.top();
                integerStack.pop();
            }
            while (!stringStack.empty() and stringStack.top() != '[' ){
                temp = stringStack.top() + temp;
                stringStack.pop();
            }
            stringStack.pop();// xoa dau '[';
            for(int j = 0; j < count; j++)
                result += temp;
            for (int j = 0; j < (int)result.length(); j++)
                stringStack.push(result[j]);
            result = "";
        }
        else if (s[i] == '['){
            stringStack.push(s[i]);
            if(!isdigit(s[i - 1]))
                integerStack.push(1);
        }
        else stringStack.push(s[i]);
    }

    while (!stringStack.empty()){
        result = stringStack.top() + result;
        stringStack.pop();
    }
    cout << result << endl;
}

int main() {
    int t; cin >> t;
    while (t--) testCase();
}