#include <iostream>
// cpp에서는 함수 이름이 같더라도 함수의 인자가 다르다면 중복하여 사용할 수 있다,
void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "char : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

int main() {
	int a = 1;
	char b = 'c';
	double c = 3.2f;

	// c에서는 함수의 이름이 같다면 다중 정의가 불가능하지만 cpp에서는 함수의 인자가 다르다면 허용한다.
	/***************************
	   c에서는 함수의 타입을 정의하고 변수의 이름을 각각 다르게하여 호출하여야 하지만
	   cpp에서는 변수의 타입을 인식하여 타입에 맞는 함수를 자동으로 호출한다.
	 ***************************/
	print(a);
	print(b);
	print(c);

	return 0;
}