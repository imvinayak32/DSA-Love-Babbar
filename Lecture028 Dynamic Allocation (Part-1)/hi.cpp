// CPP program to illustrate
// abs() function
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int val1;
	long int val2;

	/// finding absolute value using
	/// abs() function.
	val1 = abs(22);
	val2 = labs(-432343442424);

	cout << "abs(22) = " << val1 << "\n";
	cout << "abs(-43) = " << val2 << "\n";
	return 0;
}
