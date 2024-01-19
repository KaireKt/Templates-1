#include "libraries.h"
#include "Templates2.h"

void Menu1ofValue()
{
    cout << "Выберите тип данных с которым собираетесь работать:" << endl
        << "1 - int" << endl
        << "2 - float" << endl
        << "3 - double" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        onedim(1);
        break;
    case 2:
        onedim(1.0f);
        break;
    case 3:
        onedim(1.0);
        break;
    default:
        break;
    }
}
