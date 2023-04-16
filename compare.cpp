#include<bits/stdc++.h>
using namespace std;

string method1(int k, string s){
    for (int i = 0; i < s.length(); ++i){
        if (k == 0)
            break;
        char c = '0';
        for (int j = i + 1; j < s.length(); ++j){
            c = max(c, s[j]);
        }
        if (c <= s[i])
            continue;
        string newz = s;
        for (int j = i + 1; j < s.length(); ++j){
            if (s[j] == c){
                string temp = s;
                swap(temp[i], temp[j]);
                newz = max(newz, temp);
            }
        }
        s = newz;
        k--;
    }
    return s;
}

string method2(int k, string s){
    int len = s.size();
    int cnt = 0;
    for (int i = 0; i < len; i++){
        int index = i;
        for (int j = len - 1; j > i; j--){
            if (s[j] > s[index]){
                index = j;
            }
        }
        if (index > i){
            swap(s[i], s[index]);
            cnt++;
        }
        if (cnt == k)
            break;
    }
    return s;
}




void Try(){
    for(int k = 1; k <= 9; k ++){
        for(int i = 1; i <= 999999; i++){
            if(method1(k,to_string(i)) == method2(k,to_string(i)))
                cout << "true" << endl;
            else cout << "false" << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Try();
}