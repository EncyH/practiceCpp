#include <iostream>

int main()
{
	//std는 name space이고 cout는 변수명
	//name space가 다르다면 같은 변수명을 사용할 수 있다.
	//ex) std1::cout와 std2::cout
	//std는 iostream에 정의된 name space
	//cout은 console output, cin은 console input
	//endl은 end line이며 문자열 개행
	std::cout << "Hello world!" << std::endl;
	return 0;
}