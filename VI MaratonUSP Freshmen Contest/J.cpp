#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);	
	int tt;
	cin >> tt;
	vector<int> diff;
	while (tt--) {
		int a, t;
		cin >> a >> t;
		diff.push_back(a - t);
	}
	bool good = true;
	for (int i = 0; i + 1 < int(diff.size()); ++i) {
		good &= diff[i] == diff[i + 1];
	}
	cout << (good ? "idades corretas" : "mentiu a idade") << '\n';
	return 0;
}
