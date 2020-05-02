#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
//이진수 덧셈
//80 자리 수 이기 때문에 string으로 처리

int bn1[100];
int bn2[100];
int result[100];

int main(){
	string a, b;
	cin >> a >> b;


	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	for (int i = 0; i < a.length(); i++) {
		bn1[i] = a[i] - '0';
	}
	for (int i = 0; i < b.length(); i++) {
		bn2[i] = b[i] - '0';
	}

	for (int i = 0; i < 100; i++) {
		result[i] = bn1[i] + bn2[i];
	}

	//자리수 올림
	for (int i = 0; i < 100; i++) {
		if (result[i] > 1) {
			result[i] %= 2;
			result[i + 1]++;
		}
	}

	int tmp_i = 0;
	for (int i = 99;  result[i]==0&&i>0; i--) {
		tmp_i = i;
	}
	if (tmp_i == 0) {
		cout << 0;
	}
	else {
		for (int i = tmp_i - 1; i >= 0; i--) {
			cout << result[i];
		}
	}
	
}