#include<iostream>
#pragma warning (disable:4996)
using namespace std;
// 주석

int min(int a, int b) {
	if (a < b)
		return a;
	if (b < a)
		return b;
}

int main(){

	int a, b;
	
	int gcf = 1;	//최대공약수
	int lcm = 1;	//최소공배수

	cin >> a >> b;

	bool endflag = true;

	while (true) {
		endflag = true;

		for (int i = 2; i <= min(a, b); i++) {
			if (a % i == 0 && b % i == 0) {
				gcf *= i;
				a /= i;
				b /= i;
				endflag = false;
				break;
			}
		}

		if (endflag) {
			break;
		}
	}

	lcm = gcf * a * b;

	cout << gcf << endl;
	cout << lcm;
}