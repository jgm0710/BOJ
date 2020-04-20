#include <iostream>
using namespace std;
//주석

int main(){
	int a, b;
	int n;
	cin >> a >> b >> n;
	int r=0;
	int q=0;
	r = a % b;
	
	while (n--) {
		r = r * 10;
		q = r / b;
		r = r % b;
	}
	cout << q << endl;
}