#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
//비슷한 단어

int a_alphabet[26];
int b_alphabet[26];

int main(){
	int n;
	cin >> n;
	string a,b;

	int count = 0;

	for (int i = 0; i < n; i++) {
		int difference = 0;

		if (i == 0) {
			cin >> a;
			for (int j = 0; j < a.length(); j++) {
				a_alphabet[a[j] - 'A']++;
			}
			continue;
		}

		cin >> b;
		for (int j = 0; j < b.length(); j++) {
			b_alphabet[b[j] - 'A']++;
		}

		for (int j = 0; j < 26; j++) {
			difference += abs(a_alphabet[j] - b_alphabet[j]);
		}

		if (difference < 2) {
			count++;
		}
		else if (difference == 2) {
			if (a.length() == b.length()) {
				count++;
			}
		}
		for (int i = 0; i < 26; i++) {
			b_alphabet[i] = 0;
		}
	}
	cout << count;

}