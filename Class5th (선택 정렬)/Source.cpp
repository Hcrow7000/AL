#include <iostream>

using namespace std;

int main()
{
#pragma region ���� ����
	// �־��� ����Ʈ �߿� �ּҰ��� ã�� ����
	// Ư���� ��ġ���� ����� ��ü�ϴ� 
	// ������� �����ϴ� �˰��� �Դϴ�.

	int list[] = { 8,2,3,5,6,1,7 };

	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0;i < size - 1;i++)
	{
		int min = list[i];

		int index = i;

		for (int j = i + 1; j < size;j++)
		{
			if (min > list[j])
			{
				min = list[j];

				index = j;
			}
		}

		std::swap(list[i], list[index]);
	}

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion


	return 0;
}
