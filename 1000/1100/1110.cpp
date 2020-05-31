#include <iostream>
using namespace std;
//1110 더하기 싸이클

int main(){

	int n;
	cin >> n;

	int count = 0;

	int tmp = n;

	int a, b, sum;
	while (true) {
		a = tmp / 10;
		b = tmp % 10;
		sum = (a + b)%10;

		tmp = b * 10 + sum;
		count++;

		if (tmp == n)
			break;
	}

	cout << count;
}