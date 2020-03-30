/* �������� �Ʒ��� ���� Date Ŭ������ ������ �Ϸ��� �մϴ�.
   SetDate�� ���״�� Date �Լ� ���θ� �ʱ�ȭ �ϴ� ���̰�
   AddDay, AddMonth, AddYear �� ��, ��, ���� ���ϴ� ��ŭ ���ϰ� �˴ϴ�.
   �� ���� ������ ���� ���� 2012 �� 2 �� 28 �Ͽ� 3 ���� ���ϸ�
   2012 �� 2 �� 31 ���� �Ǵ� ���� �ƴ϶� 2012 �� 3 �� 2 ���� �ǰ�����? (���̵� : ߾) */

#include <iostream>

class Date
{
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
void Date::SetDate(int year, int month, int date) {
	year_ = year;
	month_ = month;
	day_ = date;
}
void Date::AddDay(int _increase) {
	day_ += _increase;
}

void Date::AddMonth(int _increase) {
	month_ += _increase;
}
void Date::AddYear(int _increase) {
	year_ += _increase;
}
void Date::ShowDate() {
	std::cout << year_ << month_ << day_ << std::endl;
}
int main() {
	int year;
	int month;
	int day;
	Date Callender;

	std::cout << "������ ���Ŀ� �°� ��¥�� �������ּ���. (ex. yyyymmdd) " << std::endl;
	std::cin >> year >> month >> day;
	
	Callender.SetDate(year, month, day);
	Callender.ShowDate();

	system("pause");

	return 0;
}

// 31�� -> 1,3,5,7,8,10,12
// 30�� -> 4,6,9,11
// ���� -> 2