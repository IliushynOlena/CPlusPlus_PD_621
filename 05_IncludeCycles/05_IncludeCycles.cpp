#include <iostream>
using namespace std;

int main()
{



	/* for (int i = 1; i <= 10; i++)
	 {
		 for (int j = 1; j <= 10; j++)
		 {
			 cout << i << " * " << j << " = " << i * j << endl;
		 }
		 cout << "\n______________________________\n";
	 }*/

	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//int count_star;
	//int lenght = 10;

	//int star_lines = 1;
	//while (star_lines <= lenght)
	//{
	//	count_star = 1;
	//	while (count_star <= lenght)
	//	{
	//		cout << "* ";
	//		count_star++;
	//	}
	//	cout << endl;
	//	star_lines++;
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << " +";
	//	}
	//	cout << endl;
	//}
	////main axis
	//for (int i = 0; i < 15; i++)
	//{
	//	for (int j = 0; j < 15; j++)
	//	{
	//		if (i == j)
	//		{
	//			cout << "= ";
	//		}
	//		else
	//		{
	//			cout << "+ ";
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << endl;



	//for (int i = 0; i < 15; i++)
	//{
	//	for (int j = 0; j < 15; j++)
	//	{
	//		if (i + j == 15-1)
	//		{
	//			cout << "= ";
	//		}
	//		else
	//		{
	//			cout << "+ ";
	//		}
	//	}
	//	cout << endl;
	//}





	//int N = 10;
	//for (int i = 0; i < N; i++)
	//{
	//	for (int j = 0; j < N; j++)
	//	{
	//		
	//		if (i >= j && i+j >= N-1)
	//		{
	//			cout << "|===|";
	//		}
	//		else
	//		{
	//			cout << "     ";
	//		}
	//	
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < 7; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		cout << "|###|";
	//	}
	//	cout << endl;
	//}

	int N = 11;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i>= j && i + j > N - 1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}

	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cout << "|###|";
		}
		cout << endl;
	}
	cout << endl;

}
