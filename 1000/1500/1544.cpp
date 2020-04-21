#include <iostream>
#include<string>
using namespace std;
//사이클 단어
//거의 다왔는데 너무 오래 붙잡고 있어서 일단 포기

//단어를 돌리기 위한 함수
string turnWord(int n, string a) {
	string tmp;
	for (int i = 0; i < a.length(); i++) {
		if (a[n] == 0) {
			n = 0;
		}
		tmp += a[n];
		n++;
	}
	return tmp;
}

//같은 문자인지를 비교하는 함수
bool stringEquals(string a, string b) {
	if (a == b)
		return true;
	return false;
}

string word[50];
int main(){
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {	//n번 단어를 입력 받음 
		string a;
		cin >> a;

		if (i == 0) {
			word[i] = a;
			continue;
		}

		for (int j = 0; j < i; j++) {	//새로 들어오는 a와 기존 word내의 내용을 비교
			bool cnt_flag = false;
			for (int k = 0; k < a.length(); k++) {
				cnt_flag = stringEquals(turnWord(k, word[j]), a);
				if (cnt_flag) {
					cout <<"출력 : "<< turnWord(k, word[j]) << " " << a << endl;
					break;
				}
			}
			if (!cnt_flag)
				count++;
		}
	}
	cout << count;
}