#include <bits/stdc++.h>
using namespace std;

struct Job{
	int deadline,profit;
};

void testCase(){
	int n; 
	cin >> n;
	Job a[n];
	for(auto &i : a){
		int x; cin >> x;
		cin >> i.deadline >> i.profit;
	}
	sort(a, a + n, [](Job a, Job b){
		return a.profit > b.profit;
	});
	int result = 0, cnt = 0;
    bool unavailable_slot[1005];
    memset(unavailable_slot, false, sizeof(unavailable_slot));
	for(auto job : a){
		while(unavailable_slot[job.deadline] and job.deadline) job.deadline--;
		if(job.deadline and !unavailable_slot[job.deadline]){
			unavailable_slot[job.deadline] = true;
			result += job.profit;
			cnt++;
		}
	}
	cout << cnt << " " << result << endl;
}

int main(){
	long long t; cin >> t;
	while(t--) testCase();
}