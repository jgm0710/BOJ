#include <iostream>
using namespace std;
//박스

int grid[110][110];
int main(){
	int t;
	cin >> t;

	while (t--) {
		int m, n;	//m행 n열
		int count = 0;	//이동 거리
		cin >> m >> n;

		for (int i = m - 1; i >= 0; i--) {
			for (int j = n - 1; j >= 0; j--) {
				cin >> grid[i][j];
			}
		}

		for (int j = 0; j < n; j++) {
			int now_i = 0;
			for (int i = 0; i < m; i++) {
				if (grid[i][j] == 1) {
					count += i - now_i;
					now_i++;
				}
			}

		}
		
		cout << count<<endl;
		


	}
}