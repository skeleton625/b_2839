#include <iostream>
using namespace std;

int i1, t, a, b, r, m = 5000;

int main() {
	cin >> i1;
	t = i1 / 5;
	for (int i = 0; i <= t; i++) {
		r = i1 - 5 * i;
		if (r % 3 == 0&&m > (r/3+i)) m = r / 3 + i;
	}
	if (m != 5000) cout << m;
	else cout << -1;
}