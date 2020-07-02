#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void test_case() {
	int y, b, r;
	cin >> y >> b >> r;
	cout << min(y + 2, min(b + 1, r)) * 3 - 3 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//while(T--) {
		//test_case();
	//}
	test_case();
}
