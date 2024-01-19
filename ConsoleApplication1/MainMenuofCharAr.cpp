#include "libraries.h"


bool isVowel(char ch)
{
	ch = std::tolower(ch);
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}

int charAr()
{
	ifstream file("myFile.txt"); 
	if (!file)
	{
		cerr << "Ошибка открытия файла" << endl;
		return 1;
	}
	int number;
	cout << "File open" << endl;
	cout << endl;
	cout << "1 - Write message to file" << endl;
	cout << "2 - Reading a message from a file" << endl;
	cin >> number;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << endl;
	switch (number)
	{
	case 1:
	{
		char buffer[1000];

		cout << "Enter the text: ";
		cin.getline(buffer, 1000);

		ofstream file("myFile.txt");
		file << buffer;
	}
	break;
	case 2:
	{
		char word[100];
		while (file >> word)
		{
			int len = 0;
			while (word[len] != '\0')
			{
				len++;
			}
			if (isVowel(word[0]) && isVowel(word[len - 1]))
			{
			cout << word << endl;
			}
		}
		break;
	}
	default:
		cout << "This operation was not found" << endl;
		break;
	}
	file.close();
	return 0;
}

//#include "libraries.h"
//#include "prototypes.h"
//using namespace std;
//void charAr()
//{
//	fstream fs;
//	fs.open("myFile.txt", fstream::in | fstream::out);
//	if (!fs.is_open())
//	{
//		cout << "File opening error" << endl;
//	}
//	else
//	{
//		int size = 500;
//		char* msg=new char[size];
//		int number;
//		cout << "File open" << endl;
//		cout << endl;
//		cout << "1 - Write message to file" << endl;
//		cout << "2 - Reading a message from a file" << endl;
//		cin >> number;
//		cout << endl;
//		switch (number)
//		{
//		case 1:
//			cout << "Enter your message" << endl;
//			//cin >> msg;
//			//cin.get(msg, 500);
//			cin.getline(msg, size);
//			//gets_s(msg);
//			fs << msg << endl;
//			cin.clear();
//			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//			break;
//		case 2:
//		{
//			cout << "Reading a message from a file..." << endl;
//			char ch;
//			//cout << msg;
//			while (fs.get(ch))
//			{
//				cout << ch;
//			}
//			cout << endl << endl;
//			//////////////////////////////////////////////////////////////////////////////////
//			char word[15];
//			int words_vowel_count = 0;
//			cout << "Cлова, начинающиеся и оканчивающиеся на гласные буквы: \n";
//			while (fs >> word)
//			{
//				if (isVowel(word[0]))
//				{
//					cout << word << endl;
//					++words_vowel_count;
//				}
//			}
//			if (words_vowel_count == 0)
//				cout << "Слов, начинающихся и оканчивающихся на гласные буквы, нет";
//			cout << endl;
//		}
//			break;
//		default:
//			cout << "This operation was not found" << endl;
//			break;
//		}
//	}
//
//	fs.close();
//	cout << "The file is finished..." << endl<<endl;
//
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
























































































