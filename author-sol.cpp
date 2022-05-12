#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, t, c;
	cin >> n >> t >> c;
	vector<int> vec {-1}; // actual first element
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp > t) {
			vec.push_back(i); // save the index
		}
	}
	vec.push_back(n); // actual last element
	long long ans = 0;
	for (int i = 1; i < (int) vec.size(); i++) {
		int diff = vec[i] - vec[i - 1] - 1; // no. of elements between the invalid prisoners
		ans += max(diff - c + 1, 0); // no. of prisoners who are valid to be taken
	}
	cout << ans << '\n';
	return 0;
}
