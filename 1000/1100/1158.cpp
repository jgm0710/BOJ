#include <iostream>
using namespace std;
//1158 요세푸스 문제

int arr[5002];
int result[5002];

int main(){

	int n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	int count_K = 0;
	int loop = 0;
	int endCount = 0;
	int result_i=0;
	while (true) {

		endCount++;

		if (arr[loop] != 0) {
			count_K++;

			if (count_K == k) {
				count_K = 0;
				result[result_i++] = arr[loop];
				arr[loop] = 0;
				endCount = 0;
			}
		}

		loop++;

		if (loop >= n) {
			loop = 0;
		}

		if (endCount > n*n)
			break;
	}

	cout << "<";

	int i = 0;
	while (true) {
		if (result[i + 1] != 0) {
			cout << result[i] << ", ";
		}
		else {
			cout << result[i] << ">";
			break;
		}

		i++;
	}

	//cout << endl << endl << "i=" << i+1;
}