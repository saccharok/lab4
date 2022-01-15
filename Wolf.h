#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Wolf
{
private:
	std::string name;
	int age;
	int number;
public:
	Wolf() {};
	Wolf InitWolf()
	{
		Wolf wolfExam;
		std::string _name;
		int _age;
		int _number;
		cout << "Имя волка: ";
		cin >> _name;
		do {
			cout << "Возраст волка: ";
			cin >> _age;
		} while (_age <= 0);
		do {
			cout << "Номер вольера: ";
			cin >> _number;
		} while (_number < 1 || _number > 2);
		wolfExam.name = _name;
		wolfExam.age = _age;
		wolfExam.number = _number;
		return wolfExam;
	};
	void SetWolf(std::string _name, int _age, int _number)
	{
		name = _name;
		age = _age;
		number = _number;
	};
	void GetWolf()
	{
		cout << "Имя волка: ";
		cin >> name;
		while (age <= 0)
		{
			cout << "Возраст волка: ";
			cin >> age;
		}
		while (number < 1 || number > 2)
		{
			cout << "Номер вольера: ";
			cin >> number;
		}
	};
	void PrintWolf()
	{
		cout << "Имя волка: " << name << ", возраст - " << age << ", номер вольера - " << number << endl;
	}
	~Wolf() {};
};