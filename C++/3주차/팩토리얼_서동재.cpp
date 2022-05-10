#include <iostream>
using namespace std;

int factorial(int n);

int main() {
	int N;
	cin >> N;
	cout<< factorial(N) << endl;
	return 0;
}

int factorial(int n) {
	int result = 1;
	for (int i = 1; i < n + 1; i++) {
		result = result * i;
	}
	return result;
}