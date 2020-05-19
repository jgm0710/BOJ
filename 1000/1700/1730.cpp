#include <iostream>
#include <string>
using namespace std;
//판화 

bool checkInside(int x, int y, int n) {

	if (x<0 || x>=n || y<0 || y>=n) {
		return false;
	}

	return true;
}

int grid[][2] = { {-1,0},{0,1},{1,0},{0,-1} };	//북,동,남,서

int now_spot[] = { 0,0 };

char plate[200][200];

void draw(int a, int b, char move) {

	if (plate[a][b] == '.') {
		//cout << move<<endl;
		if (move == 'D' || move == 'U') {
			plate[a][b] = '|';
		}
		else if (move == 'R' || move == 'L') {
			plate[a][b] = '-';
		}
	}
	else if (plate[a][b] == '|') {
		if (move == 'R' || move == 'L') {
			plate[a][b] = '+';
		}
	}
	else if (plate[a][b] == '-') {
		if (move == 'D' || move == 'U') {
			plate[a][b] = '+';
		}
	}
}

int main(){

	int n; //판화 크기
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			plate[i][j] = '.';

	string move;
	cin >> move;

	

	for (int i = 0; i < move.length(); i++) {

		if (move[i] == 'U') {
	
			if (checkInside(now_spot[0] + grid[0][0], now_spot[1] + grid[0][1], n)) {
				
				draw(now_spot[0], now_spot[1], move[i]);

				now_spot[0] += grid[0][0];
				now_spot[1] += grid[0][1];

				draw(now_spot[0], now_spot[1], move[i]);
			}
			else {
				continue;
			}

		}
		else if (move[i] == 'D') {
			
			if (checkInside(now_spot[0] + grid[2][0], now_spot[1] + grid[2][1], n)) {
				
				draw(now_spot[0], now_spot[1], move[i]);
				
				now_spot[0] += grid[2][0];
				now_spot[1] += grid[2][1];

				draw(now_spot[0], now_spot[1], move[i]);
			}
			else {
				continue;
			}
		}
		else if (move[i] == 'R') {
	
			if (checkInside(now_spot[0] + grid[1][0], now_spot[1] + grid[1][1], n)) {
				
				draw(now_spot[0], now_spot[1], move[i]);

				now_spot[0] += grid[1][0];
				now_spot[1] += grid[1][1];

				draw(now_spot[0], now_spot[1], move[i]);
			}
			else {
				continue;
			}

		}
		else if (move[i] == 'L') {
		
			if (checkInside(now_spot[0] + grid[3][0], now_spot[1] + grid[3][1], n)) {
				
				draw(now_spot[0], now_spot[1], move[i]);

				now_spot[0] += grid[3][0];
				now_spot[1] += grid[3][1];

				draw(now_spot[0], now_spot[1], move[i]);
			}
			else {
				continue;
			}

		}
		else {
			return 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << plate[i][j];
		}
		cout << endl;
	}

}