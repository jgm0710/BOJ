#include <iostream>
using namespace std;
//1730 판화 김준섭 copy

int arr[100][100];

char prt[4] = { '.','|','-','+' };	//지나간 모양을 배열로 만듬

int n;	//판의 크기

bool avail(int i, int j) {
	if (i >= 0 && i < n && j >= 0 && j < n)	//판 내부에 있으면 true 아니면 false
		return true;
	return false;
}

void cut(int way, int i, int j) {// way 1:위아래 2:좌우
	if (arr[i][j] == 0) {	//점 모양이면
		arr[i][j] = way;	//바꿔줌
	}
	else if (arr[i][j] != way) {	//점이 아닐경우 현재들어오는 방향과 다르면 + 모양으로 세팅
		arr[i][j] = 3;
	}
}

int main(){

	string s;
	cin >> n;
	cin >> s;
	int nx = 0;
	int ny = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'D') {
			if (avail(ny + 1, nx)) {
				cut(1, ny, nx);
				ny++;
				cut(1, ny, nx);
			}
		}
		else if (s[i] == 'R') {
			if (avail(ny, nx+1)) {
				cut(2, ny, nx);
				nx++;
				cut(2, ny, nx);
			}
		}
		else if (s[i] == 'U') {
			if (avail(ny - 1, nx)) {
				cut(1, ny, nx);
				ny--;
				cut(1, ny, nx);
			}
		}
		else {	//L
			if (avail(ny, nx-1)) {
				cut(2, ny, nx);
				nx--;
				cut(2, ny, nx);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << prt[arr[i][j]];
		}
		cout << endl;
	}
}