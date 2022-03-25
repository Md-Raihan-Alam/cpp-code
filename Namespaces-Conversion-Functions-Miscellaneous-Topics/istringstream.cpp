//istringstream is for input
// C++ program to illustrate std::istringstream
#include <iostream>
#include <sstream>
#include <string>
using std::istringstream;
using std::string;
using std::cout;
 
// Driver Code
int main()
{
    // Input string
    string a("1 2 3 5 6 7 8 9 10");
 
    // Object class of istringstream
    istringstream my_stream(a);
 
    // Variable to store number n
    int n;
 
    // Testing to see if the stream was
    // successful and printing results.
    while (my_stream) {
 
        // Streaming until space is
        // encountered
        my_stream >> n;
 
        // If my_stream is not empty
        if (my_stream) {
            cout << "That stream was successful: "
                 << n << "\n";
        }
 
        // Else print not successful
        else {
            cout << "That stream was NOT successful!"
                 << "\n";
        }
    }
 
    return 0;
}