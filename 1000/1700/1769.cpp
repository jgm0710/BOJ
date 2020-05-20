#include <iostream>
#include <string>
using namespace std;
//1769 3의 배수


int main() {

	string n;
	cin >> n;

	int sum = 0;
	int count = 0;

	if (n.length() == 1) {
		sum = n[0] - '0';
		cout << count << endl;

		if (sum % 3 == 0)
			cout << "YES";
		else
			cout << "NO";
		return 0;
	}
	for (int i = 0; i < n.length(); i++) {
		sum += n[i] - '0';
	}
	count++;


	int tmp = sum;

	while (true) {
		sum = 0;

		while (tmp != 0) {
			sum += tmp % 10;
			tmp /= 10;
		}

		tmp = sum;
		count++;
		//cout << sum << endl;

		if (sum / 10 == 0)
			break;
	}
	cout << count << endl;

	if (sum % 3 == 0)
		cout << "YES";
	else
		cout << "NO";

}