#include <iostream>
using namespace std;
//2960 에라토스테네스의 체

int arr[1100];

int main(){

	int n, k;
	cin >> n >> k;

	for (int i = 2; i <= n; i++) {
		arr[i] = 1;
	}

	int erase_count = 0;

	bool end_flag;
	while (true) {
		end_flag = true;

		int p = 0;
		for (int i = 2; i <= n; i++) {
			if (arr[i] == 1) {
				p = i;
				break;
			}
		}

		for (int i = 2; i <= n; i++) {
			if (i % p == 0) {
				if (arr[i] == 1) {
					arr[i] = 0;
					erase_count++;

					if (erase_count == k) {
						cout << i;
						return 0;
					}
				}
			}
		}

		for (int i = 2; i <= n; i++) {
			if (arr[i] == 1) {
				end_flag = false;
				break;
			}
		}

		if (end_flag) {
			break;
		}
	}
}