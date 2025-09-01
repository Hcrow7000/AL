#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define INFINITY 10000000

template<typename T>
class Dijkastra
{
private:
	unordered_set<T> visited;
	unordered_map<T, vector<T>> distance;

public:
	void insert(int i, int j, int weight)
	{

	}

	void resize(int node)
	{
		int newSize = node + 1;
	}

};

int main()
{
#pragma region 다익스트라 알고리즘
	// 시작점으로부터 모든 노드까지의
	// 최소 거리를 구해주는 알고리즘이다.

	// 1. 거리배열에서 weight[시작 노드]의
	// 값을 초기화 합니다.

	// 2. 시작점을 방문 처리한다.

	// 3. 거리 배열에서 최소 비용 노드를 찾고
	// 방문처리합니다.

	// 4. 최소 비용 노드를 거쳐갈지 고민해서
	// 거리 배열을 갱신합니다. 
	// 단, 이미 방문한 노드는 제외합니다.

	// 5. 모든 노드를 방문할때까지 
	// 3번~4번을 반복합니다.

	// 방문하지 않은 노드중에서 가장 작은거리를
	// 가진 노드를 방문하고, 그 노드와 연결된
	// 다른 노드까지의 거리를 계산합니다.

	

#pragma endregion

	return 0;
}
