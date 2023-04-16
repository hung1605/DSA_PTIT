#include <bits/stdc++.h>
using namespace std;

long long dem = 0;
long long temp[10000000];
void merge(int left, int mid, int right, long long a[]){
	int i = left, j = mid + 1;
	int index = left;
	while(i <= mid and j <= right){
		if(a[i] <= a[j])
			temp[index++] = a[i++];
		else{
			temp[index++] = a[j++];
			dem += (mid - i + 1);
		} 
	}
	while(i <= mid) temp[index++] = a[i++];
	while(j <= right) temp[index++] = a[j++];
	for(int k = left; k <= right; k++){
		a[k] = temp[k];
	}
}

void merge_sort(long long a[], int left, int right){
	if(left >= right) return;
	int mid =  (left + right)/2;
	merge_sort(a, left, mid);
	merge_sort(a, mid + 1, right);
	merge(left, mid, right, a);
}

void testCase(){
	int n; cin >> n;
	long long a[n];
	dem = 0;
	for(long long &i : a) cin >> i;
	merge_sort(a, 0, n - 1);
	cout << dem << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}
