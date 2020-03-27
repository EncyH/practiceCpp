#include <iostream>

// * 레퍼런스의 배열은 애초에 지원하지 않는다 *

// * 배열의 레퍼런스는 가능하나 권장되지 않음 *
// 포인터를 이용하는게 낫다.
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