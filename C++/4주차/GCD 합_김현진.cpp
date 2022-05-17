#include <iostream>
#include <cmath>

typedef long long ll;

using namespace std;

int gcd(int a, int b){
	int temp = max(a, b) % min(a, b);
	if(temp == 0) return min(a, b);
	else return gcd(min(a, b), temp);
}

int main(){
	int n, m;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> m;
		int array[m] = {0};
		int combi = m*(m-1)/2;
		int gcdarr[combi] = {0};

		int index = 0;

		for(int j = 0; j < m; j++) {
			cin >> array[j];
			for(int k = 0; k < j; k++){
				gcdarr[index] = gcd(array[j], array[k]);
				index++;
			}
		}

		ll res = 0;

		for(int k = 0; k < combi; k++){
			res += gcdarr[k];
		}

		cout << res << '\n';
	}

	return 0;
}
