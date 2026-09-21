
#include <iostream>
using namespace std;

int Foo(int a)
{
	if (a == 0) {
		return 0;//break;
	}
	cout << "Hello " << a << endl;
	a--;
	 Foo(a);
}

int Summa(int arr[], int size, int index)
{
	if (index == size - 1)
		return arr[index];
	// return 5 * 5 * 5 * 5  *5 step = 0
	return arr[index] + Summa(arr, size, index + 1);
}
//summa = Summa(arr, size, 0);
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
		cout << arr[i] << " ";
	cout << endl;
}
void QuickSort(int arr[], int size,int B, int E)
{
	int i = B, j = E;
	int temp, p;
	p = arr[(B + E) / 2];
	do
	{
		while (arr[i] < p)i++;
		while (arr[j] > p)j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}		
	} while (i <= j);
	if (B < j)QuickSort(arr, size, B, j);
	if (i < E)QuickSort(arr, size, i, E);

}
int BinarySearch(int arr[], int size, int key) //16
{
	int B = 0, E = size - 1;
	while (true)
	{
		//B = 0, E = 9
		//1 5 7 8 9 15 16 21 47 53 
		// //B = 5, E = 6
		// 15 16 21 47 53 
		int p = (B + E) / 2;
		//p = 7
		if (key > arr[p])
		{
			B = p + 1;
		}
		else if (key < arr[p])
		{
			E = p - 1;
		}
		else if (key == arr[p])
			return p;
		if (B > E) return -1;
	}
}
int main()
{
	Foo(10);
	cout << Foo << endl;
	//Пошук суми елементів масиву. 
	const int size = 100;
	int arr[size] = { 1,8,7,4,5,6,3,10,14,9 };
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		summa += arr[i];
	}
	cout << endl;
	cout << "Summa = "<< summa<<  endl;
	summa = Summa(arr, size, 0);
	cout << "Summa = " << summa << endl;
	////Швидке сортування
	InitArray(arr, size);
	ShowArray(arr, size);
	QuickSort(arr, size,0, size-1);
	ShowArray(arr, size);
	
	int searchKey, indexFind;
	cout << "Enter search key --> ";
	cin >> searchKey;
	indexFind = BinarySearch(arr, size, searchKey);
	if (indexFind != -1)
	{
		cout << "Element [" << searchKey << "] find in index ["
			<< indexFind << "]" << endl;
	}
	else
	{
		cout << "Element " << searchKey << " not found " << endl;
	}




}

