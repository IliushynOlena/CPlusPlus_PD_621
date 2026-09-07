#include <iostream>
using namespace std;

int main()
{
	//const int USA = 1;
	//const int France = 33;
	//const int Ukraine = 380;
	//const int Italy = 39;
	//const int Australia = 61;


	////enum (const int) - це набір іменованих цілочисельних констант.
	//enum countries { USA = 1 , France = 33, Ukraine = 380,
	//	Italy = 39, Australia = 61};
	//cout << USA << endl;
	//cout << Ukraine << endl;
	////USA = 15; - const variable

	enum coins {penny = 1, nickel = 5, dime = 10,
	quarter = 25, half = 50, dollar_coin = 100};

	enum genres{ Comedy, Fantasy, Novel, Opovidania, FairyTales};

	//int a;
	//genres genre;
	//genre = Comedy;

	//string g;
	//g = "Comedy";
	//g = "Novel";
	//g = "Opovidania";
	//g = "Blablablabla";
	//g = "superpuperbook";





	//cout << Comedy << endl;
	//cout << Fantasy << endl;
	//cout << Novel << endl;
	//cout << Opovidania << endl;
	//cout << FairyTales << endl;
	//int coin;
	//cout << "Enter value of American coin : ";
	//cin >> coin;
	//switch (coin)
	//{
	//case penny:cout << "Penny is 1 cent" << penny << endl;break;
	//case nickel:cout << "Nickel is 5 cent" << endl;	break;
	//case dime:cout << "Dime is 10 cent" << endl;break;
	//case quarter:cout << "Quarter is 25 cent" << endl;break;
	//case half:cout << "Half is 50 cent" << endl;break;
	//case dollar_coin:cout << "dollar_coin is 100 cent" << endl;break;
	//default:cout << "Unknown coin" << endl;	break;
	//}


	//while (true)//Цикл з передумовою
	//{

	//}
	//do//Цикл з постумовою
	//{

	//} while (true);
	//for (size_t i = 0; i < length; i++)Цикл з параметрами
	//{

	//}
	int counter = 20;
	while (counter < 15)
	{
		++counter;//increment
		cout << "I did " << counter << " set of squats." << endl;
	}

	int seats = 20;
	do
	{
		++seats;//increment
		cout << "I did " << seats << " set of squats." << endl;

	} while (seats < 15);



	float a, b, res;
	char key;
	/*
	cout << "Enter a : "; cin >> a;
	cout << "Enter b : "; cin >> b;
	cout << "\tChoose the operation : " << endl;;
	cout << " [+] - add number" << endl;
	cout << " [-] - sub number" << endl;
	cout << " [*] - multy number" << endl;
	cout << " [/] - div number" << endl;
	cout << " [e] - exit" << endl;
	cin >> key;
	//Ctrl+A Ctrl+K Ctrl + F - formatting
	
	while (key != 'e')
	{
		switch (key)
		{
		case 'e':
			cout << "Have a nice day!!! Goodbye" << endl;
			break;

		default:
			cout << "Error choice!!!!" << endl;
			break;
		case '+':
			res = a + b;
			cout << "Resualt = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << "Resualt = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << "Resualt = " << res << endl;
			break;
		case '/':
			res = a / b;
			cout << "Resualt = " << res << endl;
			break;
		}
		cout << "Enter a : "; cin >> a;
		cout << "Enter b : "; cin >> b;
		cout << "\tChoose the operation : " << endl;;
		cout << " [+] - add number" << endl;
		cout << " [-] - sub number" << endl;
		cout << " [*] - multy number" << endl;
		cout << " [/] - div number" << endl;
		cout << " [e] - exit" << endl;
		cin >> key;
	}
	*/
	/*
	do
	{
	
		cout << " [+] - add number" << endl;
		cout << " [-] - sub number" << endl;
		cout << " [*] - multy number" << endl;
		cout << " [/] - div number" << endl;
		cout << " [e] - exit" << endl;
		cout << "\tChoose the operation : ";
		cin >> key;
		cout << "Enter a : "; cin >> a;
		cout << "Enter b : "; cin >> b;
		switch (key)
		{
		case 'e':
			cout << "Have a nice day!!! Goodbye" << endl;
			break;

		default:
			cout << "Error choice!!!!" << endl;
			break;
		case '+':
			res = a + b;
			cout << "Resualt = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << "Resualt = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << "Resualt = " << res << endl;
			break;
		case '/':
			res = a / b;
			cout << "Resualt = " << res << endl;
			break;
		}

	} while (key != 'e');



	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	int i;
	for (i = 1; i <=10 ; i+=2)
	{
		cout << i << " ";
	}
	cout << endl;
	float x = 1;
	for (; x <= 2; x+=0.2)
	{
		cout << x << " ";
	}
	cout << endl;
	for (int i = 0; i < 5;   )
	{
		cout << i << " "; 
		i++;
	}
	cout << endl;
	for (int i = 0; ; i++)
	{
		cout << i << " ";
		if (i == 5)
			break;
	}

	int magicNumber = 2;
	cout << "\n===============================" << endl;
	cout << "\tMy magic number between 1 and 10" << endl;
	cout << "===============================" << endl;
	int user = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Your number ??? --> ";
		cin >> user;
		if (user == magicNumber)
		{
			cout << "Congratulation!!! You are winner!!!!" << endl;
			break;
		}
		else
		{
			cout << "That's not my number!!!" << endl;
		}

		if (i == 5) {
			cout << "You lose! Try againg later!!!" << endl;
		}

	}
		*/

	//3.Дано N (N>0). Вводяться N чисел. 
	// Знайти суму парних серед цих чисел. - while

	int count_numbers;//7
	cout << "Enter count numbers ";
	cin >> count_numbers;
	int i = 0;
	int number;
	int summa = 0;
	while (i < count_numbers)
	{
		i++;
		cout << "Enter " << i << " number : ";
		cin >> number;
		if (number %2 == 0)
			summa += number;
	}
	cout << "Summa numbers = " << summa << endl;







}

