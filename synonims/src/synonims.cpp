#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string,set<string>> map_of_synonims;

	for (int i = 0; i < n; ++i) {
		string operation_code = "";
		cin >> operation_code;
		if (operation_code == "ADD") {
			string w1, w2;
			cin >> w1 >> w2;
			set<string> s;

			map_of_synonims[w1].insert(w2);
			map_of_synonims[w2].insert(w1);

		} else if (operation_code == "CHECK") {
			string w1, w2;
			cin >> w1 >> w2;
			string result = "NO";
			if (map_of_synonims[w1].count(w2)>0
					||map_of_synonims[w2].count(w1)>0){
				result="YES";
			}
			cout << result << endl;
		} else if (operation_code == "COUNT") {
			string w;
			cin >> w;
			int count = map_of_synonims[w].size();
			cout << count << endl;
		} else {
			cout << "Wrong operation code" << endl;
		}

	}

	return 0;
}
