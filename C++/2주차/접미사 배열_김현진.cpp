#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
	string input;
	priority_queue<string, vector<string>, greater<string> > alpha;
	cin >> input;

	for(int i = 0; i < input.length(); i++){
		alpha.push(input.substr(i, input.length()-i));
	}

	while(!alpha.empty()){
		cout << alpha.top() << '\n';
		alpha.pop();
	
	}
	return 0;
}
