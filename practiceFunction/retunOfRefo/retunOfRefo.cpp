#include <iostream>

int fn1(int &a) { return a; }
int& fn2(int &a) { return a; }

int main()
{
	int x = 1;

	//x 변수의 레퍼런스 명은 a가 되고 x의 객체를 넘겨받고 객체 a를 반환한다.
	//하지만 fn1은 일반 int값을 반환하는 함수이기 때문에 객체 a를 반환하지 못한다.
	//따라서 컴파일에러
	//std::cout << fn1(x)++ << std::endl;
	
	//fn2는 반환 타입이 레퍼런스 값으로 반환하는 레퍼런스a와 같은 타입으로 컴파일 가능
	std::cout << fn2(x)++ << std::endl;
	std::cout << x << std::endl;

	system("pause");

	return 0;
}