#include <iostream>
#include <string>

using namespace std;

int main(){
	string input;
	while(getline(cin, input)){

		int count[4] = {0};

		for(int i = 0; i < input.length(); i++){
			if('a' <= input[i] && input[i] <= 'z') count[0]++;
			else if('A' <= input[i] && input[i] <= 'Z') count[1]++;
			else if('0' <= input[i] && input[i] <= '9') count[2]++;
			else count[3]++;
		}

		for(int i = 0; i < 4; i++){
			cout << count[i] << " ";
		}
		cout << '\n';
	}
	
	return 0;
}
