#include <iostream>
using namespace std;
//약수들의 합

int arr[10000];
int main(){
	while (true) {
		
		for (int i = 0; i < 10000; i++) {
			arr[i] = -1;
		}
		int n;
		cin >> n;

		if (n == -1)
			break;
		int result=0;
		int j = 0;
		
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				result += i;
				arr[j++] = i;
			}
		}

		if (n == result) {
			for (int i = 0; arr[i] != -1; i++) {
				if (i == 0) {
					cout << n << " = "<<arr[i];
				}
				else {
					cout << " + " << arr[i];
				}
			}
			cout << endl;
		}
		else {
			cout << n << " is NOT perfect.\n";
		}
	}
}