#include <iostream>
#include<string>
using namespace std;
//주석

string st_arr[1000];	//입력한 문자가 다
int cnt[1000];	//단어가 몇번 나왔는지를 알려주기 위한 배열 
string dic_sort_st[1000];//사전순으로 정렬하기 위한 문자열의 배열
int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;

		bool cnt_flag = true;
		if (i == 0) {
			st_arr[0] = a;
			cnt[0]++;
		}
		else {
			for (int j = 0; st_arr[j][0] != 0; j++) {	//st_arr가 비어있을때 까지 비교
				if (st_arr[j] == a) { //배열내에 a가 있으면 
					cnt[j]++;
					cnt_flag = false;
					break;
				}
			}
			if (cnt_flag) {	//배열 내에 a 가 없으면 a 추가
				st_arr[i] = a;
			}
		}
		
	}
	for (int i = 0;i<4; i++) {
		cout << st_arr[i] <<"  ff"<< endl;
	}

	int tmp = 0;
	for (int i = 0; cnt[i] != 0; i++) {	//가장 큰 cnt 값을 저장
		tmp = max(tmp, cnt[i]);
	}
	int k = 0;
	for (int i = 0; cnt[i] != 0; i++) {//가장 높은 cnt값을 가진 문자열의 위치를 저장
		if (tmp == cnt[i]) {
		//	cout << 22;
			dic_sort_st[k++] = st_arr[i];
		}
	}
	
	for (int i = 0; dic_sort_st[i][0] != 0; i++) {
		//cout << dic_sort_st[i] << endl;
	}
	


}