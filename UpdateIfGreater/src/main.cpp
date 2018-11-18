#include <string>
#include <iostream>
#include <vector>
using namespace std;
#include "UpdateIfGreater.h"
#include "MoveStrings.h"
#include "Reverse.h"

int main() {
	vector<int> numbers = { 6, 5, 4, 3, 2, 1 };
	vector<int> reversed = Reversed(numbers);
	cout<<"Original vector:";
	for (auto x : numbers) {
		cout << x << "->";
	}
	cout << endl;
	for (auto x : reversed) {
		cout << x << "->";
	}
	cout << endl;

	return 0;
}
