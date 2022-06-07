#include <iostream>

using namespace std;

struct Node{
	int val;
	int len;
};

int main(){
	int N; cin >> N;

	Node arr[N+1];
	arr[0].val = 0; arr[0].len = 0;

	for(int i = 1; i < N+1; i++){
		int temp; cin >> temp;
		arr[i].val = temp;
		arr[i].len = 1;
	}

	for(int i = N-1; i > 0; i--){
		int max = 0;
		int current = arr[i].val;
		for(int j = i+1; j <= N; j++){
			if(arr[j].val > current && arr[j].len > max)
				max = arr[j].len;
		}
		arr[i].len = max+1;
	}

	int max = 1;

	for(int i = 1; i <= N; i++){
		if(arr[i].len > max) max = arr[i].len;
	}

	cout << max << '\n';

	return 0;
}
