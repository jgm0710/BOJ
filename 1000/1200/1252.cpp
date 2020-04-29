#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
//이진수 덧셈
//80 자리 수 이기 때문에 string으로 처리

int bn1[90];
int bn2[90];
int result[90];

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main(){

	string a, b;

	cin >> a >> b;

	int result_length=max(a.length(), b.length());
	

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	for (int i = 0; a[i] != 0; i++)
		bn1[i] = a[i] - '0';
	for (int i = 0; b[i] != 0; i++)
		bn2[i] = b[i] - '0';
	
	for (int i = 0; i < 90; i++) {
		result[i] = bn1[i] + bn2[i];
		if (result[i] > 1) {
			result[i] -= 2;
			result[i + 1]++;
		}
	}
	
	if (result[result_length] == 1) {
		for (int i = result_length; i >= 0; i--) {
			cout << result[i]<<"up";
		}
	}
	else {
		for (int i = result_length-1; i >= 0; i--) {
			cout << result[i];
		}
	}
}