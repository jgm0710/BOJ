#include<iostream>
#pragma warning (disable:4996)
using namespace std;
// 주석
int arr[101][101];	//사각 평면
int main(){
	
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int a, b, w, h;
		cin >> a >> b >> w >> h;

		for (int j = a; j < a + w; j++) {
			for (int k = b; k < b + h; k++) {
				arr[j][k] = i;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		int count=0;
		for (int j = 0; j < 101; j++) {
			for (int k = 0; k < 101; k++) {
				if (arr[j][k] == i)
					count++;
			}
		}
		cout << count << endl;
	}


}