#include <iostream>
#include <string>

using namespace std;

int main(){
	string input;
	cin >> input;

	int length = input.length();
	if(length % 3 == 1) input = "00" + input;
	else if(length % 3 == 2) input = "0" + input;

	for(int i = 0; i < length; i+=3){
		int temp = (input[i] - '0') * 4;
		temp += (input[i+1] - '0') * 2;
		temp += input[i+2] - '0';

		cout << temp;
	}

	cout << '\n';

	return 0;
}
