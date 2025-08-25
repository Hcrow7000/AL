#include <iostream>

using namespace std;

int fibonacci(int n, int list[])
{
	if (n <= 0)
	{
		return 0;
	}
	else if (n <= 2)
	{
		return 1;
	}

	if (list[n] != 0)
	{
		return list[n];
	}

	return list[n] = fibonacci(n - 1,list) 
		+ fibonacci(n - 2,list);

}

int main()
{
#pragma region ���� ��ȹ��
	// Ư�� ���������� ���� ���ϱ� ����
	// �װͰ� �ٸ� ���������� ���� �̿���
	// ȿ�������� ���� ���ϴ� �˰����̴�.

	// ��ġ�� �κ� ���� (Overlapping Subproblems)
	// ������ ���� �������� �ݺ��Ͽ� 
	// ��Ÿ���� ��츦 �ǹ��մϴ�.

	// ���� �κ� ���� (Optimal Substructure)
	// �κ� ������ ���� ��� ���� ����Ͽ�
	// ��ü ������ ������ ����� �� �� �ִ� 
	// ��츦 �ǹ��մϴ�.

	// �޸������̼� (Memoization)
	// ���α׷��� ������ ����� �ݺ��ؾ��� ��,
	// ������ ����� ���� �޸𸮿� ���������ν�
	// ������ ����� �ݺ� �����ϴ� �۾���
	// �����Ͽ� ���α׷��� ���� �ӵ��� 
	// ����Ű�� ����Դϴ�.

	int n = 46;
	
	int* list = new int[n + 1] {0};

	cout << fibonacci(n,list) << endl;
		 
	delete[] list;

#pragma endregion

	return 0;
}
