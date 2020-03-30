/* 여러분은 아래와 같은 Date 클래스를 디자인 하려고 합니다.
   SetDate는 말그대로 Date 함수 내부를 초기화 하는 것이고
   AddDay, AddMonth, AddYear 는 일, 월, 년을 원하는 만큼 더하게 됩니다.
   한 가지 주의할 점은 만일 2012 년 2 월 28 일에 3 일을 더하면
   2012 년 2 월 31 일이 되는 것이 아니라 2012 년 3 월 2 일이 되겠지요? (난이도 : 上) */

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

	std::cout << "다음의 형식에 맞게 날짜를 설정해주세요. (ex. yyyymmdd) " << std::endl;
	std::cin >> year >> month >> day;
	
	Callender.SetDate(year, month, day);
	Callender.ShowDate();

	system("pause");

	return 0;
}

// 31일 -> 1,3,5,7,8,10,12
// 30일 -> 4,6,9,11
// 윤달 -> 2