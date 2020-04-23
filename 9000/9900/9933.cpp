#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
//민균이의 비밀번호

string arr[109];
int main(){
	int n;
	cin >> n;

	int result_length = 0;
	char result_ch=0;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;

		arr[i] = a;
		for (int j = 0; j <= i; j++) {
			reverse(arr[j].begin(), arr[j].end());
			bool end_flag = false;
			if (arr[j] == a) {
				result_length = a.length();
				result_ch = a[a.length() / 2];
				end_flag = true;
			}
			reverse(arr[j].begin(), arr[j].end());
			if (end_flag)
				break;
		}
		
	}

	cout << result_length << " " << result_ch;
}