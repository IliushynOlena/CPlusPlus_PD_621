#include <iostream>
#include <fstream>
using namespace std;

const char* file = "D://MyHumanDatabase.txt";
struct Human
{
private:
	char name[50];
	char surname[50];
	int age;

public:
	void Show()
	{
		cout << "Name : " << name << "\nSurname : " << surname << "\nAge : " << age << endl;
	}
	void Fill()
	{
		cout << "Enter name "; cin >> name;
		cout << "Enter surname "; cin >> surname;
		cout << "Enter age "; cin >> age;
	}
	void Copy(Human h)
	{
		strcpy_s(name, h.name);
		strcpy_s(surname, h.surname);
		age = h.age;
	}
	void SaveToFile()
	{
		ofstream out(file, ios_base::app);//save to file
		out << name;
		out << ":";
		out << surname;
		out << ":";
		out << age;
		out << "|";
		out.close();
	}
	void FillFromFile(char* nameF, char* surnameF, int ageF)
	{
		strcpy_s(name,nameF);
		strcpy_s(surname, surnameF);
		age = ageF;
	}
};
int Menu()
{
	int choice;
	cout << "1. Add person" << endl;
	cout << "2. Show people" << endl;
	cout << "0. Exit" << endl;
	cin >> choice;
	return choice;
}
//enum  --> const int ADD
//enum  --> const int SHOW
//enum  --> const int EXIT
enum MENU{ EXIT, ADD , SHOW};
void AddNewHuman(Human *& arr, int &size)
{
	Human* temp = new Human[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i].Copy(arr[i]);
	}
	temp[size].Fill();
	delete[]arr;
	arr = temp;
	size++;
	arr[size - 1].SaveToFile();
}
void ShowPeople(Human* h, int size)
{
	for (int i = 0; i < size; i++)
	{
		h[i].Show();
	}
}
void ReadFromFile(Human*& arr, int& size)
{
	ifstream in(file, ios_base::in);
	char bname[250], bsurname[250], bage[250];
	while (!in.eof())
	{
		in.getline(bname, 250, ':');
		if (in.eof())break;
		in.getline(bsurname, 250, ':');
		in.getline(bage, 250, '|');
		int age = atoi(bage);
		Human readHuman;
		readHuman.FillFromFile(bname, bsurname, age);

		Human* temp = new Human[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i].Copy(arr[i]);
		}
		temp[size]=  readHuman;
		delete[]arr;
		arr = temp;
		size++;
	}
}
int main()
{
	/*Human human = {};
	human.Fill();
	human.Show();*/
	int size = 0;
	Human* people = new Human[size];

	ReadFromFile(people, size);
	bool isExit = false;

	while (!isExit)
	{
		switch (Menu())
		{
		case EXIT:isExit = true; break;
		case ADD:AddNewHuman(people, size);	break;
		case SHOW:ShowPeople(people, size);	break;
		}
	}



	delete[]people;



   //iostream    cout   cin
	//test.txt
	//test.png

	//open file
	//read file
	//write file
	//close file
	//ofstream out;//save to file
	//out.open("test.txt", ios_base::out);
	
	/*
	ofstream out("test.txt", ios_base::out);
	//ofstream out("test.txt", ios_base::app);
	if (out.is_open())
	{
		out << "Hello world ***************" << endl;
		out << "Hello world ***************" << endl;
		out << "Hello world ***************" << endl;
		out << "Hello world ***************" << endl;
		cout << "Save to file!!!" << endl;
	}
	else
	{
		cout << "File not exist" << endl;
	}	
	out.close();
	
	*/
	

	//ifstream in;//read from file
	//in.open("test.txt", ios_base::in);
	/*
	char buff[50];
	ifstream in("test.txt", ios_base::in);
	if (in.is_open())
	{
		while (!in.eof())
		{
			in.getline(buff, 50);//in >> buff;
			cout << buff << endl;
		}	

	}
	else
		cout << "File not exist!" << endl;
	in.close();
	*/



}
