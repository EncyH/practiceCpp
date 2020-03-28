#include <iostream>

int main()
{
	int arr_size;

	std::cout << "array size : ";
	std::cin >> arr_size;

	int *list = new int[arr_size];

	//cpp의 변수 선언은 중간부에서 선언이 가능하며 중괄호를 빠져나오는 순간 초기화된다.
	//하지만 변수 이름은 다르게 짓는 습관을 기르는 것이 좋다.
	for(int i = 0; i < arr_size; i++)
	{
		std::cin >> list[i];
	}

	for (int i = 0; i < arr_size; i++)
	{
		std::cout << i << " eleement of list : " << list[i] << std::endl;
	}

	//배열의 메모리를 해제할때는 delete옆에 바로 []를 붙인다.
	delete[] list;
	system("pause");
	return 0;
}