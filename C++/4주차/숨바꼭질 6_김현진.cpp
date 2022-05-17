#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int gcd(int a, int b){
	int temp = max(a, b) % min(a, b);
	if(temp == 0) return min(a, b);
	else return gcd(min(a, b), temp);
}

int main(){
	int N, S;
	cin >> N >> S;

	int absArray[N] = {0};
	for(int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		absArray[i] = abs(temp - S);
	}

	int temp = absArray[0];
	for(int i = 1; i < N; i++) temp = gcd(temp, absArray[i]);
	
	cout << temp << '\n';

	return 0;
}
