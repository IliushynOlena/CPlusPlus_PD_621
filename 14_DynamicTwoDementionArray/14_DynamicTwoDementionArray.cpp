#include <iostream>
#include <iomanip>
using namespace std;

void InitArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}
void ShowArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<< setw(4)<< arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-----------------------------------\n\n" << endl;
}
void FillOneRow(int* arr, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}

int** AddRowToTheEnd(int** arr, int &rows, int cols)
{
	int** temp = new int*[rows + 1];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = arr[i];
	}
	temp[rows] = new int[cols]; 
	FillOneRow(temp[rows], cols);
	delete[]arr;
	rows++;
	return temp;
}
int** AddRowByPos(int** arr, int& rows, int cols, int pos)
{
	int** temp = new int* [rows + 1];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	temp[pos] = new int[cols];
	FillOneRow(temp[pos], cols);
	for (int i = pos+1; i < rows+1; i++)
	{
		temp[i] = arr[i - 1];
	}
	delete[]arr;
	rows++;
	return temp;
}
int** AddColToTheEnd(int** arr, int rows, int &cols)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			temp[i][j] = arr[i][j];
		}
	} 
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
	for (int i = 0; i < rows; i++)
	{
		temp[i][cols] = 5;
	}
	cols++;
	return temp;
}
int** DeleteRow(int** arr, int &rows, int cols)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < rows-1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr[rows-1];
	delete[]arr;
	rows--;
	return temp;
}
int main()
{
   
	 //int *arr = new int[8];
	 //delete[]arr;
	 int rows = 3;
	 int cols = 4;
	 //cout << "Enter count rows "; cin >> rows;
	 //cout << "Enter count rows "; cin >> cols;
	 int** arr = new int* [rows];
	 for (int i = 0; i < rows; i++)
	 {
		 arr[i] = new int[cols];
	 } 
	 InitArray(arr, rows, cols);
	 ShowArray(arr, rows, cols);

	 arr = AddRowToTheEnd(arr, rows, cols);
	 ShowArray(arr, rows, cols);
	 arr = AddRowToTheEnd(arr, rows, cols);
	 ShowArray(arr, rows, cols);

	 arr = AddRowByPos(arr, rows, cols, 2);
	 ShowArray(arr, rows, cols);

	 arr = AddColToTheEnd(arr, rows, cols);
	 ShowArray(arr, rows, cols);

	 arr = DeleteRow(arr, rows, cols);
	 ShowArray(arr, rows, cols);
	 arr = DeleteRow(arr, rows, cols);
	 ShowArray(arr, rows, cols);

	 for (int i = 0; i < rows; i++)
	 {
		 delete [] arr[i];
	 }
	 delete[]arr;
}
