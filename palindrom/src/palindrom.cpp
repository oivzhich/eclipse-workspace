#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "palfilter.h"

int main() {
	string input;
	vector<string> words={"weew","bro","code"};
	for (auto w: PalindromFilter(words,4))
		cout<<w<<" ";
	cout<<endl;
	return 0;
}
