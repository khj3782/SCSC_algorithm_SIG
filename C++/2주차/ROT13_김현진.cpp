#include <iostream>
#include <string>

using namespace std;

void ROT13(string input){
	for(int i = 0; i < input.length(); i++){
		char c = input[i];
		if('A' <= c && c <= 'Z'-13) cout << (char)(c + 13);
		else if('a' <= c && c <= 'z'-13) cout << (char)(c + 13);
		else if('Z'-13 < c && c <= 'Z') cout << (char)('A' + (c + 12 - 'Z'));
		else if('z'-13 < c && c <= 'z') cout << (char)('a' + (c + 12 - 'z'));
		else cout << c;
	}
	cout << '\n';
	return;
}

int main(){
	string input;
	getline(cin, input);

	ROT13(input);

	return 0;
}
