#include <iostream>
using namespace std;
//소수의 자격

int main(){

	int a, b, d;
	int count = 0;

	cin >> a >> b >> d;

	bool check_prime_num = true;

	for (int i = a; i <= b; i++) { //a~b 까지
		check_prime_num = true;
		for (int j = 2; j < i; j++) {	//i가 소수인지 체크
			if (i % j == 0) {	//소수가 아닐 경우
				check_prime_num = false;
				break;
			}
		}

		if (check_prime_num) {	//소수이면 i안에 d가 있는지를 검사
			int tmp = i;

			while (tmp != 0) {
				if (tmp % 10 == d) {
					count++;
					cout << i << endl;
					break;
				}

				tmp /= 10;
			}
		}
	}

	cout << count;
}