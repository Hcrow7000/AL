#include <iostream>

using namespace std;

int main()
{
#pragma region ���� Ž��
	// ������ ��� ����� ���� Ž���ϸ鼭
	// ����� ã�� �˰����̴�. (�밡��)

	int password[] = { 7,1,2 };

	for (int i = 0; i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			for (int k = 0;k < 10;k++)
			{
				if (password[0] == i &&
					password[1] == j &&
					password[2] == k)
				{
					cout << "release : "
						<< i <<
						" " << j <<
						" " << k <<
						endl;

					return 0;
				}
			}
		}
	}


#pragma endregion


	return 0;
}
