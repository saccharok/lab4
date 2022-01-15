#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Workers
{
public:
	class Name
	{
	private:
		std::string lastName;
		std::string name;
		std::string patronymic;
	public:
		Name() {};
		Name InitName()
		{
			Name nameExam;
			std::string _lastName, _name, _patronymic;
			cout << "Введите фамилию сотрудника: ";
			cin >> _lastName;
			cout << "Введите имя сотрудника";
			cin >> _name;
			cout << "Введите отчество сотрудника";
			cin >> _patronymic;
			nameExam.lastName = _lastName;
			nameExam.name = _name;
			nameExam.patronymic = _patronymic;
			return nameExam;
		};
		void SetName(std::string _lastName, std::string _name, std::string _patronymic)
		{
			lastName = _lastName;
			name = _name;
			patronymic = _patronymic;
		}
		void GetName()
		{
			cout << "Введите фамилию сотрудника: ";
			cin >> lastName;
			cout << "Введите имя сотрудника";
			cin >> name;
			cout << "Введите отчество сотрудника";
			cin >> patronymic;
		}
		void PrintName()
		{
			cout << "ФИО сотрудника - " << lastName << " " << name << " " << patronymic << endl;
		}
		~Name() {};
	} name;
private:
	int code;
	int number;
	int payroll;
public:
	Workers() {};
	Workers InitWorker()
	{
		Workers workerExam;
		Name _name;
		int _code;
		int _number;
		int _payroll;
		_name.InitName();
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
		workerExam.name = _name;
		workerExam.code = _code;
		workerExam.number = _number;
		workerExam.payroll = _payroll;
		return workerExam;
	};
	void SetWorker(Name _name, int _code, int _number, int _payroll)
	{
		name = _name;
		code = _code;
		number = _number;
		payroll = _payroll;
	};
	void GetWorker()
	{
		name.GetName();
		while (code < 100000 || code > 999999)
		{
			cout << "Код сотрудника: ";
			cin >> code;
		}
		while (number < 1 || number > 7)
		{
			cout << "Номер вольера: ";
			cin >> number;
		}
		while (payroll <= 8000)
		{
			cout << "Заработная плата: ";
			cin >> payroll;
		}
		
	};
	void PrintWorker()
	{
		name.PrintName();
		cout << "Код сотрудника: " << code << "Номер вольера: " << number << "Заработная плата: " << payroll << endl;
	};
	~Workers() {};
};