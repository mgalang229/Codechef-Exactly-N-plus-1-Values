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
		if (n == 1) {
			// edge case: if 'n' is equal to 2, then simply print two 1s
			cout << 1 << " " << 1 << '\n';
			continue;
		}
		// otherwise, calculate 2 to the power of 'n' or (2 ^ n)
		// generate numbers from 1 to ('n' - 2) because we will repeat ('n' - 1) again
		// in order to stay true to the given constraints in the problem statement
		// and the n-th value will be the difference of (2 ^ n) and the sum of all the numbers used
		long long x = pow(2, n);
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			cout << i + 1 << " ";
			sum += (i + 1);
		}
		sum += (n - 1);
		cout << n - 1 << " " << x - sum << '\n';
	}
	return 0;
}
