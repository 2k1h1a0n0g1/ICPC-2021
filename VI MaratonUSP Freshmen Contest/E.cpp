#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);	
	int n;
	cin >> n;
	vector<string> word(n);
	map<string, int> cnt;
	for (int i = 0; i < n; ++i) {
		cin >> word[i];
		cnt[word[i]]++;
	}
	int m;
	cin >> m;
	map<string, vector<string>> dict;
	for (int j = 0; j < m; ++j) {
		string s; int k;
		cin >> s >> k;
		vector<string> used(k);
		for (int i = 0; i < k; ++i) {
			cin >> used[i];
		}
		dict[s] = used;
	}
	map<string, bool> processed;
	for (auto [s, used] : dict) {
		processed[s] = false;
	}
	for (;;) {
		bool any = false;
		for (auto [s, used] : dict) {
			if (processed[s] == true) {
				continue;
			}
			int enough = 0;
			for (string t : used) {
				enough += (cnt[t] > 0);
			}
			if (enough == int(used.size())) {
				processed[s] = true;
				cnt[s]++;
				any = true;
			}
		}
		if (!any) {
			break;
		}
	}
	int ans = 0;
	for (auto [s, ok] : processed) {
		ans += ok;
	}
	cout << ans + n << '\n';
	return 0;
}
