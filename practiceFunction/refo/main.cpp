#include <iostream>

void change_val_of_c();
void change_val_of_refo();
void pointer_of_c();
void refo_of_cpp();

int main()
{
	pointer_of_c();
	refo_of_cpp();

	system("pause");

	return 0;
}

void change_val_of_c(int *p)
{
	//�Լ����� *p�� num������ �ּҰ��� �޾ƿ�
	//*p�� ���� number�� ������
	*p = 3;
}

//change_val_of_rofo�� �Լ� ���ڷ� &v�� �ް�����
//�̰��� ���۷���(������)�̴�.
//int& ref = num;�� ���� ���۷����� �ݵ�� �ʱ�ȭ�Ǿ����
//������ ��ü�� '�޸� ���� �����ϴ� ����'
//���۷����� ������ �ÿ� ���� ����Ű�� ������ �ּҰ����� ġȯ�ȴ�.(��Ȯ���� �޸� ������ �Ҵ�Ǳ� ������ ������ ó�� �����ϴ� ��ü�� �ƴϴ�)
int change_val_of_refo(int &v)
{
	//�����͸� ������ ���� �Ϲݺ����� v�� �����
	//v�� num2 ������ �ٸ��̸��� �Ǵ� ��(v=3;�� num2=3�� ����)
	v = 13;

	return 0;
}
void pointer_of_c()
{
	int num1 = 5;

	std::cout << num1 << std::endl;
	change_val_of_c(&num1);
	std::cout << num1 << std::endl;
}

void refo_of_cpp()
{
	int num2 = 10;
	std::cout << num2 << std::endl;
	change_val_of_refo(num2);
	std::cout << num2 << std::endl;
}