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
	//함수인자 *p에 num변수의 주소값을 받아옴
	//*p를 통해 number를 참조함
	*p = 3;
}

//change_val_of_rofo의 함수 인자로 &v를 받고있음
//이것이 레퍼런스(참조자)이다.
//int& ref = num;와 같이 레퍼런스는 반드시 초기화되어야함
//포인터 자체는 '메모리 값을 보관하는 변수'
//레퍼런스는 컴파일 시에 원래 가라키던 변수의 주소값으로 치환된다.(정확히는 메모리 공간에 할당되긴 하지만 포인터 처럼 존재하는 실체가 아니다)
int change_val_of_refo(int &v)
{
	//포인터를 붙이지 않은 일반변수명 v를 사용함
	//v가 num2 변수의 다른이름이 되는 것(v=3;과 num2=3은 동일)
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