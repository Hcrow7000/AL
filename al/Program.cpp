#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

template<typename T>
class Graph
{
private:
	unordered_map<T, vector<T>> adjacencyList;
public:

	void insert(const T& i,const T& j)
	{
		adjacencyList[i].push_back(j);
		adjacencyList[j].push_back(i);

	}

};


int main()
{
#pragma region 너비 우선 탐색
	// 시작 정점으로부터 가까운 정점을 먼저방문
	// 그후 멀리 떨어져 있는 정점을 우선적으로
	// 방문하는 탐색입니다.

	Graph<char> graph;

	graph.insert('A', 'B');
	graph.insert('A', 'C');

	graph.insert('B', 'D');
	graph.insert('B', 'E');

	graph.insert('C', 'F');
	graph.insert('C', 'G');

#pragma endregion

	return 0;
}
