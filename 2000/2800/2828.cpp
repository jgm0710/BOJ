#include<iostream>
#pragma warning (disable:4996)
using namespace std;


int main() {
	int n, m, j;	//스크린 크기 , 바구니 크기, 떨어지는 사과 개수
	cin >> n >> m >> j;
	int s_bsk;	//바구니 시작점
	int e_bsk;	//바구나 끝점
	int count = 0;	//바구니가 움직인 횟수
	

	s_bsk = 0;	
	e_bsk = s_bsk + m - 1;	

	for (int i = 0; i < j; i++) {
		int a;	
		cin >> a;
		int apple_s = a - 1; //사과가 떨어지는 위치

		if (apple_s > e_bsk) {	//바구니 앞으로 떨어질 때
			for (int j = 0; j < apple_s - e_bsk; j++) {
				count++;
			}
			e_bsk = apple_s;
			s_bsk = e_bsk - m + 1;
		}
		else if (apple_s < s_bsk) {	//바구니 뒤로 똘어질 때
			for (int j = 0; j < s_bsk - apple_s; j++) {
				count++;
			}
			s_bsk = apple_s;
			e_bsk = s_bsk + m - 1;
		}
		
	}
	cout << count << endl;


}