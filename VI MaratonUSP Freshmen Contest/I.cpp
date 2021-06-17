#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);	
	const vector<int> points = {15, 12, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = int(points.size());
	int p;
	cin >> p;
	vector<int> res(n, 0);
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		int t = p / points[i];
		ans += t;
		res[i] = t;
		p %= points[i];
	}
	cout << ans << '\n';
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < res[i]; ++j) {
			cout << (i + 1) << ' ';
		}
	}
	cout << '\n';
	return 0;
}
