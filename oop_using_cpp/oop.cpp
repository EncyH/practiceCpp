#include <iostream>

// private, public�� ���� Ű���带 '���� ������'��� �ϸ�, �ܺο��� ����鿡 ������ �� �ִ� ������ �ο��Ѵ�.
class Animal {
	//private Ű���� ������ ��ҵ��� �ܺο��� ���� �Ұ���
	//���� �����ڸ� �������� �ʾҴٸ� ����Ʈ�� private�� ������
private:
	//Ŭ������ ���� �Ǵ� �������� member variable(��� ����)�̶�� �Ѵ�.
	int food;
	int weight;

	//public Ű���� ������ ��ҵ��� �ܺο��� ���� ����
public:
	//Ŭ������ ���� �Ǵ� �Լ����� member function(��� �Լ�)�̶�� �Ѵ�.
	void set_animal(int _food, int _weight) {
		// ��� �Լ� ���ο� �����ϴ� ������ ��ü �ڽ��� �����̱� ������ ����� �ʿ���� ���𰡴�
		food = _food;
		weight = _weight;
	}
	void increase_food(int _increase) {
		food += _increase;
		weight += (_increase / 3);
	}
	void view_stat() {
		std::cout << "�� ������ food : " << food << std::endl;
		std::cout << "�� ������ weight : " << weight << std::endl;
	}
}; //Ŭ������ �ݴ� �߰�ȣ �ڿ� �ݵ�� �����ݷ��� ���δ�.

int main() {
	// main �Լ����� Animal Ŭ������ �ν��Ͻ�*�� ����
	// ��, �ν��Ͻ��� ������ ��ü������ �ν��Ͻ� ����, �ν��Ͻ� �Լ�
	// �׸��� �׳� Ŭ���� �󿡼��� ��� ����, ����Լ���� �θ��� ��
	Animal animal;
	animal.set_animal(100, 50);
	animal.increase_food(30);

	animal.view_stat();

	system("pause");
	return 0;
}