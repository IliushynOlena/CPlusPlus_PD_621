
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	srand(time(0));

	int a;
	a = rand();//0.....32767
	cout << a << endl;
	a = rand()%10;//0...9
	cout << a << endl;
	a = rand()%100;//0..99
	cout << a << endl;
	a = rand()%10;
	cout << a << endl;

	for (int i = 0; i < 25; i++)
	{
		a = rand() % 10;//0....9
		cout << a << " ";
	}
	cout << endl;
	for (int i = 0; i < 25; i++)
	{
		a = rand() % 100;//0...99
		cout << a << " ";
	}
	cout << endl;
	for (int i = 0; i < 25; i++)
	{
		a = rand() % 100 + 1;//0...99 + 1
		cout << a << " ";
	}
	cout << endl;
	// 0.....x   rand()%x


	//   10 ..... 90
	for (int i = 0; i < 25; i++)
	{
		//rand() % 90   0....89
		a = 10 +  rand() % 90;
		cout << a << " ";
	}
	cout << endl;

	//marks --- 8 ... 12 
	//   12 - 8 = 4   rand()%4   0...7   + 8
	for (int i = 0; i < 25; i++)
	{
		//rand() % 90   0....89
		a = rand() % 5 + 8;
		cout << a << " ";
	}
	cout << endl;

	//32767 %10 === 7
	//32766 %10 === 6
	//32761 %10 === 1
	//32762 %10 === 2
	//32763 %10 === 3
	//32764 %10 === 4
	//32765 %10 === 2
	//32768 %10 === 8
	//32769 %10 === 9
	//32770 %10 === 0

	//555 % 10 = 5
	//556 % 10 = 6
	//557 % 10 = 7
	//558 % 10 = 8
	cout << "----------------------------" << endl;
	const int size = 100;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100+1; 
		cout << arr[i] << " ";
	}


	cout << " \n------------ Two demention array -------------" << endl;
	const int rows = 4;//рядки (номер поверху)
	const int cols = 5;//колонки  (номер квартири)
	int array[rows][cols]{};

	int max;
	for (int i = 0; i < rows; i++)
	{
		max = array[i][0];
		for (int j = 0; j < cols; j++)
		{
			array[i][j] = rand() % 100;
			cout << left<< setw(4)<< array[i][j]<< " ";
			if (array[i][j] > max)
			{
				max = array[i][j];
			}
		}
		cout << "Max element in " << i << " row is --> " << max;
		cout << endl;
	}
	cout << endl;
	//int array1[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	//int array1[3][3] = { {1,2,3}, {4,5,6} };
	//int array1[3][3] = { {1}, {4,5} , {1,1,1} };
	int array1[3][3] = { 1 ,4 ,5, 1,1,1 ,2,2,2};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}



}

