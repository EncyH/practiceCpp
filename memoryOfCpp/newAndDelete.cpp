#include <iostream>

int main()
{
	//int�� ũ���� ������ �����ϰ� �޸��ּҸ� p������ ����
	//ex) (type)* (pointer) = new (type);
	int* p = new int;
	*p = 10;

	std::cout << *p << std::endl;

	//�Ҵ�� �޸� ���� ����
	delete p;
	return 0;
}