#include<iostream>
#include<string>

using namespace std;

int result[100];

int min(int a, int b) {
	if (a < b)
		return a;
	else
		return b;

}

int main() {
	for (int i = 0; i < 100; i++)
		result[i] = -1;
	string a, b;
	cin >> a >> b;
	int k=0;
	for (int i = 0; i <= b.length() - a.length(); i++) {
		int count = 0;
		for (int j = 0; a[j] != 0; j++) {
			if (b[j + i] != a[j])
				count++;
		}
		result[k++] = count;

	}

	int r_result=10000;
	for (int i = 0; result[i]!=-1; i++) {
		r_result=min(r_result, result[i]);
	}

	cout << r_result;
}