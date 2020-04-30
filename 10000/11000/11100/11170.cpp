#include <iostream>
using namespace std;
//0의 개수

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n, m;
		cin >> n >> m;

		int count = 0;

		for (int i = n; i <= m; i++) {
			int tmp = i;

			while (true) {
				if (tmp % 10 == 0)
					count++;
				tmp /= 10;
				if (tmp == 0)
					break;
			}
		}

		cout << count << endl;
	}
}