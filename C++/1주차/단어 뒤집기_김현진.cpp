#include <iostream>
#include <string>

using namespace std;

string flipString(string str){
	int len = str.length();
	string array[len];
	string res = "";
	
	for(int i = 0; i < len; i++) array[len-1-i] = str[i];
	for(int i = 0; i < len; i++) res += array[i];

	return res;
}

int main(){
	int N;
	cin >> N;
	cin.ignore();
	string temp;
	for(int i = 0; i < N; i++){
		getline(cin, temp);
		int len = temp.length();
		string vocab = "";
		for(int i = 0; i < len; i++){
			if(temp[i] != ' ') vocab += temp[i];
			else{
				cout << flipString(vocab) << " ";
				vocab = "";
			}
		}
		cout << flipString(vocab) << '\n';
		vocab = "";
	}

	return 0; 
}
