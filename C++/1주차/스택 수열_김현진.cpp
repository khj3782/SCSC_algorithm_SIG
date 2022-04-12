#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std; 

int main(){
	int n, m;
	cin >> n;
	int array[n];
	for(int i = 0; i < n; i++){
		cin >> m;
		array[i] = m;
	}

	queue<string> str;
	stack<int> stack;
	int iter = 0;
	for(int i = 0; i < n; i++){
		stack.push(i+1);
		str.push("+");
		while(iter <= i && array[iter] == stack.top()){
			stack.pop();
			str.push("-");
			iter++;
		}
	}

	if(str.size() == 2*n){
		while(!str.empty()){
			cout << str.front() << '\n';
			str.pop();
		}
	}
	else cout << "NO" << '\n';

	return 0;
}
