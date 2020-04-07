#include<iostream>
#include<string>
using namespace std;

int alp[26];

int main() {
	int t;
	cin >> t;
	
	string a;
	for (int i = 0; i < t; i++) {
		cin >> a;

		alp[a[0] - 'a']++;
	}

	bool t_result = true;
	for (int i = 0; i < 26; i++) {
		if (alp[i] >= 5) {
			cout << (char)(i + 'a');
			t_result = false;
		}
	}

	if (t_result) {
		cout << "PREDAJA";
	}
}