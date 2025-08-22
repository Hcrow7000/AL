#include <iostream>

using namespace std;

void quick_sort(int list[], int start, int end)
{
	// pivot ������ ���� �����մϴ�.
	int pivot = start;

	// left ������ ���� �����մϴ�.
	int left = start + 1;

	// right ������ ���� �����մϴ�.
	int right = end;

	// left�� right���� ���� �� ���� �ݺ�
	while (left <= right)
	{
		// left�� end���� �۰ų� ���� list[left]��
		// list[pivot]���� �۰ų� ���� ������ �ݺ��մϴ�.
		while (left <= end && list[pivot] >= list[left])
		{
			left++; // left�� ���� ������ŵ�ϴ�.
		}

		// right�� start���� ũ�� list[right]��
		// list[pivot]���� ũ�ų� ���������� �ݺ�
		while (right > start && list[pivot] <= list[right])
		{
			right--; // right�� ���� ���ҽ�ŵ�ϴ�.
		}

		if (left > right)
		{
			std::swap(list[pivot], list[right]);
		}
		else
		{
			std::swap(list[left], list[right]);
		}

	}

	// pivot�� �������� �������� �� �迭�� ����
	// ��������� �� ������ ȣ���մϴ�.

	quick_sort(list, start, right - 1);

	quick_sort(list, right + 1, end);

}

int main()
{
#pragma region �� ����
	// �������� ȹ���� ���� ��������
	// �������� �迭�� ������ ���ʿ���
	// ���������� ���� ������ ��ġ�ϰ� �� ����
	// �ٸ� �� �ʿ��� ���������� 
	// ū ������ ��ġ�ϵ��� �����մϴ�.

	// �������� ���� �迭�� ���� ��������� 
	// �� ������ ȣ���Ͽ� ��� �迭�� 
	// �⺻ �迭�� �� ������ �ݺ��ϸ� �����մϴ�.

	int list[] = { 5,3,8,4,1,6,2,7 };

	int size = sizeof(list) / sizeof(list[0]);

	quick_sort(list, 0, size - 1);

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}
