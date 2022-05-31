#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
	if(n == 1) return false;
	if(n == 2) return true;
	if(n == 3) return true;

	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;		
	}

	return true;
}

int main(){
	int M, N;
	cin >> M >> N;

	for(int i = M; i <= N; i++){
		if(isPrime(i)) cout << i << '\n';
	}

	return 0;
}
