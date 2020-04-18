#include<iostream>
#include<string>
#include<algorithm>
#pragma warning (disable:4996)
using namespace std;
// 단어 뒤집기
int main(){
	int t;
	cin >> t;
	string a;
	getline(cin, a);
	while (t--) {
		getline(cin,a);

		
		int i = 0;
		while (a.length() > i) {
			string b;
			while (true) {
				if (a[i] == ' '||a[i]==0) {
					i++;
					break;
				}
				b += a[i++];
			}
			reverse(b.begin(), b.end());

			cout<<b<< " ";
		}
		cout << endl;
	}
}