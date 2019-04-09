#include <iostream>
#include <string.h>

// Templates definition for Mininum which returns the smaller value
template <class T>
T Min(T value1, T value2)
{
	if (value1 < value2)
		return value1;
	else
		return value2;
}
// Max template which takes two values and returns the larger value
template <class T>
T Max(T value1, T value2)
{
	if (value1 > value2)
		return value1;
	else
		return value2;
}

int main()
{
	//int declaration
	int integerNumber1;	
	int integerNumber2;
	//double declaration
	double doubleNumber1;
	double doubleNumber2;

	char char1[10];
	char char2[10];

	// Ask user to enter two integers
	std::cout << "Enter two integer values:\n";
	std::cin >> integerNumber1 >> integerNumber2;
	// Call min and max templates using integer data types
	std::cout << "Min Value: " << Min(integerNumber1, integerNumber2) << std::endl;
	std::cout << "Max Value: " << Max(integerNumber1, integerNumber2) << std::endl;

	// Ask user to enter two doubles
	std::cout << "Enter two double values:\n";
	std::cin >> doubleNumber1 >> doubleNumber2;
	// Call min and max templates using double data types
	std::cout << "Min Value: " << Min(doubleNumber1, doubleNumber2) << std::endl;
	std::cout << "Max Value: " << Max(doubleNumber1, doubleNumber2) << std::endl;

	// Ask user to enter two strings
	std::cout << "Enter two strings values:\n";
	std::cin >> char1 >> char2;
	// Call min and max templates using string data types
	std::cout << "Lesser: " << Min(char1, char2) << std::endl;
	std::cout << "Greater: " << Max(char1, char2) << std::endl;

	return 0;
}