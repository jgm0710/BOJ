#include <iostream>
#include <cstdlib>
using namespace std;
//숫자의 합

int main(){
	int n;
	cin >> n;

	string a;
	cin >> a;

	int sum=0;
	for (int i = 0; i < n; i++) {
		//char b = a[i];
		sum += a[i] - '0';
		//sum += atoi(&b);
	}
	cout << sum;


}