#include <iostream>
#include <string>

using namespace std;

int main(){
	string input;
	cin >> input;

	int temp = input[0] - '0';
	if(temp < 2) cout << temp;
	else if(temp < 4) cout << temp / 2 << temp % 2;
	else cout << temp / 4 << (temp % 4) / 2 << (temp % 4) % 2;
	int length = input.length();
	for(int i = 1; i < length; i++){
		int temp = input[i] - '0';
		cout << temp / 4 << (temp % 4) / 2 << (temp % 4) % 2;
	}
	
	cout << '\n';

	return 0;
}
