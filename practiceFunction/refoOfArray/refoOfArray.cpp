#include <iostream>

// * ���۷����� �迭�� ���ʿ� �������� �ʴ´� *

// * �迭�� ���۷����� �����ϳ� ������� ���� *
// �����͸� �̿��ϴ°� ����.
int main()
{
	int arr[3] = { 1, 2, 3 };
	int(&ref)[3] = arr;

	ref[0] = 4;
	ref[1] = 5;
	ref[2] = 6;

	std::cout << arr[0] << arr[1] << arr[2] << std::endl;

	system("pause");

	return 0;
}