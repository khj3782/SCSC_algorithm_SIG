#include <iostream>
using namespace std;

int f(int n);
int g(int n);

int f(int n) {
	while(n > 0) {
		return f((int)n / 5) + (int)n / 5;
	}

	if (n == 0) {
		return 0;
	}
}

int g(int n) {
	while (n > 0) {
		return g((int)n / 2) + (int)n / 2;
	}

	if (n == 0) {
		return 0;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	int num_list[2] = { 0 };
	cin >> a >> b;

	num_list[0] = g(a) - g(a - b) - g(b);
	num_list[1] = f(a) - f(a - b) - f(b);

	if (num_list[0] > num_list[1]) {
		cout << num_list[1] << endl;
	}
	else cout << num_list[0] << endl;

	return 0;
}