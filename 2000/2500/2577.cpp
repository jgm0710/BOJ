#include <iostream>
using namespace std;
//숫자의 개수


int arr[10]; //0~9
int main(){
	int a, b, c;
	cin >> a >> b >> c;



	int tmp = a * b * c;

	int i = 0;
	while (true) {
		if (tmp  == 0)
			break;

		for (int i = 0; i < 10; i++) {
			if (i == (tmp % 10 ))
				arr[i]++;
		}
		tmp /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;
}