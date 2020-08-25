#include<iostream>
#pragma warning (disable:4996)
using namespace std;
// 2941 크로아티아 문자

char arr[101];


int main(){
	
	int count = 0;

	cin >> arr;

	for (int i = 0; arr[i] != 0; i++) {
		if (arr[i] == 'c') {
			if (arr[i + 1] == '=') {
				count++;
				i++;

			}
			else if (arr[i + 1] == '-') {
				count++;
				i++;
			}
			else
				count++;
		}
		else if (arr[i] == 'd') {
			if (arr[i + 1] == 'z') {
				if (arr[i + 2] == '=') {
					count++;
					i += 2;
				}
				else
					count++;
			}
			else if (arr[i + 1] == '-') {
				count++;
				i++;

			}
			else
				count++;
		}
		else if (arr[i] == 'l') {
			if (arr[i + 1] == 'j') {
				count++;
				i++;
			}
			else
				count++;
		}
		else if (arr[i] == 'n') {
			if (arr[i + 1] == 'j') {
				count++;
				i++;
			}
			else
				count++;
		}
		else if (arr[i] == 's') {
			if (arr[i + 1] == '=') {
				count++;
				i++;
			}
			else
				count++;
		}
		else if (arr[i] == 'z') {
			if (arr[i + 1] == '=') {
				count++;
				i++;
			}
			else
				count++;
		}
		else
			count++;
	}

	cout << count;
}