#include <iostream>
using namespace std;


int main() {
	//최소 공배수 lcm
	//최대 공약수 Gcf
	int t;
	cin >> t;

	while (t--) {
		int a, b;
		int gcf = 0;
		int lcm=0;
		cin >> a >> b;
		

		

		for (int i = 1; i<1100; i++) {
			
			if (a % i == 0 && b % i == 0) {
				gcf = i;
				
			}
			
		}
		
		lcm = (a / gcf) * (b / gcf) * gcf;

		cout << lcm << " " << gcf<<endl;
	}
}