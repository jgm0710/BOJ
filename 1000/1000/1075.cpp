#include <iostream>
using namespace std;
//나누기 

int main(){
	long long n;
	int f;
	cin >> n >> f;

	n = (n / 100) * 100;

	//cout << n;

	for (int i = 0; i < 100; i++) {
		//cout << n << endl;
		if (n % f == 0) {
			if (n % 100 >= 10) {
				cout << n % 100;
				break;
			}
			else {
				cout << "0" << n % 100;
				break;
			}
		}
		n++;
	}
}