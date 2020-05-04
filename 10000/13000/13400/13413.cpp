#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//오셀로 재배치



int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;	//단어 길이
		int count=0;	//바꾼 횟수
		int color_a[2] = { 0,0 };	//W,B 갯수 저장
		int color_b[2] = { 0,0 };
		int dif = 0;	//같은 색 돌 수 차이를 저장
		
		cin >> n;

		string a, b;
		cin >> a >> b;

		//cout << endl;

		for (int i = 0; i < n; i++) {	//a,b의 W,B 갯수 저장
			if (a[i] == 'W')
				color_a[0]++;
			else if (a[i] == 'B')
				color_a[1]++;

			if (b[i] == 'W')
				color_b[0]++;
			else if (b[i] == 'B')
				color_b[1]++;

		}
		cout << color_a[0] << " " << color_a[1] << " " << color_b[0]<<" "<<color_b[1]  <<endl;

		dif = abs(color_a[0] - color_b[0]);

		for (int i = 0; i < n; i++) {	//같은 색 돌의 갯수 맞춰줌
			if (a[i] != b[i]) {
				b[i] = a[i];
				count++;
				dif--;
			}
			if (dif == 0)
				break;
		}

		/*cout << a << " " << b << endl;
		cout << count << endl;*/

		//위치 바꿔주기

		for (int i = 0; i < n; i++) {
			if (a[i] == b[i]) {
				continue;
			}
			else {	//a[i]!=b[i]
				//cout << a[i] << " " << b[i] << endl;
				for (int j = i+1; j < n; j++) {
					if (a[j] == b[j]) {
						continue;
					}
					else {	//a[j]!=b[j]
						//두 지점의 돌을 바꿔줌
						/*cout << "dif" << endl;*/
						int tmp = b[i];
						b[i] = b[j];
						b[j] = tmp;
						count++;
						break;
					}
				}
			}
		}

	//cout << a << " " << b << endl;
	cout << count<< endl;


	}
}