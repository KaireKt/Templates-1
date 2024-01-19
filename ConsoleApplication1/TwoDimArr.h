#pragma once

template <typename T>
void twoDimArrMenu(T tupe)
{
    int count = 0;
    char choice = '0';
    T** Arr = NULL;
    int N;
    int n = 0;
    do
    {
        cout << "This is the menu for the Two Dimention Array! You can solve the next tasks:\n"
            << "1 -> Enter data\n"
            << "2 -> Display data\n"
            << "3 -> Search local minimum\n"
            << "4 -> Search absolute amount\n"
            << "0 -> Return to main menu\n";
        cout << "Make your choice -> ";

        cin >> choice;

        switch (choice)
        {
        case '1':
            cout << "Enter the matrix' size -> ";
            cin >> n;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "The number must be a positive integer!" << endl;
            }
            else
            {
                Arr = new T* [n];

                for (int i = 0; i < n; i++)
                    Arr[i] = new T[n];

                FillArr(count, n, Arr);

                cout << endl;
            }
            break;
        case '2':
            if (count == 0)
                cout << "You didn't write the matrix" << endl;
            else
                DisplayArr(n, Arr);
            break;
        case '3':
            if (count == 0)
                cout << "You didn't write the matrix" << endl;
            else
                LocalMin(n, Arr);
            break;
        case '4':
            if (count == 0)
                cout << "You didn't write the matrix" << endl;
            else if (n == 2)
                cout << "Can't calculate amount";
            else
                cout << "Sum = " << AbsSum(n, Arr) << endl;
            break;
        case '0':
            break;
        default:
            cout << "Choose number from 0 to 4" << endl;
            break;
        }
    } while (choice != '0');
}