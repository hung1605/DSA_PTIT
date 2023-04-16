#include <bits/stdc++.h>
using namespace std;

struct diem{
	int toa_do;
	string mau;
};

diem cac_diem[200005];
int main(){
	int n; 
	cin >> n;
	int m = 2*n;
	for(int i = 1; i <= n; i++){
		cin >> cac_diem[i].toa_do;
		cac_diem[i].mau = "trang";
	}
	for(int i = n + 1; i <= m; i++){
		cin >> cac_diem[i].toa_do;
		cac_diem[i].mau = "den";
	}
	sort(cac_diem + 1, cac_diem + m + 1, [](diem a, diem b){
		return a.toa_do < b.toa_do;
	});
	int dem = 0;
	for(int i = 2; i <= m;){
		if(cac_diem[i].mau != cac_diem[i - 1].mau){
			i += 2;
			dem++;
		}
		else i++;
	}
	cout << dem;
}