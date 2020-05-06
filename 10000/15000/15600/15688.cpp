#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)
//수 정렬하기 5

vector<int> v;
int main(){
	int n;
	cin >> n;

	int a;
	for (int i = 0; i < n; i++) {
		scanf("%d",&a);
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}
}