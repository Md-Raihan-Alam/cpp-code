// C++ program to demonstrate the use of std::iter_swap
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	// Declaring first vector
	vector<int> v1;
	int i;

	for (i = 0; i < 10; ++i) {
		v1.push_back(i);
	}
	// v1 contains 0 1 2 3 4 5 6 7 8 9

	vector<int>::iterator i1, i2;

	i1 = v1.begin();
	i2 = v1.end() - 1;

	// Performing swap between first and last element
	// of vector
	std::iter_swap(i1, i2);

	// Displaying v1 after swapping
	for (i = 0; i < 10; ++i) {
		cout << v1[i] << " ";
	}

	return 0;
}
