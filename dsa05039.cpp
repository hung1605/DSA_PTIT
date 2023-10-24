#include <bits/stdc++.h>
using namespace std;
int n, k;
string s;
long mod = 1e9+7;

int p1[] = {1,2,3,4,5,6,7,8,9};
int p2[] = {1,4,9,16,25,36,49,64,81};

pair <int, pair<int,int>> m[101][10001];
int ok;

void ktao() {
	queue <pair<pair<int,int>,pair<int,int>>> q;
	q.push({{0,0},{0,0}}); // pair dau luu vtri hien tai, psau luu vtri truoc do
	while (!q.empty()) {
		auto a = q.front();
		q.pop();
		for (int i = 0; i < 9; i++) {
			int x = a.first.first + p1[i];
			int y = a.first.second + p2[i];
			if (x <= 100 && y <= 10000 && m[x][y].first == 0) {
				m[x][y].first = p1[i];
				m[x][y].second = a.first;
				q.push({{x,y},a.first});
			}
		}
	}
}

void find(int n, int k) {
	if (m[n][k].first == 0) {
		if (ok == 0) s += "-1";
		return;
	}
	ok = 1;
	s += char(m[n][k].first + 48);
	find(m[n][k].second.first,m[n][k].second.second);
}

int main() {
	ktao();
	int t; cin >> t;
	while (t--) {
		ok = 0;
		s = "";
		cin >> n >> k;
		find(n,k);
		sort(s.begin(),s.end());
		cout << s;
		cout << "\n";
	}
}
