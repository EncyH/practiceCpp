#include <iostream>

int main()
{
	//if-else, for, while, switch ��� c���� ���� �κ� �������� ������ �ִ�.
	int input;
	int j = 0, sum = 0;
	char result;
	std::cout << "���� �Է����ּ���." << std::endl;
	std::cin >> input;
	
	//if-else
	if (input == 0)
	{
		result = 'z';
		std::cout << "0 �Դϴ�." << std::endl;
	}
	else if (input % 2 == 0)
	{
		result = 'e';
		std::cout << "¦���Դϴ�." << std::endl;
	}
	else
	{
		result = 'o';
		std::cout << "Ȧ���Դϴ�." << std::endl;
	}
	
	//for
	for (int i = 1; i <= input; i++)
	{
		std::cout << i << std::endl;
	}
	
	//while
	while (j <= input)
	{
		sum += j;
		j++;
	}
	std::cout << "1���� �Է��� ���� ������ " << sum << std::endl;
	
	//switch-case
	switch (result)
	{	
	case 'z':
		std::cout << "0 �Դϴ�." << std::endl;
		break;
		
	case 'e':
		std::cout << "¦���Դϴ�." << std::endl;
		break;
		
	case 'o':
		std::cout << "Ȧ���Դϴ�." << std::endl;
		break;
	}
	system("pause");
	
	return 0;
}