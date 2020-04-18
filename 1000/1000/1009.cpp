#include <iostream>
#include<cmath>
using namespace std;
//주석

int main(){
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;

		int tmp = 1;
		for (int i = 0; i < b; i++) {
			tmp *= a;
			tmp %= 10;
		}
		if(tmp!=0)
			cout << tmp << endl;
		else {
			cout << 10 << endl;
		}

		

	}
}