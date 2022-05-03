#include <iostream>
#include <string>
#include <stack>
#include <iomanip>

using namespace std;

int main(){
	int n;
	string post;
	cin >> n;
	cin >> post;

	int alpha[26] = {0};
	stack<double> num;

	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		alpha[i] = temp;
	}

	for(int i = 0; i < post.length(); i++){
		char p = post[i];
		if('A' <= p && p <= 'Z'){
			num.push(alpha[p-'A']);
		}
		else{
			double a, b;
			a = num.top(); num.pop();
			b = num.top(); num.pop();
			if(p == '+') num.push(a+b);
			else if(p == '-') num.push(b-a);
			else if(p == '*') num.push(a*b);
			else num.push(b/a);
		}
	}

	cout << fixed << setprecision(2) << num.top() << '\n';
	num.pop();

	return 0;
}
