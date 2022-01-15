#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Bear
{
private:
	std::string name;
	double weight;
	double high;
	int age;
	int number;
public:
	Bear() {};
	Bear InitBear()
	{
		Bear bearExam;
		std::string _name;
		double _weight;
		double _high;
		int _age;
		int _number;
		cout << "Имя медведя: ";
		cin >> _name;
		do {
			cout << "Вес медведя в кг: ";
			cin >> _weight;
		} while (_weight <= 0);
		do {
			cout << "Рост медведя: ";
			cin >> _high;
		} while (_high <= 0);
		do {
			cout << "Возраст медведя: ";
			cin >> _age;
		} while (_age <= 0);
		_number = 7;
		bearExam.name = _name;
		bearExam.weight = _weight;
		bearExam.high = _high;
		bearExam.age = _age;
		bearExam.number = _number;
		return bearExam;
	};
	void SetBear(std::string _name, double _weight, double _high, int _age, int _number)
	{
		name = _name;
		weight = _weight;
		high = _high;
		age = _age;
		number = 8;
	};
	void GetBear()
	{
		cout << "Имя медведя: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "Вес медведя в кг: ";
			cin >> weight;
		}
		while (high <= 0)
		{
			cout << "Рост медведя: ";
			cin >> high;
		}
		while (age <= 0)
		{
			cout << "Возраст медведя: ";
			cin >> age;
		}
		number = 7;
	}
	void PrintBear()
	{
		cout << "Имя медведя - " << name << ", вес медведя - " << ", рост медведя - " << ", возраст медведя - " << age << ", номер вольера - " << number << endl;
	}
	~Bear() {};
};