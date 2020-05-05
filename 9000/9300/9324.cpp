#include <iostream>
#include <string>
using namespace std;
//진짜 메세지
//3개의 같은 문자가 나오면 한개가 더있어야 ok, 아니면 fake

int alphabet[26];

int main(){
	int t;
	cin >> t;


	while (t--) {
		string a;
		cin >> a;

		bool fake_flag=false;
		bool continue_flag = false;
		for (int i = 0; i < a.length(); i++) {
			if (i == a.length() - 1) {
				alphabet[a[i] - 'A']++;
				if (alphabet[a[i] - 'A'] == 3)
					fake_flag=true;
			}
			else {
				if (continue_flag) {
					continue_flag = false;
					continue;
				}
				alphabet[a[i] - 'A']++;

				if (alphabet[a[i] - 'A'] == 3) {
					if (a[i] == a[i + 1]) {
						alphabet[a[i] - 'A'] = 0;
						continue_flag = true;
					}
					else {
						fake_flag = true;
						break;
					}
				}
			}
		}

		if (fake_flag)
			cout << "FAKE" << endl;
		else
			cout << "OK" << endl;

		for (int i = 0; i < 26; i++)
			alphabet[i] = 0;

	}
}