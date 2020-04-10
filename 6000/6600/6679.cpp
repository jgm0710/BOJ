#include<iostream>
using namespace std;


bool result(int n) {
	int num = n;
	int sum[3];
	for (int i = 0; i < 3; i++)
		sum[i] = 0;
	//10진수시 각자리수 합 구함
	sum[0] += n / 1000;
	sum[0] += (n % 1000) / 100;
	sum[0] += (n % 100) / 10;
	sum[0] += (n % 10);
	//12진수시 각자리수 합 구함
	while (true) {
		if (num == 0)
			break;
		sum[1] += num % 12;
		num /= 12;
	}
	//16진수시 각자리 수 합 구함
	num = n;
	while (true) {
		if (num == 0)
			break;
		sum[2] += num % 16;
		num /= 16;
	}
	//cout << sum[0] << " " << sum[1] << " " << sum[2] << endl;

	if (sum[0] == sum[1] && sum[1] == sum[2] && sum[2] == sum[0])
		return true;
	else
		return false;
}

int main() {

	for (int i = 1000; i <= 9999; i++) {
		if (result(i))
			cout << i << endl;
	}
}