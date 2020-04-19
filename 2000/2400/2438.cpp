#include<iostream>
#pragma warning (disable:4996)
using namespace std;
// 주석
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <=i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}