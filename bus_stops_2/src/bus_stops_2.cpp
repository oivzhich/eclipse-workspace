#include <iostream>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	int q;
	cin >> q;
	map<vector<string>,int> buses;

	for (int i = 0; i < q; ++i) {
		int stops_count;
		cin >> stops_count;
		vector<string> bus_stops;
		for(int s=0; s<stops_count; s++){
			string stop;
			cin>>stop;
			bus_stops.push_back(stop);
		}

		if(buses.count(bus_stops)==0){
			int bus_number=buses.size()+1;
			buses[bus_stops]=bus_number;
			cout<<"New bus "<<bus_number<<endl;
		}else{
			cout<<"Already exists for "<<buses[bus_stops]<<endl;
		}

	}
	return 0;
}
