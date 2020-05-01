#include <iostream>
using namespace std;
//주몽

int  material[15001];

int main(){
	int n; // 재료의 개수
	int m; //재료 2개를 합쳐서 m이 되면 갑옷 완성

	cin >> n>>m;

	int count = 0; 

	for (int i = 0; i < n; i++) {
		cin >> material[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == i)
				continue;

			if (material[i] + material[j] == m) {
				//cout << material[i] << " " << material[j] << " " << m << endl;
				count++;
			}
		}
	}

	cout << count/2;
}