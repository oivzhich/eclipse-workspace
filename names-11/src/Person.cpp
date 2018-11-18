#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
class Person {
public:
	Person(const string& first_name, const string& last_name, const int& year) {
		first_names[year] = first_name;
		last_names[year] = last_name;
		year_of_birth = year;
	}
	void ChangeFirstName(int year, const string& first_name) {
		if (year >= year_of_birth)
			first_names[year] = first_name;
	}
	void ChangeLastName(int year, const string& last_name) {
		if (year >= year_of_birth)
			last_names[year] = last_name;
	}

	string GetFullName(int& year) const{
		if (year < year_of_birth)
			return "No person";
		string first_name = get_name_by_year(first_names, year);
		string last_name = get_name_by_year(last_names, year);
		return get_full_name(first_name, last_name);
	}
	string GetFullNameWithHistory(int& year) const{
		if (year < year_of_birth)
			return "No person";
		string first_name = get_name_history(first_names, year);
		string last_name = get_name_history(last_names, year);
		return get_full_name(first_name, last_name);
	}
private:
	string get_full_name(string& first_name, string& last_name) const{
		if (first_name.empty() && last_name.empty())
			return "Incognito";
		if (first_name.empty())
			return last_name + " with unknown first name";
		if (last_name.empty())
			return first_name + " with unknown last name";
		return first_name + " " + last_name;
	}
	string get_name_history(const map<int, string>& names, const int& year) const{
		vector<string> v;
		// перебираем всю историю по возрастанию ключа словаря, то есть в хронологическом порядке
		for (const auto& item : names) {
			// если очередной год не больше данного, обновляем имя
			if (item.first <= year) {
				if (v.empty() || v.back() != item.second)
					v.push_back(item.second);
			} else {
				// иначе пора остановиться, так как эта запись и все последующие относятся к будущему
				break;
			}
		}
		string toReturn = "";
		if (!v.empty()) {
			toReturn = v.back();
			v.pop_back();
		}
		if (!v.empty()) {
			toReturn += " (";
			for (int i = v.size() - 1; i >= 0; --i) {
				toReturn += v[i];
				if (v.front() != v[i])
					toReturn += ", ";
			}
			toReturn += ")";
		}
		return toReturn;
	}
	string get_name_by_year(const map<int, string>& names, const int& year) const{
		string name;  // изначально имя неизвестно

		// перебираем всю историю по возрастанию ключа словаря, то есть в хронологическом порядке
		for (const auto& item : names) {
			// если очередной год не больше данного, обновляем имя
			if (item.first <= year) {
				name = item.second;
			} else {
				// иначе пора остановиться, так как эта запись и все последующие относятся к будущему
				break;
			}
		}

		return name;
	}
	map<int, string> first_names;
	map<int, string> last_names;
	int year_of_birth;
};
