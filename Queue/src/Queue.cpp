#include <iostream>
#include <vector>
#include <map>
using namespace std;

void PrintVector(const vector<int>& v) {
	for (auto s : v) {
		cout << s <<endl;
	}
}

int main() {
	int n;
	cin >> n;
	vector<bool> v(0);
	vector<int>worried={};
	for (int i=0; i<n; i++){
		string command;
		cin>>command;
		int x;
		if (command != "WORRY_COUNT"){
			cin>>x;
			if (command=="COME"){
				v.resize(v.size()+x,true);
			}
			if (command == "QUIET"){
				v[x]=true;
			}
			if (command == "WORRY"){
				v[x]=false;
			}
		}else {
			int w=0;
			for (auto p:v){
				if (p==false) w++;
			}
			worried.push_back(w);
		}
	}
	PrintVector(worried);
	return 0;
}
