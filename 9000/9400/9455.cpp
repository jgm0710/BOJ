#include <iostream>
using namespace std;
//박스

int grid[1000][1000];
int main(){
	int t;

	cin >> t;
	

	while (t--) {
		int m, n; //m행 n열

		cin >> m >> n;

		int count = 0;

		for (int i = m-1; i >=0; i--) {
			for (int j = n-1; j >=0 ; j--) {
				cin >> grid[i][j];
			}
		}
		//cout << endl;

		for (int j = 0; j < n; j++) {
			for (int i = 0; i < m; i++) {
				if (grid[i][j] == 1) {
					continue;
				}
				else if (grid[i][j] == 0) {
					int tmp = 0;
					for (int k = 0; k < n; k++) {
						if (grid[i + tmp][j] == 1) {
							grid[i][j] = 1;
							grid[i + tmp][j] = 0;
							count += tmp;
							break;
						}
						else if (grid[i + tmp][j] == 0) {
							tmp++;
						}
					}
				}
			}
		}
		/*cout << endl;

		for (int i = m - 1; i >= 0; i--) {
			for (int j = n - 1; j >= 0; j--) {
				cout<< grid[i][j]<<" ";
			}
			cout << endl;
		}
		cout << endl;*/

		cout << count << endl;

		/*for (int i = 0; i < 110; i++) {
			for (int j = 0; j < 110; j++) {
				grid[i][i] = 0;
			}
		}*/
	}

}