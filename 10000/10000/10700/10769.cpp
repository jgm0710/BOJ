#include <iostream>
#include <string>
using namespace std;
//행복한지 슬픈지

int main(){
	string a;
	int happy = 0;
	int sad = 0;
	getline(cin, a);

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == ':') {
			if (i + 1 >= a.length() || i + 2 >= a.length()) {
				
				break;
			}

			if (a[i + 1] == '-' && a[i + 2] == ')') {
				happy++;
			}
			else if (a[i + 1] == '-' && a[i + 2] == '(') {
				sad++;
			}
		}
	}

	if (happy == 0 && sad == 0) {
		cout << "none";
		return 0;
	}

	if (happy > sad)
		cout << "happy";
	else if (happy < sad)
		cout << "sad";
	else
		cout << "unsure";
	

}