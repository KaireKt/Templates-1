#include"libraries.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int number=10;
	cout << "Enter the operation you need" << endl
		<<"1 - Working with a one-dimensional array"<<endl
		<<"2 - Working with a square matrix"<<endl
		<<"3 - Work with text"<<endl
		<<"0 - Exit the program"<<endl;
	while (number != 0)
	{
		cin >> number;
		cout << endl;
		switch (number)
		{
		case 1:
			cout << "Performing the first operation..." << endl;
			Menu1ofValue();
			cout << "Enter the operation you need" << endl
				<< "1 - Working with a one-dimensional array" << endl
				<< "2 - Working with a square matrix" << endl
				<< "3 - Work with text" << endl
				<< "0 - Exit the program" << endl;
			break;
		case 2:
			cout << "Performing the second operation..." << endl;
			Menu2ofValue();
			cout << "Enter the operation you need" << endl
				<< "1 - Working with a one-dimensional array" << endl
				<< "2 - Working with a square matrix" << endl
				<< "3 - Work with text" << endl
				<< "0 - Exit the program" << endl;
			break;
		case 3:
			cout << "Performing the third operation..." << endl;
			charAr();
			cout << "Enter the operation you need" << endl
				<< "1 - Working with a one-dimensional array" << endl
				<< "2 - Working with a square matrix" << endl
				<< "3 - Work with text" << endl
				<< "0 - Exit the program" << endl;
			break;
		case 0:
			cout << "Exit the program..." << endl;
			number = 0;
			break;
		default:
			cout << "This operation was not found,"<<endl<< "please select the operation you need from the list:" << endl
				<< "1 - Working with a one-dimensional array" << endl
				<< "2 - Working with a square matrix" << endl
				<< "3 - Work with text" << endl
				<< "0 - Exit the program" << endl;
			break;
		}
	}
	return 0;
}
