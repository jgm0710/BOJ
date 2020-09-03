#include<iostream>
#pragma warning (disable:4996)
using namespace std;
// 2748 피보나치 수 2

long long arr[100];

int main(){

	int n;

	cin >> n;

	arr[0] = 0;
	arr[1] = 1;
	if (n == 1) {
		cout << 1;
		return 0;
	}

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	/*for (int i = 0; i <= n; i++)
		cout << arr[i] << " ";*/

	cout << arr[n];

	return 0;
}