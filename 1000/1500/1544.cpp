#include <iostream>
#include<string>
using namespace std;
//사이클 단어

int main(){
	int n; //단어의 개수, 50보다 작음
	int count = 0;	//서로 다른 단어의 개수
	cin >> n;

	int i=0;
	string tmp;
	while (n--) {
		string a;
		cin >> a;
		if (i == 0) {
			tmp = a;
			tmp += a;
			i++;
			count++;
			continue;
		}

		bool change_flag = true;

		if (a.length() == tmp.length() / 2) {
			for (int j = 0; j < a.length(); j++) {
				string tmp2;

				int start = j;
				int end = j + a.length();

				for (int k = start; k < end; k++) {
					tmp2 += tmp[k];
				}
				if (tmp2 == a) {
					/*cout << endl;
					cout << tmp2 << " " << a << endl;
					cout << endl;*/
					change_flag = false;
					break;
				}
			}
		}

		if (change_flag) {
			tmp = a;
			tmp += a;
			count++;
		}
	}
	cout << count;
}