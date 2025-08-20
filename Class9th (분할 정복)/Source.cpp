#include <iostream>

using namespace std;

int max(int list[], int left, int right)
{
	if (left == right)
	{
		return list[left];
	}
	else
	{
		int left_max = max(list, left, (left + right) / 2);
		int right_max = max(list, (left + right) / 2 + 1, right);

		if (left_max < right_max)
		{
			return right_max;
		}
		else
		{
			return left_max;
		}
	}
}

int main()
{
#pragma region ���� ����
	// �־��� 2�� �̻��� �κ����� ������
	// ���� �� �� �κ� ������ ���� ����
	// ��ͷ� ȣ���Ͽ� ����� ����, 
	// �״����κ��� ��ü ������ ����
	// ����س��� �˰����̴�.

	// ���� (DIvide) : �־��� ������ �� ��
	// Ȥ�� �� �̻��� �������� ������.

	// ���� (Conquer) : �������� ������ 
	// ��������� �ذ��ؼ� �������� ������
	// �� �̻� ����� ������ �ʿ����
	// ������ ��� �����մϴ�.

	// ���� (Combine) : ����� �ذ��� 
	// �������� �����ؼ� ���� ������ 
	// �ش��� �����մϴ�.

	int list[] = { 20,15,99,1 };

	int size = sizeof(list) / sizeof(list[0]);

	cout << max(list, 0, size - 1) << endl;

#pragma endregion

	return 0;
}
