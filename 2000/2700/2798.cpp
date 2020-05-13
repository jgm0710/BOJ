#include <iostream>
using namespace std;
//블랙잭

int arr[200];

int min(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}

int main(){
	int n, m;
	cin >> n >> m;

	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[i] = a;
	}

	int t_sub = 300010;
	int tmp=0;
	int result=0;

	for (int i = 0; i < n - 2; i++) {
		for (int j = i+1; j < n - 1; j++) {
			for (int k = j+1; k < n; k++) {
				tmp = arr[i] + arr[j] + arr[k];
				//cout << tmp << endl;

				if (m >= tmp) {
					if (m - tmp <= t_sub) {
						result = tmp;
						t_sub = m- tmp;
						//cout << result << " " << t_sub << endl;
					}
				}
			}
		}
	}

	cout << result<<endl;
}