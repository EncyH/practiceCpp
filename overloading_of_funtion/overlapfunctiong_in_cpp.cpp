#include <iostream>
// cpp������ �Լ� �̸��� ������ �Լ��� ���ڰ� �ٸ��ٸ� �ߺ��Ͽ� ����� �� �ִ�,
void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "char : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

int main() {
	int a = 1;
	char b = 'c';
	double c = 3.2f;

	// c������ �Լ��� �̸��� ���ٸ� ���� ���ǰ� �Ұ��������� cpp������ �Լ��� ���ڰ� �ٸ��ٸ� ����Ѵ�.
	/***************************
	   c������ �Լ��� Ÿ���� �����ϰ� ������ �̸��� ���� �ٸ����Ͽ� ȣ���Ͽ��� ������
	   cpp������ ������ Ÿ���� �ν��Ͽ� Ÿ�Կ� �´� �Լ��� �ڵ����� ȣ���Ѵ�.
	 ***************************/
	print(a);
	print(b);
	print(c);

	return 0;
}