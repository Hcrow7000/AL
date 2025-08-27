#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

template<typename T>
class Graph
{
private:
	// 1. 방문 확인
	unordered_set<T> visited;

	// 2. 인접 리스트
	unordered_map<T, vector<T>> adjacencyList;

public:

	void insert(const T& i, const T& j)
	{
		adjacencyList[i].push_back(j);
		adjacencyList[j].push_back(i);

	}

	void search(const T& start)
	{
		if (visited.count(start))
		{
			return;
		}

		visited.insert(start);

		cout << start << " ";

		for (const T& element : adjacencyList[start])
		{
			if (visited.count(element) == false)
			{
				search(element);
			}
		}
	}


};

int main()
{
#pragma region 깊이 우선 탐색
	// 그래프에서 한 방향으로 갈 수 있을만큼
	// 깊이 들어갔다간, 더 이상 갈 수 없으며
	// 다시 돌아와서 다른 경로를 탐색하는 방법입니다.

	Graph<char> graph;

	graph.insert('A', 'B');
	graph.insert('A', 'C');

	graph.insert('B', 'D');
	graph.insert('B', 'E');

	graph.insert('C', 'F');
	graph.insert('F', 'G');

	graph.search('A');

#pragma endregion

	return 0;
}
