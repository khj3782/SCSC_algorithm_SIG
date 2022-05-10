#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int new_list[100] = { 0 };
	for (int a = 0; a < N; a++) {
		cin >> new_list[a];
	}

	int check[1001] = { 0 };
	check[1] = 1;
	for (int i = 1; i < 1001; i++) {
		if (i == 1) continue;
		if (check[i] == 1) continue;
		else {
			int j = i;
			while (j < 1001) {
				j = j + i;
				if (j < 1001) check[j] = 1;
			}
		}
	}

	int result = 0;

	for (int x = 0; x < N; x++) {
		if (new_list[x] == 0) break;
		else {
			if (check[new_list[x]] == 0) result = result + 1;
		}
	}

	cout << result << endl;
}