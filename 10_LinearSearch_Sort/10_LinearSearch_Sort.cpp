#include <iostream>
using namespace std;

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
		cout<< arr[i] << " ";
	}
}
int main()
{
	srand(time(0));
	const int size = 10;
	int arr[size];
   



}

