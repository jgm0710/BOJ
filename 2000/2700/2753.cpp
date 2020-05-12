#include <iostream>
using namespace std;
//윤년

int main(){
	int n;
	cin >> n;

	bool leap = false;
	
	if (n % 100 == 0) {
		if (n % 400 == 0)
			leap = true;
		else
			leap = false;
	}
	else {
		if (n % 4 == 0)
			leap = true;
		else
			leap = false;
	}

	if (leap)
		cout << 1;
	else
		cout << 0;
}