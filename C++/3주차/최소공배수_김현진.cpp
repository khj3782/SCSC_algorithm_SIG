#include <iostream>

using namespace std;

int max(int A, int B){
	if(A > B) return A;
	else return B;
}

int min(int A, int B){
	if(A > B) return B;
	else return A;
}

int maxi(int A, int B){
	int mx, mn, mod;
	mx = max(A, B);
	mn = min(A, B);
	mod = mx%mn;
	if(mod == 0) return mn;
	else return maxi(mn, mod);
}

int main(){
	int T;
	cin >> T;

	for(int i = 0; i < T; i++){
		int A, B, maxDiv;
		cin >> A >> B;

		maxDiv = maxi(A, B);
		if(maxDiv == 1) cout << A*B << '\n';
		else cout << A*B/maxDiv << '\n';
	}

	return 0;
}
