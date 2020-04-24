#include <iostream>
using namespace std;
//유니크

int participant[200][3];
int result[200];
int main(){
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			int a;
			cin >> a;

			participant[i][j] = a;
		}
	}

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < n; i++) {	//0번참가자부터 비교
			bool sum_flag = true;
			for (int k = 0; k < n; k++) {	//자기 자신빼고 비교
				if (i == k) {
					continue;
				}
				if (participant[i][j] == participant[k][j])
					sum_flag = false;
			}
			if(sum_flag)
				result[i] += participant[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		cout << result[i] << endl;
	}
}