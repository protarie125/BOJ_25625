#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, y;
	cin >> x >> y;

	if (y < x) {
		cout << x + y;
	}
	else {
		cout << y - x;
	}

	return 0;
}