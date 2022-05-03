#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using ll = long long;

int main(){
	ll A, B, C, D;
	cin >> A >> B >> C >> D;

	int b0 = to_string(B).length();
	int d0 = to_string(D).length();

	ll AB = pow(10, b0)*A + B;
	ll CD = pow(10, d0)*C + D;

	cout << AB+CD;

	return 0;
}
