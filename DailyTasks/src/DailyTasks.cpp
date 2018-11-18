#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int>days_in_months={31,28,31,30,31,30,31,31,30,31,30,31};
	int current_months=0;
	int n;
	cin >> n;
	vector<string>current_month(days_in_months[current_months]);
	vector<string>tasks(n);
	cout<<tasks.size();
	for (int i=0; i<n; i++){
		string command;
		cin>>command;
		if (command == "NEXT"){
			current_months++;
			if (current_months>11){
				current_months=0;
			}
			tasks.resize(days_in_months[current_months]);
			cout<<tasks.size();
			vector<string>next_month(days_in_months[current_months]);
			if (tasks.size()>next_month.size()){
			}
			cout<<next_month.size();
//			tasks.clear();
		}else {

		}
	}
	return 0;
}
