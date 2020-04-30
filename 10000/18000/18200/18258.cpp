#include <iostream>
#include <queue>
#include <string>
#pragma warning(disable:4996)
using namespace std;
//큐2
queue<int> q;
int main(){
	int n; //명령어 개수
	cin >> n;

	while (n--) {
		char st[10];
		scanf("%s", st);

		if (st[0] == 'p' && st[1]=='u') {
			int a;
			scanf("%d", &a);
			q.push(a);
		}
		else if (st[0] == 'p' && st[1]=='o') {
			if (q.empty() == 0) {
				//cout<<q.front()<<"\n";
				printf("%d\n", q.front());
				q.pop();
			}
			else {
				//cout << -1 << "\n";
				printf("%d\n", -1);
			}
		}
		else if (st[0] == 's' && st[1]=='i') {
			//cout << q.size() << "\n";
			printf("%d\n", q.size());
		}
		else if (st[0] == 'e' &&st[1]=='m') {
			//cout << q.empty() << "\n";
			printf("%d\n", q.empty());

		}
		else if (st[0] == 'f' &&st[1]=='r') {
			if (q.empty() == 0) {
				//cout << q.front()<< "\n";
				printf("%d\n", q.front());
			}
			else {
				//cout << -1 << "\n";
				printf("%d\n", -1);
			}
		}
		else if (st[0] == 'b'&&st[1]=='a') {
			if (q.empty() == 0) {
				//cout << q.back() << "\n";
				printf("%d\n", q.back());
			}
			else {
				//cout << -1 << "\n";
				printf("%d\n", -1);
			}
		}

	}
}