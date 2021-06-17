#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int64_t> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	set<int64_t> s(a.begin(), a.end());
	int64_t largest = -1;
	for (int64_t d : s) {
		auto it = upper_bound(a.begin(), a.end(), d + 1);
		int64_t best = int(it - a.begin());
		if (best % 3 == 0) {
			largest = max(largest, d);
		}
	}
	cout << largest << '\n';
	return 0;
}
