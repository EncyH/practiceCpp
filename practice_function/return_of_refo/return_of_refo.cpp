#include <iostream>

int fn1(int &a) { return a; }
int& fn2(int &a) { return a; }

int main()
{
	int x = 1;

	//x ������ ���۷��� ���� a�� �ǰ� x�� ��ü�� �Ѱܹް� ��ü a�� ��ȯ�Ѵ�.
	//������ fn1�� �Ϲ� int���� ��ȯ�ϴ� �Լ��̱� ������ ��ü a�� ��ȯ���� ���Ѵ�.
	//���� �����Ͽ���
	//std::cout << fn1(x)++ << std::endl;
	
	//fn2�� ��ȯ Ÿ���� ���۷��� ������ ��ȯ�ϴ� ���۷���a�� ���� Ÿ������ ������ ����
	std::cout << fn2(x)++ << std::endl;
	std::cout << x << std::endl;

	system("pause");

	return 0;
}