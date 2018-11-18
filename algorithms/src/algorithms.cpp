#include <iostream>
#include <vector>
using namespace std;

void Print(const vector<int>& v, const string& title) {
	cout << title << ": ";
	for (const auto& i : v) {
		cout << i << ' ';
	}
	cout << endl;
}

string GetPositivity(int x) {
	return x > 0 ? "positive" : (x == 0 ? "zero" : "negative");
}

int main() {
//	vector<int> v = { 1, 3, 2, 5, 4 };
//	Print(v, "init");
////	for (auto& i : v) {
////		++i;
////	}
////	Print(v, "after");
//
//	int cnt = 0;
//	for (const auto& i : v) {
//	  cnt += i % 2;
//	}
//
//	cout<<count_if(begin(v), end(v), [](int x) { return x % 2 != 0;});

	vector<string> w;
	    w.push_back("One");
	    {
	        w.push_back("Two");
	        {
	            w.push_back("Three");
	        }
	    }
	    for (auto s : w) {
	        cout << s;
	    }

	return 0;
}
