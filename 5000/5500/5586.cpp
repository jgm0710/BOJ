#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cin >> a;

	int result1 = 0;
	int result2 = 0;

	for (int i = 1; a[i + 1] != 0; i++) {
		if (a[i - 1] == 'J' && a[i] == 'O' && a[i + 1] == 'I') {
			result1++;
		}
		else if (a[i - 1] == 'I' && a[i] == 'O' && a[i + 1] == 'I') {
			result2++;
		}
	}

	cout << result1 << "\n" << result2;
}