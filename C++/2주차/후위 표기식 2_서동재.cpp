#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	string S;
	cin >> N;
	cin >> S;
	int num_list[26] = { 0 };
	for (int i = 0; i < N; i++) {
		cin >> num_list[i];
	}
	stack<double> op;

	for (int i = 0; i < S.length(); i++) {
		if (S[i] == '*') {
			double num_1 = op.top();
			op.pop();
			double num_2 = op.top();
			op.pop();
			double temp = num_1 * num_2;
			op.push(temp);
		}
		else if (S[i] == '/') {
			double num_1 = op.top();
			op.pop();
			double num_2 = op.top();
			op.pop();
			double temp = num_2 / num_1;
			op.push(temp);
		}
		else if (S[i] == '+') {
			double num_1 = op.top();
			op.pop();
			double num_2 = op.top();
			op.pop();
			double temp = num_1 + num_2;
			op.push(temp);
		}
		else if (S[i] == '-') {
			double num_1 = op.top();
			op.pop();
			double num_2 = op.top();
			op.pop();
			double temp = num_2 - num_1;
			op.push(temp);
		}
		else {
			int num = S[i];
			op.push(num_list[num - 65]);
		}
	}

	cout << fixed;
	cout.precision(2);
	cout << op.top() << endl;

	return 0;
}