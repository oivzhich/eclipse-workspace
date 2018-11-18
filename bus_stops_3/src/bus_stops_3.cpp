#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	map<set<string>,int> bus_stops;

	for (int i = 0; i < n; ++i) {
		int stops_count;
		cin>>stops_count;

		set<string> stops;
		for (int i = 0; i < stops_count; i++) {
			string stop;
			cin >> stop;
			stops.insert(stop);
		}
		if (bus_stops.count(stops)){
			cout<<"Already exists for "<<bus_stops[stops]<<endl;
		}else{
			int size=bus_stops.size();
			bus_stops[stops]=size+1;
			cout<<"New bus "<<bus_stops[stops]<<endl;
		}

	}
	return 0;
}
