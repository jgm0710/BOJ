#include <iostream>
#include<algorithm>
#include<utility>
using namespace std;
//11650 좌표 정렬하기


pair<int, int> p[100001];


int main(){
	int n;
	cin >> n;

	int a, b;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;

		p[i] = make_pair(a,b);
	}

	sort(p, p+n-1);

	for (int i = 0; i < n; i++) {
		cout << (p+i)->first << " " << (p+i)->second << endl;
	}
}