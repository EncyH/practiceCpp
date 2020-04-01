/* �������� �Ʒ��� ���� Date Ŭ������ ������ �Ϸ��� �մϴ�.
   SetDate�� ���״�� Date �Լ� ���θ� �ʱ�ȭ �ϴ� ���̰�
   AddDay, AddMonth, AddYear �� ��, ��, ���� ���ϴ� ��ŭ ���ϰ� �˴ϴ�.
   �� ���� ������ ���� ���� 2012 �� 2 �� 28 �Ͽ� 3 ���� ���ϸ�
   2012 �� 2 �� 31 ���� �Ǵ� ���� �ƴ϶� 2012 �� 3 �� 2 ���� �ǰ�����? (���̵� : ߾) */
//������ �����߽��ϴ�.
//private�� ������ ������ ����Լ����� ������ ���� ������ �� �ִ�.

#include <iostream>

class Date {
public:
	void SetDate(int year, int month, int date);
	void AddDay(int _increase);
	void AddMonth(int _increase);
	void AddYear(int _increase);
	void ShowDate();

private:
	int year_;
	int month_;
	int day_;
};

// class ���ο� ���ǵ� ������ Ŭ���� �ܺο��� ���� �� Ŭ���� ������ ������ �ʱ�ȭ �ȴ�.
void Date::SetDate(int year, int month, int date) {
	year_ = year;
	month_ = month;
	day_ = date;
}
void Date::AddDay(int _increase) {
	day_ += _increase;

	while (day_ > 31) {
		if (month_ == (1 || 3 || 5 || 7 || 8 || 10 || 12)) {
			day_ -= 31;
			month_++;
			continue;
		}
		if (month_ == (4 || 6 || 9 || 11)) {
			day_ -= 30;
			month_++;
			continue;
		}
		else {
			day_ -= 28;
			month_++;
			continue;
		}
	}
}
void Date::AddMonth(int _increase) {
	month_ += _increase;
	while (month_ > 12) {
		month_ -= 12;
		year_++;
	}
}
void Date::AddYear(int _increase) {
	year_ += _increase;
}
void Date::ShowDate() {
	std::cout << year_ << "�� " << month_ << "�� " << day_ << "��" << std::endl;
}

int main() {
	int year, increase_year;
	int month, increase_month;
	int day, increase_day;
	Date Callender;

	std::cout << "������ ������ �Է��� �ּ���. : ";
	std::cin >> year;
	std::cout << "������ ���� �Է��� �ּ���. : ";
	std::cin >> month;
	std::cout << "������ ���� �Է��� �ּ���. : ";
	std::cin >> day;

	Callender.SetDate(year, month, day);

	std::cout << "������ �������� ���ϰ� ���� ����� �Է����ּ���. : ";
	std::cin >> increase_year;
	Callender.AddYear(increase_year);
	std::cout << "������ �������� ���ϰ� ���� ������ �Է����ּ���. : ";
	std::cin >> increase_month;
	Callender.AddMonth(increase_month);
	std::cout << "������ �������� ���ϰ� ���� �ϼ��� �Է����ּ���. : ";
	std::cin >> increase_day;
	Callender.AddDay(increase_day);
	
	Callender.ShowDate();

	system("pause");

	return 0;
}

// 31�� -> 1,3,5,7,8,10,12
// 30�� -> 4,6,9,11
// ���� -> 2