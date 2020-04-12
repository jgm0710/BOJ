#include<iostream>
#pragma warning (disable:4996)
using namespace std;
// 주석
int arr[200];
int main(){
	int n;
	cin >> n;
	int count=0;
	while (n--) {
		int a;
		cin >> a;
		if (arr[a - 1] == 0) {
			arr[a - 1] = 1;
		}
		else {
			count++;
		}
	}
	cout << count;
}