#include <iostream>

// private, public과 같은 키워드를 '접근 지시자'라고 하며, 외부에서 멤버들에 접근할 수 있는 권한을 부여한다.
class Animal {
	//private 키워드 내부의 요소들은 외부에서 접근 불가능
	//접근 지시자를 지정하지 않았다면 디폴트로 private가 지정됨
private:
	//클래스에 정의 되는 변수들을 member variable(멤버 변수)이라고 한다.
	int food;
	int weight;

	//public 키워드 내부의 요소들은 외부에서 접근 가능
public:
	//클래스에 정의 되는 함수들을 member function(멤버 함수)이라고 한다.
	void set_animal(int _food, int _weight) {
		// 멤버 함수 내부에 선언하는 변수는 객체 자신의 변수이기 때문에 명시할 필요없이 선언가능
		food = _food;
		weight = _weight;
	}
	void increase_food(int _increase) {
		food += _increase;
		weight += (_increase / 3);
	}
	void view_stat() {
		std::cout << "이 동물의 food : " << food << std::endl;
		std::cout << "이 동물의 weight : " << weight << std::endl;
	}
}; //클래스를 닫는 중괄호 뒤엔 반드시 세미콜론을 붙인다.

int main() {
	// main 함수에서 Animal 클래스의 인스턴스*를 생성
	// 즉, 인스턴스로 생성된 객체에서는 인스턴스 변수, 인스턴스 함수
	// 그리고 그냥 클래스 상에서는 멤버 변수, 멤버함수라고 부르는 것
	Animal animal;
	animal.set_animal(100, 50);
	animal.increase_food(30);

	animal.view_stat();

	system("pause");
	return 0;
}