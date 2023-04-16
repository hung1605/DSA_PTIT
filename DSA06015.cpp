#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int left, int mid, int right){
	int i = left, j = mid + 1;
	int temp[100000];
	int index = left;
	while(i <= mid and j <= right){
		if(a[i] <= a[j]) temp[index++] = a[i++];
		else temp[index++] = a[j++];
	}
	while(i <= mid) temp[index++] = a[i++];
	while(j <= right) temp[index++] = a[j++];
	for(int k = left; k <= right; k++){
		a[k] = temp[k];
	}
}

void merge_sort(int a[], int left, int right){
	if(left >= right) return;
	int mid = (left + right) / 2;
	merge_sort(a,left,mid);
	merge_sort(a,mid+1,right);
	merge(a,left,mid,right);
}

void testCase(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	merge_sort(a,0,n - 1);
	for(int x : a) cout << x << " ";
	cout << endl;
	
	sort(a, a + n);
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}