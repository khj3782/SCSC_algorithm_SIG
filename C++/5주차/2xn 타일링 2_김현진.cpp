#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int array[1001];
	array[0] = 0;
	array[1] = 1;
	array[2] = 3;
	for(int i = 3; i < 1001; i++){
		array[i] = (array[i-1] + 2*array[i-2])%10007;
	}

	cout << array[n] << '\n';
	return 0;
}
