#include <iostream>
#include <vector>
using namespace std;
void PrintVector(const vector<int>& v) {
	for (int s : v) {
		cout << s << " ";
	}
}

void PrintAverage(const vector<int>& v) {
	int av_temp=0;
	for (auto t : v) {
		av_temp += t;
	}
	av_temp = av_temp/v.size();
//	cout<<"Average temperature: "<<av_temp<<endl;
	vector<int>days={};
	int days_above_average=0;
	for (int i=0; i<v.size(); i++){
//		cout<<"v[i]="<<v[i]<<endl;
		if (v[i]>av_temp){
//			cout<<i<<endl;
			days_above_average++;
			days.push_back(i);
		}
	}
//	cout<<endl;
	cout<<days_above_average<<endl;
	PrintVector(days);
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int& s : v) {
		cin >> s;
	}
	PrintAverage(v);
	return 0;
}
