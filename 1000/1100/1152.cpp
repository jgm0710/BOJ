#include <iostream>
#include <string>
using namespace std;
//단어의 개수


int main(){
	string a;
	int count = 1;
	getline(cin, a);

	if (a.length() == 0)	//길이가 0 이면 단어가 없는것
		count = 0;

	bool word_flag = true;	//공백만 있을경우 단어 count를 안함
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != ' ')
			word_flag = false;

		if (i==0)
			if(a[i]==' ')
				continue;
		if (i == a.length() - 1)
			if (a[i] == ' ')
				break;
		if (a[i] == ' ')
			count++;
	}
	if (word_flag)
		count = 0;

	cout << count;
}