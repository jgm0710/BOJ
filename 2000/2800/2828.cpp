#include<iostream>
#pragma warning (disable:4996)
using namespace std;

int main() {
	int screen[20];
	int basket[20];
	for (int i = 0; i < 20; i++) {
		screen[i] = -1;
		basket[i] = -1;
	}
	int n, m; //스크린 길이 , 바구니 크기		1-10
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		screen[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		basket[i] = 1;
	}

	int j; //떨어지는 사과 개수		1-20
	cin >> j;
	int b_spot = 0;	//최종 바구니 위치 저장
	int move = 0;
	while (j--) {
		int spot;
		cin >> spot;
		screen[spot - 1] = 1; //떨어진 위치를 1로 초기화
		//바구니 위치와 떨어진 지점의 위치를 비교
		bool endflag = false;
		if (spot - 1 > b_spot + (m - 1)) {//현재 바구니 위치보다 뒤로 떨어질 때
			for (int i = b_spot; i < n - m - b_spot; i++) {	//바구니 위치 이동
				move++;
				for (int j = 0; j < m; j++) {	//바구니 내부와 스크린 내부를 비교
					if (screen[j + i] == basket[i]) {
						screen[j + i] = 0;
						b_spot = i;
						endflag = true;
						break;
					}
				}
				if (endflag)
					break;
			}
		}
		else if (spot - 1 < b_spot) {// 현재 바구니 위치보다 앞으로 떨어질 때
			for (int i = 0; i < n - m; i++) {
				for (int j = 0; j < m; j++) {
					if ()
				}
			}
		}
		else {	//바구니 위로 떨어질 때

		}
	}

}