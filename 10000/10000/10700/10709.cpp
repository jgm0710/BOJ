#include <iostream>
using namespace std;

char city[101][101];
int result[101][101];

int main() {
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			result[i][j] = -1;
		}
	}
	int h, w; //도시의 크기
	cin >> h >> w;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			char a;
			cin >> a;
			city[i][j] = a;
			if (a == 'c')
				result[i][j] = 0;
		}
	}
	for (int i = 0; i < h; i++) {
		int count = 0;
		bool count_flag = false;
		for (int j = 0; j < w; j++) {
			if (result[i][j] == 0) {
				count = 0;
				count_flag = true;
			}
			if (count_flag) {
				result[i][j] = count++;
			}
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}




}