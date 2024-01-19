//#include "Libraries.h" 
//
//
//void FillArr(int& count, int n, float** a)
//{
//    cout << "Enter data" << endl;
//    count += 1;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> a[i][j];
//            if (cin.fail())
//            {
//                cin.clear();
//                cin.ignore(numeric_limits<streamsize>::max(), '\n');
//                cout << "This must be the number!" << endl;
//                count = 0;
//                return;
//            }
//        }
//    }
//}
//
//void DisplayArr(int n, float** a)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//}