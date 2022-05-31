#include <iostream>

using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int T; cin >> T;
	ll arr[100001][4];
	
	arr[1][1] = 1; arr[1][2] = 0; arr[1][3] = 0;
	arr[2][1] = 0; arr[2][2] = 1; arr[2][3] = 0;
	arr[3][1] = 1; arr[3][2] = 1; arr[3][3] = 1;

	for(int i = 4; i < 100001; i++){
	       arr[i][1] = (arr[i-1][2]+arr[i-1][3]) % 1000000009;	
	       arr[i][2] = (arr[i-2][1]+arr[i-2][3]) % 1000000009;
	       arr[i][3] = (arr[i-3][1]+arr[i-3][2]) % 1000000009;
	}


	for(int i = 0; i < T; i++){
		int n;
		cin >> n;
		cout << (arr[n][1] + arr[n][2] + arr[n][3]) % 1000000009 << '\n';
	}

	return 0;
}
