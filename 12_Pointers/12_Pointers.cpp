#include <iostream>
using namespace std;

void Change(int a)
{
    a++;
}
void Change(int *a)//address
{
    (*a)++;
}
int FinMAx(int a, int b, int c)
{
    if (a > b and a > c)
        return a;
    else if (b > a and b > c)
        return b;
    else
        return c;
}
int* FinMAx(int *a, int *b, int *c)
{
    if (*a > *b and *a > *c)
        return a;
    else if (*b > *a and *b > *c)
        return b;
    else
        return c;
}
int main()
{
    int a = 5, b = 8, c = 9;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    int max = FinMAx(a, b, c);
    max++;
    cout << "Max = " << max << endl;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    int* maxptr = FinMAx(&a, &b, &c);
    cout << "MAx element : " << *maxptr << endl;
    (*maxptr)++;
    cout << "MAx element : " << *maxptr << endl;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    /*
    int a = 5;
    int* pa= &a;

    int b = 10;
    int* pb = &b;

    cout << "a = " << a << endl;
    Change(&a);
    cout << "a = " << a << endl;
    Change(&a);
    cout << "a = " << a << endl;
    Change(&a);
    cout << "a = " << a << endl;


    cout << "pa = " << pa << endl;
    cout << "*pa = " << *pa << endl;
    cout << "b = " << b << endl;
    cout << "pb = " << pb << endl;
    cout << "*pb = " << *pb << endl;
    
    cout << a + b << endl;
    cout << *pa + *pb << endl;


    pa = &b;
    cout << "b = " << b << endl;
    cout << "*pb = " << *pb << endl;
    cout << "*pa = " << *pa << endl;
    *pa += 2;

    cout << "b = " << b << endl;
    cout << "*pb = " << *pb << endl;
    cout << "*pa = " << *pa << endl;

    srand(time(0));
    const int size = 10;
    int arr[size]{};
    int* parr = &arr[0];
    cout << arr[0] << endl;
    cout << parr << endl;

   /* for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100; 
        cout << arr[i] << " ";
    }*/
    /*
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        *(parr + i) = rand() % 100;
    }
    for (int i = 0; i < size; i++)
    {
        cout << *(parr+i )<< " ";
    }
    cout << "parr  "<< parr << endl;
    cout << "arr  "<< arr << endl;
    cout << *parr << endl;
    cout << "--"<<  parr + 1 << endl;
    cout << *parr + 1 << endl;


    for (int i = 0; i < size; i++)
    {
        *parr = rand() % 100; 
        // parr + 1   --- parr++;
        parr++;
    }

    parr = arr;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout<< *parr <<" ";
        // parr + 1   --- parr++;
        parr++;
    }
    cout << endl;
    int* newptr = arr;
    *newptr = 0;
    newptr += 3;
    *newptr = 0;

    parr = arr;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        // parr + 1   --- parr++;
        parr++;
    }
    cout << endl;
    parr--;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr--;
    }
    */

    //cout << a << endl;//5
    //a + 1;//6
    //cout << a << endl;//5
    //a++;//a = a + 1
    //cout << a << endl;









}

