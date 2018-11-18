#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class ReversibleString {
public:
	ReversibleString(){};
	ReversibleString(const string& s) {
		_s = s;
	}
	void Reverse() {
		reverse(begin(_s), end(_s));

	}
	string ToString() const{
		return _s;
	}
private:
	string _s;
};
