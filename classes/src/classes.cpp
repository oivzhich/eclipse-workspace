#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

class Circus {
public:
	int CountAnimalTypes() {
		int animal_type_count = 0;
		for (const auto& item : animals_by_type) {
			if (HasAnimalType(item.first)) {
				++animal_type_count;
			}
		}
		return animal_type_count;
	}
	int ComputeAnimalCount() const{
		int animal_count = 0;
		for (const auto& item : animals_by_type) {
			animal_count += item.second.size();
		}
		return animal_count;
	}
	void AddAnimal(const string& type, const string& name) {
		animals_by_type[type].insert(name);
	}
	void RetireAnimal(const string& type, const string& name) {
		animals_by_type[type].erase(name);
	}

private:
	bool HasAnimalType(const string& type) {
		return !animals_by_type[type].empty();
	}

	map<string, set<string>> animals_by_type;
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
