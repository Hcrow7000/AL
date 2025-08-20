#include <iostream>

using namespace std;

void search(int list[], int key, int size)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int pivot = (left + right) / 2;

		if (list[pivot] == key)
		{
			cout << "key found : " << list[pivot] << endl;

			return;
		}
		else if (list[pivot] > key)
		{
			right = pivot - 1;
		}
		else
		{
			left = pivot + 1;
		}
	}

	cout << "not key found" << endl;

}

int main()
{
#pragma region �̺� Ž��
	// Ž�� ������ ������ ������ ã�� 
	// ���� �����ϴ� ������ ���������� 
	// ������� �����ϴ� �˰����̴�.

	int list[] = { 5,6,11,13,26,55,66,92 };

	int size = sizeof(list) / sizeof(list[0]);

	search(list, 65, size);

#pragma endregion

	return 0;
}
