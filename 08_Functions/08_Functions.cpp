#include <iostream>
using namespace std;


void Hello()
{
    cout << "Hello world" << endl;
}
void sayHello();//prototype function

void Star(int count)//1500
{
    for (int i = 0; i < count; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
void AnyLine(char symbol, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << symbol << " ";
    }
    cout << endl;
}
int myPow(int number, int step)//5**4
{
    int pow = 1;
    for (int i = 0; i < step; i++)
    {
        pow *= number;
    }
    //cout << "Pow number " << number << " = " << pow << endl;
    return pow;
}

int Max(int a, int b)
{
    /*if (a > b)
        return a;
    else
        return b;*/
    return (a > b) ? a : b;
}
int Min(int a, int b)
{
    return (a < b) ? a : b;
}
void Second()
{
    cout << "Second function working" << endl;
}
void First()
{
    cout << "First function start" << endl;
    Second();
    cout << "First function end" << endl;
}
void Change(int a, int b)
{
    cout << "a = " << a << " . b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " . b = " << b << endl;
}
void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout << endl;
}
int SummaArray(int arr[], int size)
{
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        summa+= arr[i];
    }
    return summa;
}
void InitMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}
void ShowMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}

int A = 100;

void setA()
{
    A = 99;
}
void Show()
{
    cout << A << endl;
}
void setSecond()
{
    int A = 77;
    cout << A << endl;
}
int main()
{
    srand(time(0)); 
    //  IsLeap(int year)  return true;
    // if (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)
    // day_in_month = [31,28,31,30,31,30,.....]
    //21 05 2001 (дні)   -  16 09 2026(дні)  --> day month year

    int A = 10;
    cout << A << endl;
    cout << ::A << endl;
    ::A = 333;
    cout << ::A << endl;
    setA();
    Show();
    setSecond();
    Show();


  /*  int a = 5;
    if (a == 5) 
    {
        int b = 3;
        cout << b << endl;
        cout << a << endl;
    }
    cout << a << endl;
    cout << b << endl;*/






    const int rows = 5;
    const int cols = 7;
    int array[rows][cols];
    InitMatrix(array, rows, cols);
    ShowMatrix(array, rows, cols);





    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);
    int summa = SummaArray(arr, size);
    cout << "Summa elements array = " << summa << endl;



    int a = 4, b = 7;
    cout << "a = " << a << " . b = " << b << endl;
    Change(a, b);
    cout << "a = " << a << " . b = " << b << endl;



    First();
    cout << "MAx element : " << Max(8, 120) << endl;
    cout << "MAx element : " << Max(18, 1) << endl;
    cout << "Min element : " << Min(18, 1) << endl;
    cout << "Min element : " << Min(18, 100) << endl;
    cout << "Res : " << myPow(5, 2) << endl;
    int res = myPow(5, 4);
    cout << "Pow returned " << res << endl;
    AnyLine('$', 65);
    AnyLine('#',5);
    AnyLine( '@',15);
    Star(5);
    Star(15);
    Star(50);



    Hello();
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    return 0;
}

void sayHello()
{
    cout << "Hello world" << endl;
}