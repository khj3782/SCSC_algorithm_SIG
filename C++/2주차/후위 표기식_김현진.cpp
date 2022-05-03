#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
	string input;
	cin >> input;

	stack<char> symbol;

	for(int i = 0; i < input.length(); i++){
		if('A' <= input[i] && input[i] <= 'Z') cout << input[i];
		else{
			if(input[i] == '(') symbol.push(input[i]);
			else if(input[i] == ')'){
				while(!symbol.empty() && symbol.top() != '('){
					cout << symbol.top();
					symbol.pop();
				}
				symbol.pop();
			}
			else if(input[i] == '*' || input[i] == '/'){
				while(!symbol.empty() && (symbol.top() == '*' || symbol.top() == '/')){
					cout << symbol.top();
					symbol.pop();
				}
				symbol.push(input[i]);
			}
			else if(input[i] == '+' || input[i] == '-'){
				while(!symbol.empty() && symbol.top() != '('){
					cout << symbol.top();
					symbol.pop();
				}
				symbol.push(input[i]);
			}
		}
	}

	while(!symbol.empty()){
		cout << symbol.top();
		symbol.pop();
	}
	cout << '\n';

	return 0;
}
