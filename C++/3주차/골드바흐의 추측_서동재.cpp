#include <iostream>
using namespace std;

int check_list[1000001] = { 0 };

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check_list[1] = 1;
    for (int i = 1; i * i < 1000001; i++) {
        if (i == 1) continue;
        if (check_list[i] == 1) continue;
        else {
            int j = i;
            int k = i;
            while (k < 1000001) {
                k = k + j;
                if (k < 1000001) {
                    check_list[k] = 1;
                }
            }
        }
    }

    while (1) {
        int n;
        cin >> n;
        int check = 0;
        if (n == 0) break;
        else {
            int x = 3;
            while (2 * x <= n) {
                if (check_list[x] == 1 || check_list[n - x] == 1) {
                    x = x + 2;
                }
                else {
                    cout << n << " = " << x << " + " << n - x << '\n';
                    check = 1;
                    break;
                }
            }
            if (check == 0) {
                cout << "Goldbach's conjecture is wrong." << '\n';
            }
        }

    }
}