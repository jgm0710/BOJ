#include <iostream>
#include<stack>
#include<string>
using namespace std;
//주석

int main(){
	
	int n;
	cin >> n;
	int count = 0;
	while (n--) {
		stack<char> st;
		string a;
		cin >> a;

		for (int i = 0; a[i] != 0; i++) {
			if (st.empty() == 1) {
				st.push(a[i]);
			}
			else {
				if (st.top() == a[i]) {
					st.pop();
				}
				else {
					st.push(a[i]);
				}
			}
		}
		if (st.empty() == 1) {
			count++;
		}
	}
	cout << count;

}