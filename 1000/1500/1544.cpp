#include <iostream>
#include<string>
using namespace std;
//사이클 단어
//a.find("tmp") == string::npos 를 사용해서 이긴다


string word[100];
int main(){
	int n;
	cin >> n;

	int count=0;

	int i = 0;
	while (n--) {
		string a;
		cin >> a;

		bool add_flag = true;

		for (int j = 0; word[j][0] != 0; j++) {
			string tmp;
			tmp = word[j];
			tmp += word[j];

			if (tmp.find(a) != string::npos) {		//word에 a가 포함되어있으면
				add_flag = false;
				break;
			}
		}
		if (add_flag) {
			word[i++] = a;
			count++;
		}
	}

	/*for (i = 0; word[i][0] != 0; i++) {
		cout << word[i] << endl;
	}*/
	cout << count;
}