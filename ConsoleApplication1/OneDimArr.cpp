void F1()
{
#include <iostream>

    using namespace std;

    int main()
    {
        setlocale(LC_ALL, "ru");
        int size;
        cout << "������� ������ �������: ";
        cin >> size;
        cout << endl;
        cout << "������� �������� �������: ";
        cout << endl;
        int* Arr = new int[size];
        int* min_elements = new int[size];
        for (int i = 0; i < size; ++i)
        {
            cout << "������� " << i + 1 << " ������� �������: ";
            cin >> Arr[i];
        }
        int el_min = 0, count_el_min = 1;
        for (int i = 1; i < size; ++i)
        {
            if (abs(Arr[i]) < abs(Arr[el_min]))
            {
                el_min = i;
            }
            else if (Arr[el_min] == Arr[i])
                count_el_min++;
        }
        int min;
        min_elements[0] = Arr[0];
        min = Arr[0];
        int temp = min;
        int j = 0;

        for (int i = 0; i < size; i++)
        {
            if (Arr[i] <= min)
            {
                min = Arr[i];

                min_elements[j++] = i;
                if (temp != min)
                {
                    temp = min;
                    j = 0;
                    min_elements = new int[j];
                    min_elements[j++] = i;
                }
            }
        }
        //vector minIndices;
        //// ������� ������� ���� ����������� ���������
        //for (int i = 0; i < size; ++i) 
        //{
        //    if (Arr[i] == el_min) 
        //    {
        //        minIndices.push_back(i);
        //    }
        //}

        //// ������� ���������� ���� ����������� ���������
        //for (int i = 0; i < minIndices.size(); ++i) 
        //{
        //    std::cout << "���������� ������������ �������� " << el_min << ": (" << minIndices[i] << ")\n";
        //}

        //return 0;
        cout << "����������� �� ������ ������� ����������� ������� = " << Arr[el_min] << endl;
        for (int i = 0; i < 1; i++)
            cout << "���������� ����������� ��������� ����������� �������: " << min_elements[i] << ", ";
        for (int i = 1; i < j; i++)
            cout << min_elements[i];
        cout << endl;
        //cout << "������� ������������ �������� ����������� ������� = " << el_min << endl;
        cout << "����� ����������� ��������� � ���������� ������� = " << count_el_min << endl;

        delete[] Arr;

        return 0;

    }
