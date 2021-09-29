#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, p, x, y;
		cin >> n >> p >> x >> y;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// follow the instructions in the problem statement
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum = (a[i] == 0 ? sum + x : sum + y);
			if (i + 1 == p) {
				break;
			}
		}
		cout << sum << '\n';
	}
	return 0;
}
