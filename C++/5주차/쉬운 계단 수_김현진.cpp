#include <iostream>

#define MOD 1000000000

using namespace std;
using ll = long long;

int main(){
	int N; cin >> N;
	ll stair[101][10];

	stair[1][0] = 0;
	for(int i = 1; i < 10; i++) stair[1][i] = 1;

	for(int i = 2; i < 101; i++) {
		stair[i][0] = stair[i-1][1] % MOD;
		stair[i][9] = stair[i-1][8] % MOD;
		for(int j = 1; j < 9; j++) 
			stair[i][j] = (stair[i-1][j-1] + stair[i-1][j+1]) % MOD;
	}

	ll temp = 0;
	for(int i = 0; i < 10; i++) {
		temp += stair[N][i];
		temp = temp % MOD;
	}

	cout << temp << '\n';

	return 0;
}
