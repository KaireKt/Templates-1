#include"libraries.h"


using namespace std;

void onedim()
{
        setlocale(LC_ALL, "ru");
        int number;
        do
        {
            cout << "What operation do you want to perform on a one-dimensional array?" << endl
                << "1 - Calculate the minimum modulo element of the array. Find their number and their positions" << endl
                << "2 - Calculate the sum of the modules of the array elements located after the first element, which is equal to zero. Find the position of the zero element after which the sum is found" << endl
                << "3 - Transform the array so that the first half contains the elements in even positions, followed by the elements in odd positions" << endl
                << "0 - Go out" << endl;
            cin >> number;
            if (number == 0)
            {
                cout << endl;
               cout << "Exit..." << endl;
                return;
            }
            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
           int size;
           cout << "Enter array size: ";
           cin >> size;
           while (size==0 || size==1 || size==2)
           {
               cout << "Пожалуйства, введите верное значение размера массива" << endl;
               cin >> size;
           }
              
            cout << endl;
            cout << "Enter Array Elements: ";
            cout << endl;
            int* Arr = new int[size];
            int* min_elements = NULL;
            for (int i = 0; i < size; ++i)
            {
                cout << "Enter " << i + 1 << " array element: ";
              cin >> Arr[i];
            }
            cout << endl;
            
            switch (number)
            {
            case 1:
            {
                cout << endl;
                cout << "Minimum absolute element of a one-dimensional array = " << minEL(Arr, size) << endl;
                int minSize;
                int* minIndexes = findMinIndexes(Arr, size, minSize);
               
                for (int i = 0; i < 1; i++)
                    cout << "Coordinates of the minimum elements of a one-dimensional array: " << minIndexes[i] + 1;
                for (int i = 1; i < minSize; i++)
                    cout << ", " << minIndexes[i] + 1;
                cout << endl;

                delete[] minIndexes;
               
                cout << "Number of minimum elements in a one-dimensional array = " << NumofMinEl(Arr, size) << endl;

                delete[] Arr;
                delete[] min_elements;
                cout << endl;
            }
            break;
            case 2:
            {
                cout << endl;
                if (CheckArr2(Arr, size))
                {
                    cout << "Элемента равного нулю не было обнаружено";
                }
                int Minsize;
                int* ZerIndexes = CheckArr3(Arr, size, Minsize);
                int i = 0;
                int y = 1;
                if (ZerIndexes[i] == size - 1 || ZerIndexes[i] == size - 2 || (ZerIndexes[y] - ZerIndexes[i]) <= 2)
                {
                    cout << "Сумму невозможно посчитать, так как нулевой элемент одномерного массива стоит на последней, предпоследней позиции одномерного массива либо после последующего элемента, стоящего перед первым нулевым эллементом стоит, стоит второй нулевой элемент" << endl;
                    delete[] ZerIndexes;
                }
                else
                {
                    cout << "Сумма модулей элементов массива, расположенных после первого элемента, равного нулю = " << sum(Arr, size) << endl;
                    int minSize;
                    int* ZeroIndexes = findMinIndexes(Arr, size, minSize);
                    
                    for (int i = 0; i < 1; i++)
                        cout << "Coordinates of zero elements of a one-dimensional array: " << ZeroIndexes[i] + 1;
                    for (int i = 1; i < minSize; i++)
                        cout << ", " << ZeroIndexes[i] + 1;
                    cout << endl;

                    delete[] ZeroIndexes;
                    
                }
                cout << endl;
                delete[] Arr;
                delete[] min_elements;
                cout << endl;
            }
                break;
            case 3:
                {
                    cout << endl;
                    int* ConvertArr = convertarr1(Arr, size);
                    for (int i = 0; i < size; i++)
                        cout << " " << ConvertArr[i];
                    delete[] ConvertArr;
                    
                    cout << endl;
                    delete[] Arr;
                    delete[] min_elements;
                    cout << endl;
                }
                    break;
                default:
                    cout << endl;
                    cout << "This operation was not found," << endl << "please select the operation you need from the list:" << endl;
                    break;
                }
        } while (number != 0);
}

