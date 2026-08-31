#include <iostream>
using namespace std;

int main()
{
    int age = 15;
    int Age = 55;
    int age1 = 14;
    //int 2age = 15;
    int ageofman = 45;
    int age_of_man = 33;
    int ageOfMan = 78;
    const float pi = 3.14;
    double d = 3.33;
    //int int = 77;
    //INT a = 44;
    //int age = 17;
    cout << age << endl;
    cout << "Age : " << age << "Age of man : " << ageOfMan<< endl;
    cout << "PI = " << pi << endl;
    //pi = 555; error
    cout << "PI = " << pi << endl;


    //count hours in 2000 years
    int countHours_In2000_Year;//empty variable
    const int dayIn2000Year = 366;
    int hourInDay = 24;
    countHours_In2000_Year = dayIn2000Year * hourInDay;
    cout << "Hour in 2000 year : " << countHours_In2000_Year << endl;



   float discount = 0.05;
   int count = 10;
   float costPrice = 35.99;

   cout << "Enter count products : ";
   cin >> count;
   cout << "Enter cost : ";
   cin >> costPrice;

   float price = count * costPrice - discount * count * costPrice;

   cout << "You need to pay : " << price << " grn" << endl;


   //int a;
   //cout << "Enter number : ";
   //cin >> a;
   //cout << "a = " << a << endl;









    
}

