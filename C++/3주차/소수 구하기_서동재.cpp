#include <iostream>
using namespace std;

int check[1000001] = { 0 };

int main() {
	int N, M;
	cin >> N >> M;

	check[1] = 1;
	for (int i = 1; i * i < 1000001; i++) {
		if (i == 1) continue;
		if (check[i] == 1) continue;
		else {
			int j = i;
			while (j < 1000001) {
				j = j + i;
				if (j < 1000001) check[j] = 1;
			}
		}
	}

	for (int x = N; x < M+1; x++) {
		if (check[x] == 0) cout << x << '\n';
	}

}