#include <iostream>
#include<string>
using namespace std;
//로봇
//Move 0 : 왼쪽 turn , 1 : 오른쪽  turn
//밖으로 나가면 -1 반환

string command[1000];
int command_num[1000];

int state[][2] = { {0,1},{1,0},{0,-1},{-1,0} };	//북동남서

int location[] = { 0,0 };

bool outSideDomain(int m, int nowState) {
	location[0] += state[nowState][0];
	location[1] += state[nowState][1];

	if (location[0]<0 || location[0]>m || location[1]<0 || location[1]>m)
		return true;

	return false;
}



int main(){
	int m; //한변의 길이 1~1000
	int n; // 명령어 개수 1~1000

	int nowState = 1; //처음에는 동을 바라보고 있음


	cin >> m >> n;

	for (int i = 0; i < 1000; i++)
		command_num[i] = -1;

	for (int i = 0; i < n; i++) {
		cin >> command[i] >> command_num[i];
	}

	for (int i = 0; i < n; i++) {
		if (command[i] == "MOVE") {
			for (int j = 0; j < command_num[i]; j++) {	//command_num 만큼 움직임
				if (outSideDomain(m, nowState)) {
					cout << -1;
					return 0;
				}
			}
		}
		else if (command[i] == "TURN") {
			if (command_num[i] == 0) {	//왼쪽 턴
				nowState--;
				if (nowState < 0) {
					nowState = 3;
				}
			}
			else {	//오른쪽 턴
				nowState++;
				if (nowState > 3) {
					nowState = 0;
				}
			}
		}
	}

	cout << location[0] << " " << location[1];


}