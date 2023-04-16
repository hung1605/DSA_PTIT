#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; 
	cin >> n;
	vector<pair<int,int>> pair_answer(n);
	stack<pair<int,int>> pair_st;
	int a[n];
	for(auto &i : a) cin >> i;

	for(int i = n - 1; i >= 0; i--){
		if(pair_st.empty()){
			pair_st.push({i,a[i]});
			pair_answer[i] = {-1,-1};
		}
		else{
			while(!pair_st.empty() and pair_st.top().second <= a[i])
				pair_st.pop();
			if(pair_st.empty())
				pair_answer[i] = {-1,-1};
			else
				pair_answer[i] = pair_st.top();
			pair_st.push({i,a[i]});
		}
	}
	vector<int> smaller_answer(n);
	stack<int> smaller_st;
	for(int i = n - 1; i >= 0; i--){
		if(smaller_st.empty()){
			smaller_answer[i] = -1;
			smaller_st.push(a[i]);
		}
		else{
			while(!smaller_st.empty() and smaller_st.top() >= a[i]){
				smaller_st.pop();
			}
			if(smaller_st.empty())
				smaller_answer[i] = -1;
			else
				smaller_answer[i] = smaller_st.top();
			smaller_st.push(a[i]);
		}
	}
	vector<int> final_answer(n);
	for(int i = 0; i < n; i++){
		if(pair_answer[i].first == -1) final_answer[i] =-1;
		else final_answer[i] = smaller_answer[pair_answer[i].first];
	}
	for(auto i : final_answer) cout << i << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--) testCase();
}