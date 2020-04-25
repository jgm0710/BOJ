#include <iostream>
#include <string>
using namespace std;
//문서 검색
//string 의 find 함수와
//getline함수를 이용해서 문제해결


int main(){
	string a, b;
	getline(cin,a);
	getline(cin,b);

	int count = 0;

	while (true) {
		if (a.find(b) == string::npos)
			break;

		int n = static_cast<int> (a.find(b));

		for (int i = n; i < n + b.length(); i++) {
			a[i] = 0;
		}
		count++;
	
	}
	cout << count;
}