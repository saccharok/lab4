#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Fox
{
private:
	std::string name;
	double weight;
	int age;
	int number;
public:
	Fox() {};
	Fox InitFox()
	{
		Fox foxExam;
		std::string _name;
		double _weight;
		int _age;
		int _number;
		cout << "Имя лисы: ";
		cin >> _name;
		do {
			cout << "Вес лисы: ";
			cin >> _weight;
		} while (_weight <= 0);
		do {
			cout << "Возраст лисы: ";
			cin >> _age;
		} while (_age <= 0);
		do {
			cout << "Номер вольера: ";
			cin >> _number;
		} while (_number < 5 || _number > 6);
		foxExam.name = _name;
		foxExam.weight = _weight;
		foxExam.age = _age;
		foxExam.number = _number;
		return foxExam;
	};
	void SetFox(std::string _name, double _weight, int _age, int _number)
	{
		name = _name;
		weight = _weight;
		age = _age;
		number = _number;
	};
	void GetFox()
	{
		cout << "Имя лисы: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "Вес лисы: ";
		cin >> weight;
		}
		while (age <= 0)
		{
			cout << "Возраст лисы: ";
			cin >> age;
		}
		while (number < 5 || number > 6)
		{
			cout << "Номер вольера: ";
			cin >> number;
		};
	}
	void PrintFox()
	{
		cout << "Имя бобра - " << name << ", вес волка - " << weight << ", возраст лисы - " << ", номер вольера - " << number << endl;
	}
	~Fox() {};
};