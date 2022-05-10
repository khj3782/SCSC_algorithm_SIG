#include <iostream>
using namespace std;

int gcd(int x, int y);
int lcm(int x, int y);

int main() {
	int a;
	int b;
	cin >> a >> b;
	cout << gcd(a, b);
	cout << lcm(a, b);
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