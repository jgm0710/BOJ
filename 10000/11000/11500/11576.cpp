#include<iostream>
#include<cmath>
using namespace std;

int arr[30];
int result[100];
int main() {
	int a, b;		//a�������� b�������� ��ȯ
	cin >> a >> b;

	int m;	//�Է¹��� a������ �ڸ���
	cin >> m;

	
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	int sum=0;
	int digit = m;
	for (int i = 0; i < m; i++) {	//a������ 10�������� ��ȯ
		sum += arr[i] * pow(a, digit-1);	
		digit--;
	}

	//cout << sum;		//������� 10�������� ��ȯ �Ϸ�
	//10�������� b�������� ��ȯ�������
	int i=0;
	digit = 0;
	while (true) {	//10�������� b�������� ��ȯ
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