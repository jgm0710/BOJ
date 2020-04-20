#include <iostream>
#include <string>
using namespace std;
//단어 나누기

char min(char a, char b) {
	if (a < b)
		return a;
	else
		return b;
}
int main(){

	string a;

	cin >> a;

	char tmp = 'z';
	for (int i = 0; a[i] != 0; i++) {
		tmp = min(tmp, a[i]);
	}
	cout << tmp;

}