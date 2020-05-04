#include <iostream>
using namespace std;
#pragma warning(disable:4996)
//헤일스톤 수열
//속도 전은 무조건 cin,cout 쓰면 안됨

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main(){
	int t;
	cin >> t;
	int n;
	int max_n;
	int start_n;

	while (t--) {
		//cin >> n;
		scanf("%d", &n);
		max_n=n;

		start_n = n;


		while (true) {
			if (n == 1)
				break;

		//	cout << n << " ";

			if (n % 2 == 0)
				n /= 2;
			else {
				n = n * 3 + 1;
			}
			max_n = max(max_n, n);
		}
		//cout << max_n << "\n";
		//cout << endl;
		printf("%d\n", max_n);
	}
}