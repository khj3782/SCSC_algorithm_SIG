#include <iostream>
using namespace std;

int check_five(int n);

int main() {
	int N;
	cin >> N;
	cout << check_five(N) << endl;
}


int check_five(int n) {
	if (n > 0) {
		return check_five((int)n / 5) + (int)n / 5;
	}
	else return 0;
}