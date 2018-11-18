#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
void print_vector(const vector<string>& v)
{
	for (int i=0; i<v.size(); i++){
		cout<<v[i];
		if(i<v.size()-1){
			cout<<" ";
		}
	}
	cout<<endl;
}
vector<string> get_buses_for_stop(const vector<map<string, vector<string>>>& buses,
		const string& stop){
	vector<string> buses_for_stop;
	for (auto vector_item : buses) {
		//vector_item is a map with 1 element
		for(auto item_m: vector_item){
			vector<string>::iterator it;
			it = find(item_m.second.begin(), item_m.second.end(), stop);
			if (it != item_m.second.end())
				buses_for_stop.push_back(item_m.first);
		}
	}
	return buses_for_stop;
}

int main_() {
	int q;
	cin >> q;
	vector<map<string, vector<string>>> buses;

	for (int i = 0; i < q; ++i) {
		string operation_code = "";
		cin >> operation_code;
		if (operation_code == "NEW_BUS") {
			string bus;
			cin >> bus;
			int stops_count;
			cin >> stops_count;
			vector<string> stops;
			for (int i = 0; i < stops_count; i++) {
				string stop;
				cin >> stop;
				stops.push_back(stop);
			}
			map<string, vector<string>>bus_stop;
			bus_stop[bus]=stops;
			buses.push_back(bus_stop);
		}
		else if (operation_code == "BUSES_FOR_STOP") {
			string stop;
			cin >> stop;

			vector<string> buses_for_stop=get_buses_for_stop(buses,stop);

			if (buses_for_stop.size() > 0)
				print_vector(buses_for_stop);
			else
				cout << "No stop" << endl;
		}
		else if (operation_code == "STOPS_FOR_BUS") {
			string bus;
			cin >> bus;
			map<string, vector<string>> new_buses;
			for(auto item: buses){
				new_buses.insert(item.begin(), item.end());
			}
			if (new_buses.count(bus) > 0) {
				for (auto stop : new_buses[bus]) {
					vector<string> buses_for_stop=get_buses_for_stop(buses,stop);
					buses_for_stop.erase(remove(buses_for_stop.begin(),
							buses_for_stop.end(), bus), buses_for_stop.end());

					cout << "Stop " << stop << ": ";
					if (buses_for_stop.size() > 0){
						print_vector(buses_for_stop);
					}
					else cout << "no interchange" << endl;
				}
			}
			else
				cout << "No bus" << endl;

		}
		else if (operation_code == "ALL_BUSES") {
			if (buses.size() > 0) {
				map<string, vector<string>> new_buses;
				for(auto item: buses){
					new_buses.insert(item.begin(), item.end());
				}
				for (auto item : new_buses) {
					cout << "Bus " << item.first << ": ";
					print_vector(item.second);
				}
			}
			else {
				cout << "No buses" << endl;
			}
		}
	}
	return 0;
}
