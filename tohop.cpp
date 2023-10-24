#include<bits/stdc++.h>
using namespace std;

int k;
int x[25];
string s;
set<string> st;

void inkq(int i){
    string tmp;
    for(int k=1; k<=i; k++)
        tmp += s[x[k] - 1];
    st.insert(tmp);
}

void Try(int i){
    for(int j=x[i-1]+1; j<= (int)s.size(); j++){
        x[i] = j;
        if(i == k) inkq(i);
        else Try(i+1);   
    }
}

void Test_case(){
    st.clear();
    cin >> s >> k;
    x[0] = 0;
    Try(1);
    for(string x : st){
        cout << x << endl;
    }
}

int main(){
  	int t; cin >> t;
  	while(t--){
    	Test_case();
  	}
}