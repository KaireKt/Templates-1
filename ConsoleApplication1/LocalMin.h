#pragma once

template <typename T>

bool CheckMin(int i, int j, T** a, int n);

template <typename T>
void LocalMin(int n, T** a) 
{
    int count = 0;    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (CheckMin(i, j, a, n))
            {
                if (count == 0)
                {
                    cout << "Local minimums are here (" << i << ";" << j << ")";
                    count++;
                }
                else 
                {
                    cout << ", (" << i << ";" << j << ") ";                 
                    count++;
                }
            }
        }
    }
    if (count == 0)
        cout << endl << "There are not local minimums";    
    else
        if (count == 1)        
            cout << endl << "There is " << count << " local minimum";
        else            
            cout << endl << "There are " << count << " local minimums";
    cout << endl;
    return;
}

template <typename T>
bool CheckMin(int i, int j, T** a, int n)
{
    T number = a[i][j];
    if (i > 0 && number >= a[i - 1][j]) return false;     
    if (j > 0 && number >= a[i][j - 1]) return false;
    if (i < (n - 1) && number >= a[i + 1][j]) return false;
    if (j < (n - 1) && number >= a[i][j + 1]) return false;
    return true;
}