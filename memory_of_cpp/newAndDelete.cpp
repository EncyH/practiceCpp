#include <iostream>

int main()
{
	//int형 크기의 공간을 생성하고 메모리주소를 p변수에 대입
	//ex) (type)* (pointer) = new (type);
	int* p = new int;
	*p = 10;

	std::cout << *p << std::endl;

	//할당된 메모리 공간 해제
	delete p;
	return 0;
}