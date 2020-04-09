#include<iostream>
#include<cmath>
using namespace std;

int arr[30];
int result[100];
int main() {
	int a, b;		//a진법에서 b진법으로 변환
	cin >> a >> b;

	int m;	//입력받을 a진법의 자리수
	cin >> m;

	
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	int sum=0;
	int digit = m;
	for (int i = 0; i < m; i++) {	//a진법을 10진법으로 변환
		sum += arr[i] * pow(a, digit-1);	
		digit--;
	}

	//cout << sum;		//여기까지 10진법으로 변환 완료
	//10진법에서 b진법으로 변환해줘야함
	int i=0;
	digit = 0;
	while (true) {	//10진법에서 b진법으로 변환
		result[i++] = sum % b;
		sum = sum / b;
		digit++;
		if (sum == 0) {
			break;
		}

	}

	for (int j = digit-1; j >=0; j--) {
		cout << result[j] << " ";
	}
	
}