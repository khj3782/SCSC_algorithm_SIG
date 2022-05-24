#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int N;
	cin >> N;

	int P[N+1] = {0};
	for(int i = 1; i < N+1; i++) cin >> P[i];

	int res[N+1] = {0};
	for(int i = 1; i < N+1; i++) res[i] = P[i]*i;

	for(int i = 1; i < N+1; i++){
		for(int j = 1; j < i+1; j++){
			res[i] = min(res[i], res[i-j]+P[j]);
		}
	}

	cout << res[N] << '\n';

	return 0;
}
