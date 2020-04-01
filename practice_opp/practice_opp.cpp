/* 여러분은 아래와 같은 Date 클래스를 디자인 하려고 합니다.
   SetDate는 말그대로 Date 함수 내부를 초기화 하는 것이고
   AddDay, AddMonth, AddYear 는 일, 월, 년을 원하는 만큼 더하게 됩니다.
   한 가지 주의할 점은 만일 2012 년 2 월 28 일에 3 일을 더하면
   2012 년 2 월 31 일이 되는 것이 아니라 2012 년 3 월 2 일이 되겠지요? (난이도 : 上) */
//윤년은 제외했습니다.
//private로 지정한 변수는 멤버함수에서 접근해 값을 변경할 수 있다.

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

// class 내부에 정의된 변수는 클래스 외부에서 사용될 때 클래스 내부의 값으로 초기화 된다.
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
	std::cout << year_ << "년 " << month_ << "월 " << day_ << "일" << std::endl;
}

int main() {
	int year, increase_year;
	int month, increase_month;
	int day, increase_day;
	Date Callender;

	std::cout << "설정할 연도를 입력해 주세요. : ";
	std::cin >> year;
	std::cout << "설정할 월을 입력해 주세요. : ";
	std::cin >> month;
	std::cout << "설정할 일을 입력해 주세요. : ";
	std::cin >> day;

	Callender.SetDate(year, month, day);

	std::cout << "설정한 연도에서 더하고 싶은 년수를 입력해주세요. : ";
	std::cin >> increase_year;
	Callender.AddYear(increase_year);
	std::cout << "설정한 연도에서 더하고 싶은 월수를 입력해주세요. : ";
	std::cin >> increase_month;
	Callender.AddMonth(increase_month);
	std::cout << "설정한 연도에서 더하고 싶은 일수를 입력해주세요. : ";
	std::cin >> increase_day;
	Callender.AddDay(increase_day);
	
	Callender.ShowDate();

	system("pause");

	return 0;
}

// 31일 -> 1,3,5,7,8,10,12
// 30일 -> 4,6,9,11
// 윤달 -> 2