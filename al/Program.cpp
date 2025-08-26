#include <iostream>
#include <vector>

using namespace std;

class Graph
{
private:
	// 1. 방문 확인
	vector<bool> visited;
	// 2. 인접 리스트
	vector<vector<char>> adjacencyList;

public:
	Graph(int size)
	{
		adjacencyList.resize(abs(size));
	}

	void insert(int i, int j)
	{
		adjacencyList[i].push_back(j);
		adjacencyList[j].push_back(i);

	}

};

int main()
{
#pragma region 깊이 우선 탐색
	// 그래프에서 한 방향으로 갈 수 있을만큼
	// 깊이 들어갔다간, 더 이상 갈 수 없으며
	// 다시 돌아와서 다른 경로를 탐색하는 방법입니다.

	Graph graph(100);

	graph.insert('A', 'B');
	graph.insert('A', 'C');

	graph.insert('B', 'D');
	graph.insert('B', 'E');

	graph.insert('C', 'F');
	graph.insert('F', 'G');



#pragma endregion

	return 0;
}
