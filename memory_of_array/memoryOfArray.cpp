#include <iostream>

int main()
{
	int arr_size;

	std::cout << "array size : ";
	std::cin >> arr_size;

	int *list = new int[arr_size];

	//cpp�� ���� ������ �߰��ο��� ������ �����ϸ� �߰�ȣ�� ���������� ���� �ʱ�ȭ�ȴ�.
	//������ ���� �̸��� �ٸ��� ���� ������ �⸣�� ���� ����.
	for(int i = 0; i < arr_size; i++)
	{
		std::cin >> list[i];
	}

	for (int i = 0; i < arr_size; i++)
	{
		std::cout << i << " eleement of list : " << list[i] << std::endl;
	}

	//�迭�� �޸𸮸� �����Ҷ��� delete���� �ٷ� []�� ���δ�.
	delete[] list;
	system("pause");
	return 0;
}