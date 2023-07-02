#include <iostream>
#include <fstream>
#include <string>
class Road {
public:
	double length;
	int width;
};

int main() {
	using namespace std;
	Road road;
	cout << "\nEmpty values: \n";
	road.length = 0;
	road.width = 0;
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	string line;
	ifstream in("data.txt");
	if (in.is_open())
	{
		getline(in, line);
		road.length = stof(line);
		getline(in, line);
		road.width = stoi(line);
	}
	in.close();
	cout << "\nField values from a text file: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	return 0;
}
