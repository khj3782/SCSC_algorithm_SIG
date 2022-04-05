#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	stack<int> stack;	//하나의 stack에는 한 가지 자료형만 저장 가능; <>안에 저장할 자료형 선언
	string str;

	for (int i = 0; i < N; i++)	//여기서 i는 iterator라고 부름. (i 초기화; 루프 실행 조건; i 증가량)
								//++는 값을 1만큼 증가시킨다. (<-> --는 1만큼 감소시킴)
								//2 이상의 값씩 변화를 주고 싶으면 += 사용 (i += 4는 i를 4씩 증가시킨다)
	{
		int temp;
		cin >> str;				//cin은 한 줄로 들어온 입력도 띄어쓰기를 기준으로 나눠서 저장한다

		if (str == "push") {
			cin >> temp;
			stack.push(temp);
		}
		else if (str == "pop") {
			if (stack.empty()) cout << "-1" << '\n';
			else {
				cout << stack.top() << '\n';
				stack.pop();
			}
		}
		else if (str == "size") {
			cout << stack.size() << '\n';
		}
		else if (str == "empty") {
			if (stack.empty()) cout << "1" << '\n';
			else cout << "0" << '\n';
		}
		else if (str == "top") {
			if (stack.empty()) cout << "-1" << '\n';
			else cout << stack.top() << '\n';
		}

		else break;				//정의되지 않은 입력을 받으면 break을 써서 for loop에서 빠져나온다
	}
	return 0;
}