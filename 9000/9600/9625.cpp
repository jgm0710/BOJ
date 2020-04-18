#include<iostream>
#pragma warning (disable:4996)
using namespace std;
// 주석
int main() {
	int k;
	int a = 1, b = 0;
	cin >> k;
	while (k--) {
		int tmp = a;
		a = b;
		b = b + tmp;
	}

	cout << a << " " << b;
}