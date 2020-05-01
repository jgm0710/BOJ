#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//비슷한 단어

string st[105];

int main(){
	int n;
	int count = 0;
	string a,b;
	cin >> n;



	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cin >> a;
			continue;
		}
		cin >> b;

		//사전 순으로 정렬해서 문자 비교
		//같은 문자로만 이루어진 단어인지를 알기 위해
		string t_a = a;
		string t_b = b;
		sort(t_a.begin(), t_a.end());
		sort(t_b.begin(), t_b.end());

		if (t_a == t_b) {
			count++;
			cout << t_a << " " << t_b<<" "<<count << endl;
			continue;
		}

		//a 에서 문자를 하나 빼서 b와 비교
		string tmp; //a에서 문자를 하나 빼서 담을 string
		bool continue_flag = false;
		for (int i = 0; i < a.length(); i++) {
			for (int j = 0; j < a.length(); j++) {
				if (i == j)
					continue;
				tmp += a[i];
			}
			cout << tmp << " " << b << endl;
			if (tmp == b) {
				count++;
				continue_flag = true;
			}
		}
		if (continue_flag)
			continue;

		//b 에서 문자를 하나 빼서 a와 비교
		tmp="";
		continue_flag = false;
		for (int i = 0; i < b.length(); i++) {
			for (int j = 0; j < b.length(); j++) {
				if (i == j)
					continue;
				tmp += b[i];
			}
			if (tmp == a) {
				count++;
				continue_flag = true;
			}
		}
		if (continue_flag)
			continue;
	}

	cout << count;

}