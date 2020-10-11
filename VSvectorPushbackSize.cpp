// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> vect;			// create an empty vector<int>
	cout << "Size:         " << vect.size() << endl;
	cout << "Capacity: " << vect.capacity() << endl << endl;

	int prevCap = vect.capacity();

	for (int i = 0; i < 140; ++i) {
		vect.push_back(0);
		if (prevCap != vect.capacity()) {
			cout << "Size:     " << vect.size() << endl;
			cout << "Capacity: " << vect.capacity() << endl << endl;
			prevCap = vect.capacity();
		}
	}
}
