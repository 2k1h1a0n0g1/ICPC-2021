#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		sum += x;
	}
	int ans = min(n, sum + 1);
	cout << ans << '\n';
	return 0;
}
