#include <iostream>
#include <conio.h>
using namespace std;

void Change(int& a)//address
{
	a++; 
}
//0sdd5s4 FindMax(0x785x4 a, 0sdd5s4 b) {
//	if (a > b)return a;
//	else return b;
//}
int& FindMax(int& a, int& b) {
	if (a > b)return a;
	else return b;
}
void Test1()
{
	const int size = 10;
	int arr[size];
}
void Test2()
{
	int size = 10;
	cin >> size;
	int *arr = new int[size];
	delete[] arr;
}
int* CreateArray(int size)
{
	int* arr = new int[size];
	return arr;
}
void InitArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<< arr[i] << " ";
	}
	cout << endl;
}
int* AddNewNumber(int* arr, int* size, int number)
{

	int* temp = new int[*size + 1];//4
	for (int i = 0; i < *size; i++)
	{
		temp[i] = arr[i];
	}
	temp[*size] = number;
	delete[]arr;
	arr = temp;
	(*size)++;
	return arr;
}
int main()
{
	int size = 3;
	//cout << "Enter size : "; cin >> size;
	int *arr = CreateArray(size);
	InitArray(arr, size);
	ShowArray(arr, size);

	int number;
	char choice = 'y';
	while (true)
	{
		cout << "Do you want to add number ? y/n....";
		choice = _getch();
		if (choice == 'n')break;

		cout << "\nEnter number : "; cin >> number;
		arr = AddNewNumber(arr, &size, number);
		//system("cls");
		ShowArray(arr, size);
	}
	delete[]arr;
	/*
	int a = 10;

	int * pa = new int(15);
	int* pb = new int;
	int* pc = nullptr;

	*pb = 5;
	pc = new int(12);

	cout << "pa = " << pa << endl;
	cout << "pb = " << pb << endl;
	cout << "pc = " << pc << endl;

	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;
	cout << "*pc = " << *pc << endl;

	delete pc;
	pc = new int(55);
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;
	cout << "*pc = " << *pc << endl;



	delete pa;
	delete pb;
	delete pc;
	*/
	/*
	//Pointers  ... Links
	int a = 5;   // variable
	int* pa = &a; // pointer
	int& la = a;  // link
	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;
	cout << "la = " << la << endl;

	int b = 10;

	int* pb = nullptr;

	pb = &b;
	int& lb = b;
	cout << "lb = " << lb << endl;
	//lb = a; error
	cout << "lb = " << lb << endl;
	cout << "a = " << a << endl;
	Change(a);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	//int &lmax = FindMax(a, b);
	//0sdd5s4 = 100;
	 FindMax(a, b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//cout << "lmax = " << lmax << endl;
   */





}

