#include <iostream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
	char month_name[15];
};
struct Worker
{
	char name[20];
	char surname[20];
	char position[20];
	double salary;
	Date birthdate;
	Date hiredate;

};
Worker InputWorker(Worker worker)
{
	cout << "Enter name : "; cin >> worker.name;
	cout << "Enter surname : "; cin >> worker.surname;
	cout << "Enter position : "; cin >> worker.position;
	cout << "Enter salary : "; cin >> worker.salary;

	cout << "Birthdate day : "; cin >> worker.birthdate.day;
	cout << "Birthdate month : "; cin >> worker.birthdate.month;
	cout << "Birthdate year : "; cin >> worker.birthdate.year;

	cout << "Hiredate day : "; cin >> worker.hiredate.day;
	cout << "Hiredate month : "; cin >> worker.hiredate.month;
	cout << "Hiredate year : "; cin >> worker.hiredate.year;
	return worker;
}
void ShowWorker(Worker &worker)
{
	cout << "\nName : " << worker.name << endl;
	cout << "Surname : " << worker.surname << endl;
	cout << "Position : " << worker.position << endl;
	cout << "Salary : " << worker.salary << endl;
	cout << "Birthdate : " << worker.birthdate.day<< "/" <<
		worker.birthdate.month<<"/"<< worker.birthdate.year << endl;

	cout << "Hiredate : " << worker.hiredate.day << "/" <<
		worker.hiredate.month << "/" << worker.hiredate.year << endl <<endl;
}
int main()
{
   //int string char double float bool long   long long
	int number = 100;
	Date birthdate = { 25,12,2000,"December" };
	cout << "------------ My birthday -------------------" << endl;
	cout << "Day : " << birthdate.day << endl;
	cout << "Month : " << birthdate.month << endl;
	cout << "Year : " << birthdate.year << endl;
	cout << "Month name : " << birthdate.month_name << endl;
	

	//Date friend_birthday;
	//cout << "Enter day : "; cin >> friend_birthday.day;
	//cout << "Enter month : "; cin >> friend_birthday.month;
	//cout << "Enter year : "; cin >> friend_birthday.year;
	//cout << "Enter month_name : "; cin >> friend_birthday.month_name;
	//cout << "------------ Friend birthday -------------------" << endl;
	//cout << "Day : " << friend_birthday.day << endl;
	//cout << "Month : " << friend_birthday.month << endl;
	//cout << "Year : " << friend_birthday.year << endl;
	//cout << "Month name : " << friend_birthday.month_name << endl;


	Worker worker = { "Oleg","Kozak","manager",117000,{11,5,1999},{2,2,2022} };
	ShowWorker(worker);

	Worker newWorker = {};
    newWorker = InputWorker(newWorker);
	ShowWorker(newWorker);


	Date event = { 26,10,2026, "October" };
	cout << event.day << endl;
	cout << event.month << endl;
	cout << event.year << endl;
	cout << event.month_name << endl;

	Date new_event;// empty
	new_event = event;
	cout << new_event.day << endl;
	cout << new_event.month << endl;
	cout << new_event.year << endl;
	cout << new_event.month_name << endl;

	//Date* ptr = nullptr;
	//ptr = &event;
	Date* ptr = &event;

	cout << ptr << endl;
	cout << (*ptr).day << endl;
	cout << ptr->day << endl;
	cout << (*ptr).month << endl;
	cout << ptr->year << endl;
	cout << ptr->month_name << endl;

	int a;//4b
	char b;//1b
	double c;//8b
	int* p;//4b
	cout << "sizeof int --> " << sizeof(int) << endl;
	cout << "sizeof int --> " << sizeof(a) << endl;
	cout << "sizeof char --> " << sizeof(b) << endl;
	cout << "sizeof double --> " << sizeof(c) << endl;
	cout << "sizeof p --> " << sizeof(p) << endl;
	cout << "sizeof p --> " << sizeof(int *) << endl;
	cout << "sizeof p --> " << sizeof(double *) << endl;
	cout << "sizeof date --> " << sizeof(event) << endl;
	cout << "sizeof worker --> " << sizeof(worker) << endl;
}

