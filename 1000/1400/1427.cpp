#include<iostream>
#include<algorithm>

#pragma warning (disable:4996)
using namespace std;
// 1427 소트인사이드

char arr[30];
int num[30];

bool compare(char a, char b) {
	return a > b;
}
int main(){

	cin >> arr;

	int i=0;

	while (arr[i] != 0) {
		i++;
	}

	sort(arr, arr+i,compare);

	cout << arr;
}