// C++ program to demonstrate the use of std::generate_n
#include <iostream>
#include <vector>
#include <algorithm>

// Defining the generator function
int gen()
{
	static int i = 0;
	return ++i;
}

using namespace std;
int main()
{
	int i;

	// Declaring a vector of size 10
	vector<int> v1(10);

	// using std::generate_n
	std::generate_n(v1.begin(), 10, gen);

	vector<int>::iterator i1;
	for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
		cout << *i1 << " ";
	}
	return 0;
}
