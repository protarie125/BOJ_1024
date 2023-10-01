#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

ll getSum(ll x) {
	if (x <= 0) {
		return 0;
	}

	return (x * (x + 1)) / 2;
}

void print(ll b, ll len) {
	for (auto i = 0; i < len; ++i) {
		cout << b + i << ' ';
	}
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n, l;
	cin >> n >> l;

	for (auto len = l; len <= 100; ++len) {
		const auto c = getSum(len - 1);
		const auto b = n - c;

		if (0 <= b && 0 == b % len) {
			print(b / len, len);
			return 0;
		}
	}

	cout << -1;

	return 0;
}