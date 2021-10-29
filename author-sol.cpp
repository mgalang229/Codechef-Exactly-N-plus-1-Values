#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// note: 1 + 2 + 4 + 8 + ... + 2 ^ (N - 1) = 2 ^ (N - 1)
		cout << 1 << " ";
		for (int i = 0; i < n; i++) {
			cout << (1LL << i) << " ";
		}
		cout << '\n';
	}
	return 0;
}
