#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string S;
	cin >> S;
	stack<char> op;
	string letter;

	for (int i = 0; i < S.length(); i++) {
		if (S[i] == '(' || S[i] == ')' || S[i] == '*' || S[i] == '+' || S[i] == '-' || S[i] == '/') {
			if (!op.empty() && (op.top() == '*' || op.top() == '/') && (S[i] == '+' || S[i] == '-')) {
				while (!op.empty() && op.top() != '(') {
					letter.push_back(op.top());
					op.pop();
				}
			}
			if (!op.empty() && (op.top() == '+' || op.top() == '-') && (S[i] == '+' || S[i] == '-')) {
				letter.push_back(op.top());
				op.pop();
			}
			if (!op.empty() && (op.top() == '*' || op.top() == '/') && (S[i] == '*' || S[i] == '/')) {
				letter.push_back(op.top());
				op.pop();
			}
			op.push(S[i]);
		
			if (S[i] == ')') {
				op.pop();
				while (op.top() != '(') {
					letter.push_back(op.top());
					op.pop();
				}
				op.pop();
			}
		}	else {
				letter.push_back(S[i]);
			}
		}

		while (!op.empty()) {
			letter.push_back(op.top());
			op.pop();
		}

	cout << letter << endl;
	
	return 0;
}