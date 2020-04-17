#include <iostream>
using namespace std;
//주석

char arr[1000];

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {

		//엔터까지 문자열 입력받고 마지막에 -1 넣어줌
		int cnt = 0;
		while (true) {
			char ch;
			cin.get(ch);
			if (ch == '\n')
				break;
			arr[cnt++] = ch;
		}
		arr[cnt] = 'A';

		//cin.getline(arr, 1000);

		int i = 0;
		while (true) {
			if (arr[i] == 'A') {
				//cout << "i= " << i << endl;
				break;
			}
			while (true) {
				if (arr[i] == ' ' || arr[i] == 'A') {
					//	cout << "i= " << i << endl;
					cout << "여기" << endl;
					break;
				}
				cout << "a";
				i++;
				//cout << arr[i++];
			}
			cout << " ";
			i++;
			//cout << i;
		}
		cout << endl;

		for (int i = 0; i < 1000; i++) {
			arr[i] = 0;
		}



	}

}