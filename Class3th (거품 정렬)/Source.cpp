#include <iostream>

using namespace std;

int main()
{
#pragma region ��ǰ ����
	// ���� ������ �� ���Ҹ� ���Ͽ� 
	// �����ϴ� �˰��� �Դϴ�.

	int list[] = { 5,6,1,3,2,7 };

	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < (size - i) - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				std::swap(list[j], list[j + 1]);
			}

		}
	}

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion


	return 0;
}
