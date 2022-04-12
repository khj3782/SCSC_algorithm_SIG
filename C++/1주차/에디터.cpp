#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
	string str;
	cin >> str;

	list<char> ll;
	list<char>::iterator cursor;

	for(int i = 0; i < str.length(); i++) ll.push_back(str[i]);
	cursor = ll.end();

	int n; cin >> n;
	for(int i = 0; i < n; i++){
		string order;
		cin >> order;

		if(order == "L"){
			if(cursor != ll.begin()) cursor--;
		}
		else if(order == "D"){
			if(cursor != ll.end()) cursor++;
		}
		else if(order == "B"){
			if(cursor != ll.begin()) cursor = ll.erase(--cursor);
		}
		else if(order == "P"){
			char add;
			cin >> add;
			ll.insert(cursor, add);
		}
	}

	for(char res : ll) cout << res; 

	return 0;
}
