#include <iostream>

//constructor(������)�� �⺻������ "��ü ������ �ڵ����� ȣ��Ǵ� �Լ�"
//�ڵ����� ȣ��Ǹ鼭 ��ü�� �ʱ�ȭ ���ִ� ������ ���
class Date {
	int year_;
	int month_;  // 1 ���� 12 ����.
	int day_;    // 1 ���� 31 ����.

public:
	void SetDate(int year, int month, int date);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);

	// �ش� ���� �� �� ���� ���Ѵ�.
	int GetCurrentMonthTotalDays(int year, int month);

	void ShowDate();
	
	//��ü�� �ʱ�ȭ�ϴ� ������ �ϱ� ������ ���ϰ��� ����.
	Date(int year, int month, int day) {
		year_ = year;
		month_ = month;
		day_ = day;
	}
};

// ����

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate() {
	std::cout << "������ " << year_ << " �� " << month_ << " �� " << day_
		<< " �� �Դϴ� " << std::endl;
}
int main() {
	//�̴� �� Date Ŭ������ day��ÿ�� ����鼭 ������ Date(int year, int month, int day)�� ȣ���Ѵٴ� �ǹ�
	Date day(2011, 3, 1); // -> �Ͻ��� ���(��ȣ��)
	//Date day = Date(2012, 3, 1)  -> ����� ���
	day.ShowDate();

	day.AddYear(10);
	day.ShowDate();

	return 0;
}