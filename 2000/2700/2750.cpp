#include <iostream>
#include<algorithm>
using namespace std;
//2750 수 정렬하기

int arr[1001];

int main(){

	int n;
	cin >> n;

	

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		cout << arr[i]<<endl;
}