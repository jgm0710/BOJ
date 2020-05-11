#include <iostream>
#include <queue>
#include <vector>
using namespace std;
//연결 요소의 개수

vector<int> vertex[1100];
int check[1100];
queue<int> q;



int main(){
	int n, m;
	cin >> n >> m;
	int count = 0;
	while (m--) {
		int a, b;
		cin >> a >> b;
		check[a] = -1;
		check[b] = -1;

		vertex[a].push_back(b);
		vertex[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {	//정점을 다 검사
		if (!vertex[i].empty()&& check[i] == -1) {	//간선이 있다고 입력이 들어왔는데, 방문을 안한 수일때
			//bfs의 처음 시작이 될 수를 넣어주고, 요소가 1개 추가라는 의미로 count++
			q.push(i);
			check[i] = 1;
			count++;
		//	cout <<"add yuso : "<< i << endl;
			while (!q.empty()) {	//q가 빌때까지 돌아감.
				int here = q.front();	//현제 정점 -> 간선으로 연결된 부분을 다 검사하려고함.
				q.pop();
			//	cout <<"here : " <<here << endl;

			//	cout << "there : ";
				for (int j = 0; j < vertex[here].size(); j++) {	//현제 정점에서 연결된 간선의 수만큼
					int there = vertex[here][j];	//현재 정점과 연결된 정점.

					if (check[there] == -1) {	//방문한적이 없으면
						check[there] = 1;	//현재 정점->간선으로 이어진 정점 방문
						q.push(there);	//현재 정점에서 이어진 정점으로가서 또 간선으로 이어진 부분을 검사하기 위해
					//	cout << there << " ";
					}
				}
				//cout << endl;
			}
		}
		else {	//방문한 정점이면 건너뜀
			continue;
		}
	}

	cout << count;
	
}