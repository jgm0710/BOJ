#include<iostream>
#include<string>
using namespace std;

int alp[26];
int main() {
	int t;
	cin >> t;
	int result=0;

	while (t--) {
		string a;
		cin >> a;

		for (int i = 0; a[i] != 0; i++) {
			if (a[i] != a[i + 1]) {
				alp[a[i] - 'a']++;
			}
		}
		bool t_result = true;

		for (int i = 0; i < 26; i++) {
			if (alp[i] > 1) {
				t_result = false;
			}
		}
		if (t_result) {
			result++;
		}
		for (int i = 0; i < 26; i++) {
			alp[i] = 0;
		}
	}
	cout << result;


}