#include <iostream>
#include <string>
using namespace std;
//오셀로 재배치
//a[i]==b[i]이면 무시해도 무방함
//a[i]!=b[i] 일때, w의 갯수, b의 갯수가 같은 갯수만큼 위치바꾸기 작업
//a[i]!=b[i] 일때, 위치바꾸기가 할 수 없으면, 서로의 차이만큼 뒤집기 작업을 함.
//방정식으로 세우면 a=4, b=2 이면
//2 개 만큼 위치를 바꾸고, 두개의 차이인 2만큼 뒤집기 작업을 하게됨.
//==b+(a-b)만큼의 작업을 하게됨. 
//즉 총 작업 수는 a+b-b=a 해서 더 큰 수만큼이 총 작업수가 됨.



int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int count_w=0, count_b=0;

		string a, b;
		cin >> a >> b;

		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				if (a[i] == 'B')
					count_b++;
				else if (a[i] == 'W')
					count_w++;
			}
		}

		if (count_w > count_b)
			cout << count_w << endl;
		else
			cout << count_b << endl;
	}
}