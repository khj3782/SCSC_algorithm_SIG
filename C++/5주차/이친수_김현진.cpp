#include <iostream>

using namespace std;
using ll = long long;

int main(){
	int N; cin >> N;
	ll pinary[91][2];

	pinary[1][0] = 0; pinary[1][1] = 1;

	for(int i = 2; i < 91; i++){
		pinary[i][0] = pinary[i-1][0] + pinary[i-1][1];
		pinary[i][1] = pinary[i-1][0];
	}

	cout << pinary[N][0] + pinary[N][1] << '\n';

	return 0;
}
