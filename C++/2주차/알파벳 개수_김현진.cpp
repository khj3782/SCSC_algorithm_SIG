#include <iostream>
#include <string>

using namespace std;

int main(){
	int count[26] = {0};
	char input[100] = {0};

	cin >> input;

	int iter = 0;
	while(input[iter] != 0){
		count[input[iter]-'a']++;
		iter++;
	}

	for(int i = 0; i < 26; i++){
		cout << count[i] << " ";
	}

	return 0;
}
