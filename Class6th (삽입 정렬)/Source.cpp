#include <iostream>

using namespace std;

int main()
{
#pragma region ���� ����
	// �����͸� �ϳ��� Ȯ���ϸ鼭 �̹� ���ĵ� �κа�
	// ���Ͽ� �ڽ��� ��ġ�� ã�� �����ϴ� 
	// ������� �����ϴ� �˰����̴�

	int list[] = { 8, 5, 6, 2, 4, 1, 3, 7, 10 };
	int size = sizeof(list) / sizeof(list[0]);

	int key = 0;
	int j = 0;

	for (int i = 1;i < size;i++)
	{
		key = list[i];

		for (j = i - 1;j >= 0 && list[j] > key; j--)
		{
			list[j + 1] = list[j];
		}

		list[j + 1] = key;
	}

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}
