#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	int myArray[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		myArray[i] = i + 1;
	}
	for (int number : myArray)
	{
		cout << number << endl;
	}
	return 0;
}