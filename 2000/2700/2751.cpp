#include <iostream>
using namespace std;
//주석

int arr[1000000];
int sorted[1000000];

void merge(int a[], int m, int middle, int n) {
	int i = m;
	int j = middle + 1;
	int k = m;
	//작은 순서대로 배열에 삽입
	while (i <= middle && j <= n) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	// 남은 수들 다 넣어줌
	if (i > middle) {
		for (int t = j; t <= n; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}

	//정렬된 배열 삽입
	for (int t = m; t <= n; t++) {
		a[t] = sorted[t];
	}

}

void mergeSort(int a[], int m, int n) {	//재귀함수를 사용
	//크기가 1보다 큰 경우
	if (m < n) {
		int middle = (m + n) / 2;
		//배열을 일단 반으로 나눔
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		//나중에 합치면서 정렬
		merge(a, m, middle, n);
	}
}
int main() {
	int n;
	int a;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[i] = a;
	}
	/*int array[num] = { 7,6,5,8,3,5,9,1 };*/
	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
}