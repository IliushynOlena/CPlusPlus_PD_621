#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    //C-style   ----   string
    cout << "Hello\0" ;
    cout << "Hi\0" ;
    cout << "red" ;
    cout << "" ;
    char letter = 'a';// 1 b
    cout << endl;
    char word[] = { 'H','e','l','l','o','!','\0'};
    for (int i = 0; i < 6; i++)
    {
        cout << word[i];
    }
    cout << endl;

    char mystring[] = "string";
    cout << mystring << " has "
        << sizeof(mystring) << " characters" << endl;

    for (int i = 0; i < sizeof(mystring); i++)
    {
        cout << "letter " << mystring[i] << " has code : " <<
            static_cast<int>(mystring[i]) << endl;;
    }


    //mystring = "cat";//error
    mystring[1] = 'p';
    cout << mystring << endl;

    char name[15] = "Max";//"Max\0"
    cout << "My name is " << name << endl;

    //char your_name[255];
    //cout << "Enter name : ";
    //cin.getline(your_name, 255);  //cin >> your_name;
    //cout << "Your name is : " << your_name << endl;

    char text[] = "Print this!";
    char dest[50];
    strcpy_s(dest, text);//copy variable (dest, source);
    cout << text << endl;
    cout << dest << endl;

    cout << "Sizeof : " << sizeof(dest) << endl;//50
    cout << "Strlen : " << strnlen(dest,50) << endl;//50

    char arr[255] = "Returns the head of a list.";
    cout << arr << endl;
    //cout << "Enter any text : "; cin >> arr;
    //cout << "Enter any text : "; cin.getline(arr,255);
    cout << arr << endl;
    _strupr_s(arr);//Upper case 
    cout << arr << endl;
    _strlwr_s(arr);//small letter
    cout << arr << endl;

    _strrev(arr);
    cout << arr << endl;
    _strrev(arr);
    cout << arr << endl;

    cout << "Copy arrays : " << endl;
    char arr2[255];
    strcpy_s(arr2, arr);
    cout << "Copy : " << arr2 << endl;
    arr2[4] = '\0';
    cout << "Copy : " << arr2 << endl;

    cout << "Add to array : " << endl;
    cout << arr << endl;
    strcat_s(arr, "...........");
    cout << arr << endl;
    //cout << "Enter any text : "; cin >> arr2;
    //strcat_s(arr, arr2);
    //cout << arr << endl;

    char any_word[] = "White111";
    // letter ot number
    cout << any_word[0] << " ---> " << isalnum(any_word[0]) << endl;
    cout << any_word[5] << " ---> " << (bool)isalnum(any_word[5]) << endl;
   
    //letter
    cout << any_word[5] << " ---> " << (bool)isalpha(any_word[5]) << endl;
    cout << any_word[0] << " ---> " << (bool)isalpha(any_word[0]) << endl;
   
    //is number
    cout << any_word[0] << " ---> " << (bool)isdigit(any_word[0]) << endl;
    cout << any_word[5] << " ---> " << (bool)isdigit(any_word[5]) << endl;
    
    
    //is big letter
    cout << any_word[5] << " ---> " << (bool)isupper(any_word[5]) << endl;
    cout << any_word[0] << " ---> " << (bool)isupper(any_word[0]) << endl;
    
    //is small letter
    cout << any_word[0] << " ---> " << (bool)islower(any_word[0]) << endl;
    cout << any_word[5] << " ---> " << (bool)islower(any_word[5]) << endl;
   
    
    cout << any_word[0] << " ---> " << (char)tolower(any_word[0]) << endl;
    cout << any_word[5] << " ---> " << (char)tolower(any_word[5]) << endl;
  
    cout << any_word[2] << " ---> " << (char)toupper(any_word[2]) << endl;
    cout << any_word[5] << " ---> " << (char)toupper(any_word[5]) << endl;
    cout << any_word[5] << " ---> " << (char)isspace(any_word[5]) << endl;
   
    //if ( any_word[0] != '\0')


    double x = -5, y = 2.7, z = 3.14;
    cout << setw(5)<< x<< endl;
    cout << setw(5)<< y << endl;
    cout <<setw(5)<< z << endl;

    SetColor(5);
    cout << "Hello" << endl;
    SetColor(7);

    for (int i = 0; i < 16; i++)
    {
        SetColor(i);cout << "Hello" << endl;
    }
    //Sleep(3000);
    //system("cls");//clear console
    //srand(time(0));
    //for (int i = 0; i < 150; i++)
    //{
    //    SetPos(rand()%30, rand() % 30); 
    //    SetColor(rand() % 16); 
    //    cout << "*";
    //    Sleep(250);
    //}

    for (int i = 0; i < 255; i++)
    {
        cout << i << " --> " << (char)i << endl;
    }
    



}
