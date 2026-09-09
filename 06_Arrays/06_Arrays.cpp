#include <iostream>
using namespace std;

int main()
{
    //Масив — це набір однотипних даних, об'єднаний загальним ім'ям.
   /*
    int train[3];
    train[0] = 11;
    train[1] = 12;
    train[2] = 7;
    cout << "Vagon 1 : " << train[0] << endl;
    cout << "Vagon 2 : " << train[1] << endl;
    cout << "Vagon 3 : " << train[2] << endl;

    const int size = 12;
    int marks[size];

    marks[0] = 12;
    marks[1] = 8;
    marks[2] = 7;
    marks[3] = 11;
    marks[4] = 12;
    marks[5] = 10;
    marks[6] = 4;
    marks[7] = 4;
    marks[8] = 2;
    marks[9] = 11;
    marks[10] = 10;
    marks[11] = 10;
    //marks[12] = 12; error
    cout << "Marks : " << marks[0] << " - " << marks[5] << " " << marks[11] << endl;
    */
    //int arr1[5];

    //const int size = 10;
    //double arr[size];

    const int size = 10;
    int arr1[size] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    int arr2[size] = {};
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    int arr3[size] = {1,2,3};
    for (int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }

  /*  int arr4[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1;
        cin >> arr4[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;*/

    //Написати програму, яка знаходить суму всіх від'ємних значень у масиві.
    //знаходить мінімальне й максимальне значення в масиві 
    // і виводить їх на екран.

    const int SIZE = 10;
    //int arr5[SIZE] = { 5, -9, 4,-78,2,-15,6,4,3,-1};
    int arr5[SIZE] = {-5,-77,-8,-4,-1,-2,-6,-9,-3,-5};
    int min = arr5[0], max = arr5[0];
    int summa = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr5[i] < 0)
        {
            summa += arr5[i];
        }
        if (arr5[i] > max)
        {
            max = arr5[i];
        }
        if (arr5[i] < min)
        {
            min = arr5[i];
        }
    }
    cout << "Summa negative elements = " << summa << endl;
    cout << "Max element = " << max << endl;
    cout << "Min element = " << min << endl;
}

