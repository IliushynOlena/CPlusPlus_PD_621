

#include <iostream>
using namespace std;

int showNumber(int num) {
	cout << "Num = " << num << endl;
	return num;
}

void foo(int i = 1) {
	cout << i << endl;
}
void foo1(int i = 1, int j = 1) {
	cout << i << " "<< j << endl;
}
void foo2(int c, int a = 1, int b = 2)
{
	cout << a << " " << b << " " << c << endl;
}
void Star(int count = 20)
{
	for (int i = 0; i < count; i++)
	{
		cout << "* ";
	}
	cout << endl;
}
void SomeFunction()
{
	static int a = 0;
	a++;
	cout << a << endl;
}

double multy(double x)
{
	return x * x;
}
double multy(double x, double y)
{
	return x * y;
}
double multy(double x, double y, double z)
{
	return x * y * z;
}
//double multy(double x = 1, double y = 1, double z = 1, int r = 1)
//{
//	return x * y * z * r;
//}

// Шаблони функцій
/*
int MaxElement(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
float MaxElement(float arr[], int size)
{
	float max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double MaxElement(double arr[], int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
long MaxElement(long arr[], int size)
{
	long max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
*/
template<typename T_arr>
T_arr MaxElement(T_arr arr[], int size)
{
	T_arr max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T1, typename T2>
T2 Max(T1 a, T2 b)
{
	return (a > b) ? a : b;
	/*if (a > b)
		return a;
	else
		return b;*/
}

int main()
{
	cout << "Max number " << Max(5, 8) << endl;
	cout << "Max number " << Max(3.33, 1.25) << endl;
	cout << "Max number " << Max('A', 'B') << endl;
	cout << "Max number " << Max(8, 9.89) << endl;
	/*
	cout << "Res  = " << multy(5) << endl;
	cout << "Res  = " << multy(5,6) << endl;
	cout << "Res  = " << multy(5,6,7) << endl;*/
	//cout << "Res  = " << multy(5,6,7,7) << endl;
	const int size = 10;
	int arr[size] = { 10,20,330,40,50,60,70,80,90,100 };
	float arr1[size] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1 };
	double arr2[size] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,0.0 };
	long arr3[size] = { 20l,30l,40l,50l,60l,70l,80l,90l,99l };
	char arr4[size] = { 'D','e','Y', 'i','o','P','w','@','#'};
	cout << "Max element in array : " << MaxElement(arr, size) << endl;
	cout << "Max element in array : " << MaxElement(arr1, size) << endl;
	cout << "Max element in array : " << MaxElement(arr2, size) << endl;
	cout << "Max element in array : " << MaxElement(arr3, size) << endl;
	cout << "Max element in array : " << MaxElement(arr4, size) << endl;



	/*
	SomeFunction();
	SomeFunction();
	SomeFunction();
	cout << endl;
	Star(10);
	Star(15);
	Star();
	foo(5);
	foo(7);
	foo();
	foo1(5,8);
	foo1();
	foo2(5, 5, 5);
	foo2(7,7);
	foo2(8);


	int num = showNumber(7);
	cout << "Res : " << num << endl;


	*/


}

