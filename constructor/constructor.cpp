#include <iostream>

//constructor(생성자)는 기본적으로 "객체 생성시 자동으로 호출되는 함수"
//자동으로 호출되면서 객체를 초기화 해주는 역할을 담당
class Date {
	int year_;
	int month_;  // 1 부터 12 까지.
	int day_;    // 1 부터 31 까지.

public:
	void SetDate(int year, int month, int date);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);

	// 해당 월의 총 일 수를 구한다.
	int GetCurrentMonthTotalDays(int year, int month);

	void ShowDate();
	
	//객체를 초기화하는 역할을 하기 때문에 리턴값이 없다.
	Date(int year, int month, int day) {
		year_ = year;
		month_ = month;
		day_ = day;
	}
};

// 생략

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate() {
	std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
		<< " 일 입니다 " << std::endl;
}
int main() {
	//이는 곧 Date 클래스의 day객첼르 만들면서 생성자 Date(int year, int month, int day)를 호출한다는 의미
	Date day(2011, 3, 1); // -> 암시적 방법(선호함)
	//Date day = Date(2012, 3, 1)  -> 명시적 방법
	day.ShowDate();

	day.AddYear(10);
	day.ShowDate();

	return 0;
}