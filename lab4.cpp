// lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "Workers.h"
#include "Wolf.h"
#include "Beaver.h"
#include "Fox.h"
#include "Raccon.h"
#include "Bear.h"
using namespace std;

std::string GetNameAnimal();
int GetAgeAnimal();
int GetNumWolf();
int GetNumFox();
double GetWeightAnimal();
double GetLenghtBeav();
double GetHighBear();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
menu:
	system("cls");
	cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
	cout << "1 " << "Волки" << endl;
	cout << "2 " << "Бобры" << endl;
	cout << "3 " << "Лисы" << endl;
	cout << "4 " << "Еноты" << endl;
	cout << "5 " << "Медведи" << endl << endl;
	cout << "Сотрудники - 6" << endl << endl;
	cout << "Выход из программы - 7" << endl;
	int check = 0;
	while (check < 1 || check > 7)
	{
		cin >> check;
		cout << endl;
	};
	if (check == 1)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Волки" << endl << endl;
		Wolf wolf1;
		wolf1.GetWolf();
		Wolf wolf2;
		wolf2 = wolf2.InitWolf();
		std::string _nameW;
		_nameW = GetNameAnimal();
		int _ageW;
		_ageW = GetAgeAnimal();
		int _numW;
		_numW = GetNumWolf();
		Wolf wolf3;
		wolf3.SetWolf(_nameW, _ageW, _numW);
		wolf1.PrintWolf();
		wolf2.PrintWolf();
		wolf3.PrintWolf();
		char c = ' ';
		do {
			cout << endl << "Намжите Enter для возвращения в меню." << endl;
			cin >> c;
		} while (c != 32);
		goto menu;
	}
	else if (check == 2)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Бобры" << endl << endl;
		Beaver beaver1;
		beaver1.GetBeaver();
		Beaver beaver2;
		beaver2.InitBeaver();
		std::string _nameBeav;
		_nameBeav = GetNameAnimal();
		double _weightBeav;
		_weightBeav = GetWeightAnimal();
		double _lenghtBeav;
		_lenghtBeav = GetLenghtBeav();
		int _numberBeav;
		_numberBeav = 4;
		Beaver beaver3;
		beaver3.SetBeaver(_nameBeav, _weightBeav, _lenghtBeav, _numberBeav);
		beaver1.PrintBeaver();
		beaver2.PrintBeaver();
		beaver3.PrintBeaver();
		char c = ' ';
		do {
			cout << endl << "Намжите Enter для возвращения в меню." << endl;
			cin >> c;
		} while (c != 32);
		goto menu;
	}
	else if (check == 3)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Лисы" << endl << endl;
		Fox fox1;
		fox1.GetFox();
		Fox fox2;
		fox2.InitFox();
		std::string _nameF;
		_nameF = GetNameAnimal();
		double _weightF;
		_weightF = GetWeightAnimal();
		int _ageF;
		_ageF = GetAgeAnimal();
		int _numberF;
		_numberF = GetNumFox();
		Fox fox3;
		fox3.SetFox(_nameF, _weightF, _ageF, _numberF);
		fox1.PrintFox();
		fox2.PrintFox();
		fox3.PrintFox();
		char c = ' ';
		do {
			cout << endl << "Намжите Enter для возвращения в меню." << endl;
			cin >> c;
		} while (c != 32);
		goto menu;
	}
	else if (check == 4)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Еноты" << endl << endl;
		Raccon rac1;
		rac1.GetRaccon();
		Raccon rac2;
		rac2.InitRaccon();
		std::string _nameR;
		_nameR = GetNameAnimal();
		double _weightR;
		_weightR = GetWeightAnimal();
		int _ageR;
		_ageR = GetAgeAnimal();
		int _numR;
		_numR = 7;
		Raccon rac3;
		rac3.SetRaccon(_nameR, _weightR, _ageR, _numR);
		rac1.PrintRaccon();
		rac2.PrintRaccon();
		rac3.PrintRaccon();
		char c = ' ';
		do {
			cout << endl << "Намжите Enter для возвращения в меню." << endl;
			cin >> c;
		} while (c != 32);
		goto menu;
	}
	else if (check == 5)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Медведи" << endl << endl;
		Bear bear1;
		bear1.GetBear();
		Bear bear2;
		bear2.InitBear();
		std::string _nameBear;
		_nameBear = GetNameAnimal();
		double _weightBear;
		_weightBear = GetWeightAnimal();
		double _highBear;
		_highBear = GetHighBear();
		int _ageBear;
		_ageBear = GetAgeAnimal();
		int _numberBear = 7;
		Bear bear3;
		bear3.SetBear(_nameBear, _weightBear, _highBear, _ageBear, _numberBear);
		char c = ' ';
		do {
			cout << endl << "Намжите Enter для возвращения в меню." << endl;
			cin >> c;
		} while (c != 32);
		goto menu;
	}
	else if (check == 6)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Сотрудники" << endl << endl;
		Workers worker1;
		worker1.GetWorker();
		Workers worker2;
		worker2.InitWorker();
		Workers::Name name1;
		std::string _lastName, _name, _patronymic;
		cout << "Введите фамилию сотрудника: ";
		cin >> _lastName;
		cout << "Введите имя сотрудника";
		cin >> _name;
		cout << "Введите отчество сотрудника";
		cin >> _patronymic;
		name1.SetName(_lastName, _name, _patronymic);
		Workers worker3;
		int _code;
		int _number;
		int _payroll;
		do {
			cout << "Код сотрудника: ";
			cin >> _code;
		} while (_code < 100000 || _code > 999999);
		do {
			cout << "Номер вольера: ";
			cin >> _number;
		} while (_number < 1 || _number > 7);
		do {
			cout << "Заработная плата: ";
			cin >> _payroll;
		} while (_payroll <= 8000);
		worker3.SetWorker(name1, _code, _number, _payroll);
		cout << "Кратко:" << endl;
		worker1.name.PrintName();
		worker2.name.PrintName();
		worker3.name.PrintName();
		char c = ' ';
		do {
			cout << endl << "Намжите Enter для возвращения в меню." << endl;
			cin >> c;
		} while (c != 32);
		goto menu;
	}
	else exit(1);
}

std::string GetNameAnimal()
{
	std::string name;
	cout << "Имя животного: ";
	cin >> name;
	return name;
}

int GetAgeAnimal()
{
	int age;
	do {
		cout << "Возраст животного: ";
		cin >> age;
	} while (age <= 0);
	return age;
}

int GetNumWolf()
{
	int n;
	do {
		cout << "Номер вольера: ";
		cin >> n;
	} while (n < 1 || n > 2);
	return n;
}

int GetNumFox()
{
	int n;
	do {
		cout << "Номер вольера: ";
		cin >> n;
	} while (n < 5 || n > 6);
	return n;
}

double GetWeightAnimal()
{
	double w;
	do {
		cout << "Вес животного в кг: ";
		cin >> w;
	} while (w <= 0);
	return w;
}

double GetLenghtBeav()
{
	double l;
	do {
		cout << "Длина хвоста бобра: ";
		cin >> l;
	} while (l <= 0);
	return l;
}

double GetHighBear()
{
	double h;
	do {
		cout << "Рост медведя: ";
		cin >> h;
	} while (h <= 0);
	return h;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
