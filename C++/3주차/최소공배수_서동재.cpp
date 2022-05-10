#include <iostream>
using namespace std;

int gcd(int x, int y);
int lcm(int x, int y);

int main() {
	int i;
	cin >> i;
	for (int j = 0; j < i; j++) {
		int a, b;
		cin >> a >> b;
		cout << lcm(a, b) << endl;
	}
}

int gcd(int x, int y) {
	int z;
	while (y != 0)
	{
		z = x % y;
		x = y;
		y = z;
	}
	return x;
}

int lcm(int x, int y) {
	return (x * y) / gcd(x, y);
}