#include <iostream>
using namespace std;

int main()
{
    // operators : + - * / = != == < > <= >= %
    //Унарні  5    -5  (-)  ++   --
    //Бінарні   + - * / = != == < > <= >= %
    //Тернарні


    //int a = 5, b = 4;
    //cout << a + b << endl;
    //cout << a - b << endl;
    //cout << a * b << endl;
    //cout << a / b << endl;
    //cout << a % b << endl;
    //cout << 3 % 7 << endl;//3
    //cout << 8 % 9 << endl;//8   0 8
    //cout << 10 % 9 << endl;//1    1- 1

    // 3/7 = 0.42   
    //Інкремент і декремент
    //int a = 2;
    //cout << "a = " << a << endl;
    //a = a + 1;
    //cout << "a = " << a << endl;
    //a++;// ===   a = a + 1;  postfix form increment
    //cout << "a = " << a << endl;
    //++a;// === a = a + 1;  prefix form increment
    //cout << "a = " << a << endl;

    //a = a - 1;
    //cout << "a = " << a << endl;
    //a--; //postfix form decrement
    //cout << "a = " << a << endl;
    //--a;// prefix form decrement
    //cout << "a = " << a << endl;

    //int c = 5;
    //cout << c++ << endl;//6  -------------------> 
    //cout << ++c << endl;//7  <-------------------
    //cout << c << endl;//7

    //c = c + 12;
    //cout << c << endl;
    //c += 12;
    //cout << c << endl;
    //c = c - 12;
    //cout << c << endl;
    //c -= 12;//c = c - 12;
    //cout << c << endl;
    //c *= 12;
    //cout << c << endl;
    //c /= 12;
    //cout << c << endl;
    //c %= 12;
    //cout << c << endl;

    ////Звужуюче перетворення
    ////1. Неявне перетворення.
    //int A = 3.33;
    //cout << "A = " << A << endl;


    ////Розширююче перетворення.
    //double pi = 3.14;
    //cout << "pi = " << pi << endl;

    //unsigned int salary = 3000000000;
    //cout << salary << endl;

    ////2. Явне перетворення
    //double num = 37.4;//37.4000000000000001
    //float num2 = (int)num;//37

    ////if (ymova)
    ////{
    ////    //dia1
    ////}
    ////else 
    ////{
    ////    //dia2;
    ////}
    //int number1, number2;
    //cout << "Enter number 1 ";
    //cin >> number1;
    //cout << "Enter number 2 ";
    //cin >> number2;

    //if (number2 == 0) 
    //{
    //    cout << "You can't divide by zero!" << endl;
    //}
    //else
    //{
    //    float res = (float)number1 / number2;
    //    cout << "Res : " << number1 << " / " << number2 << " = " << res << endl;
    //}
    ////тернарний оператор   ymova?true:false
    //// ymova        ?      true              :   false
    //(number2 == 0) ? cout << "Error" << endl : cout << "Res = " <<(float) number1 / number2<< endl;

    //cout << (number2 == 0) << endl;




   /* int day;
    cout << "Enter number day : ";
    cin >> day;
    if (day == 1) 
    {
        cout << "Monday" << endl;
    }
    else if (day == 2) 
    {
        cout << "Tuesday" << endl;
    }
    else if (day == 3) 
    {
        cout << "Wednesday" << endl;
    }
    else 
    {
        cout << "Error number" << endl;
    }*/

    float a, b, res;
    char key;

    cout << "Enter a : "; cin >> a;
    cout << "Enter b : "; cin >> b;
    cout << "\tChoose the operation : " << endl;;
    cout << " [+] - add number" << endl;
    cout << " [-] - sub number" << endl;
    cout << " [*] - multy number" << endl;
    cout << " [/] - div number" << endl;
    cin >> key;
    if (key == '+') {
        res = a + b;
        cout << "Resualt = " << res << endl;
    }
    else if (key == '-') {
        res = a - b;
        cout << "Resualt = " << res << endl;
    }
    else if (key == '*') {
        res = a * b;
        cout << "Resualt = " << res << endl;
    }
    else if (key == '/') {
        res = a / b;
        cout << "Resualt = " << res << endl;
    }
    else
    {
        cout << "Error choice!!!!" << endl;
    }



    cout << "Enter a : "; cin >> a;
    cout << "Enter b : "; cin >> b;
    cout << "\tChoose the operation : " << endl;;
    cout << " [+] - add number" << endl;
    cout << " [-] - sub number" << endl;
    cout << " [*] - multy number" << endl;
    cout << " [/] - div number" << endl;
    cin >> key;
    switch (key)
    {
    default:
        cout << "Error choice!!!!" << endl;
        break;
    case '+':
        res = a + b;
        cout << "Resualt = " << res << endl;
        break;
    case '-':
        res = a - b;
        cout << "Resualt = " << res << endl;
        break;
    case '*':
        res = a * b;
        cout << "Resualt = " << res << endl;
        break;
    case '/':
        res = a / b;
        cout << "Resualt = " << res << endl;
        break;

   
    }
    int day = 5;
    cout << "Enter number day : ";
    cin >> day;
    switch (day) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Working day " << endl;
    }






}

