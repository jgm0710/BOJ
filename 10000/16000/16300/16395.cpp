#include <iostream>
using namespace std;
//파스칼의 삼각형

int arr[30];
int tmp[30];
int main(){
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {		//줄

		for (int j = 0; j <= i; j++) {	//매 줄 마다 값을 넣어야함
			if (i == 0)		//첫줄이면
				tmp[j] = 1;
			else if (i == 1) {	//두번째 줄이면
				tmp[j] = 1;
			}
			else {	//3번째 줄 이상부터
				if (j == 0) {	//한줄의 처음은 1
					tmp[j] = 1;
				}
				else if (j > 0 && j < i) {
					tmp[j] = arr[j - 1] + arr[j];
				}
				else { //한줄의 마지막은 1
					tmp[j] = 1;
				}
			}

		}
		for (int j = 0; tmp[j] != 0; j++) {
			arr[j] = tmp[j];
			//cout << arr[j] << " ";
		}
		//cout << endl;
	}
	cout << arr[k - 1];


}