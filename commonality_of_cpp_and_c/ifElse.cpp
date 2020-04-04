#include <iostream>

int main()
{
	//if-else, for, while, switch 등등 c언어와 많은 부분 공통점을 가지고 있다.
	int input;
	int j = 0, sum = 0;
	char result;
	std::cout << "값을 입력해주세요." << std::endl;
	std::cin >> input;
	
	//if-else
	if (input == 0)
	{
		result = 'z';
		std::cout << "0 입니다." << std::endl;
	}
	else if (input % 2 == 0)
	{
		result = 'e';
		std::cout << "짝수입니다." << std::endl;
	}
	else
	{
		result = 'o';
		std::cout << "홀수입니다." << std::endl;
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
	std::cout << "1부터 입력한 수의 총합은 " << sum << std::endl;
	
	//switch-case
	switch (result)
	{	
	case 'z':
		std::cout << "0 입니다." << std::endl;
		break;
		
	case 'e':
		std::cout << "짝수입니다." << std::endl;
		break;
		
	case 'o':
		std::cout << "홀수입니다." << std::endl;
		break;
	}
	system("pause");
	
	return 0;
}