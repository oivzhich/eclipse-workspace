#include <iostream>
#include "Person.cpp"
#include "Incognizable.cpp"
#include "Weather.cpp"
#include "LectureTitle.cpp"
using namespace std;

Weather GetMayWeather(int day) {
	if (day == 9) {
		cout << 'b';
		return {"clear", 10};
	} else {
		cout << 'b';
		return {"cloudy", 10};
	}
}

int main() {
//	Person person("Polina", "Sergeeva", 1960);
//	for (int year : { 1959, 1960 }) {
//		cout << person.GetFullNameWithHistory(year) << endl;
//	}
//
//	person.ChangeFirstName(1965, "Appolinaria");
//	person.ChangeLastName(1967, "Ivanova");
//	for (int year : { 1965, 1967 }) {
//		cout << person.GetFullNameWithHistory(year) << endl;
//	}
//
//	person.ChangeFirstName(1900, "Lida");
//	person.ChangeLastName(1901, "YYYYY");
//	for (int year : { 199, 1901 }) {
//		cout << person.GetFullNameWithHistory(year) << endl;
//	}
	LectureTitle title(
	    Specialization("C++"),
	    Week("4th"),
	    Course("White belt")
	);

	return 0;
}
