#include <iostream>

using namespace std;

int function(int x, int y)
{
	// 1. �ΰ��� �ڿ��� x,y �� ������ 
	//	  x �� y�� ���� �������� r�̶�� �մϴ�.

	// 2. r�� 0�̶��, x�� y�� �ִ������� y�� �˴ϴ�.

	// 3. r�� 0�� �ƴ϶��, x�� y�� �ִ� �������
	//	  y�� r�� �ִ� ������� ���� ������ 
	//    x���� y �׸��� y���� r�� ������ ��
	//    1������ ���ư��� �˴ϴ�.

	if (y == 0)
	{
		return x;
	}
	else
	{
		return function(y, (x % y));
	}
}

int main()
{
#pragma region ��Ŭ���� ȣ����
	// 2���� �ڿ��� �Ǵ� ������ �ִ� �������
	// ���ϴ� ������� �� ���� ���� ���� ����
	// ����� ���ϴ� ���� ���� �˰����̴�.

	int x = 24;
	int y = 72;

	cout << "�ִ� ����� : " << function(x, y) << endl;

#pragma endregion

	return 0;
}
