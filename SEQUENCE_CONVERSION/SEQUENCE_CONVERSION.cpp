#include <iostream>
#include <conio.h>

using namespace std;

#pragma warning(disable : 4996)

int main()
{
	char ch;
	unsigned long total = 0;
	cout << "Enter the number: ";
	while ((ch = getche()) != '\r')
	{
		total = total * 10 + ch - '0';
	}
	cout << "\nIt turned out the number: " << total << endl;

	system("pause");
	return 0;
}