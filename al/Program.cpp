#include <iostream>

using namespace std;

void combine(int list[], int start, int middle, int end)
{
	int count = 0;
	int left = start;
	int right = middle + 1;

	int* container = new int[end - start + 1];
	
	// �� �κ��� �迭�� �����մϴ�.
	while (left <= middle && right <= end)
	{
		if (list[left] <= list[right])
		{
			container[count++] = list[left++];
		}
		else
		{
			container[count++] = list[right++];
		}


	}

	// ���� ���� �迭�� ��ҵ��� �����Ѵ�.
	while (left <= middle)
	{
		container[count++] = list[left++];
	}

	// ���� ������ �迭�� ��ҵ��� �����Ѵ�.
	while (right <= end)
	{
		container[count++] = list[right++];
	}

	// ���� �迭�� ���ĵ� �ӽ� �迭�� ���� �����մϴ�.
	for (int i = 0; i < end - start + 1; i++)
	{
		list[start + i] = container[i];
	}

	delete[] container;

}

void merge_sort(int list[], int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;

		merge_sort(list, start, middle);
		merge_sort(list, middle + 1, end);

		combine(list,start,middle,end);
	}
	
}

int main()
{
#pragma region �պ� ����
	// �ϳ��� ����Ʈ�� �� ���� ������ ũ��� �����ϰ�
	// ���ҵ� �κ� ����Ʈ�� ������ ����, 
	// �� ���� ���ĵ� �κ� ����Ʈ�� ���Ͽ� ��ü�� 
	// ���ĵ� ����Ʈ�� �ǰ� �ϴ� ����Դϴ�.

	// 1. ����Ʈ�� ���̰� 0�Ǵ� 1�� �Ǹ� �̹� ���ĵ� ������ ���ϴ�.

	// 2. �׷��� ���� ���
	
	// 2-1. ���ĵ��� ���� ����Ʈ�� �������� �߶� 
	//		����� ũ���� �� �κ� ����Ʈ�� �����ϴ�.

	// 2-2. �� �κ� ����Ʈ�� ��������� �պ� ������ �̿��Ͽ� �����մϴ�

	// 2-3. �� �κ� ����Ʈ�� �ٽ� �ϳ��� ���ĵ� ����Ʈ�� �����մϴ�.

	int list[] = { 3,5,2,7,4,1,8,6 };

	int size = sizeof(list) / sizeof(list[0]);

	merge_sort(list, 0, size - 1);

	for (const auto& element : list)
	{
		cout << element << " ";
	}


#pragma endregion

	return 0;
}
