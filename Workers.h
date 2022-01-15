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
			cout << "������� ������� ����������: ";
			cin >> _lastName;
			cout << "������� ��� ����������";
			cin >> _name;
			cout << "������� �������� ����������";
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
			cout << "������� ������� ����������: ";
			cin >> lastName;
			cout << "������� ��� ����������";
			cin >> name;
			cout << "������� �������� ����������";
			cin >> patronymic;
		}
		void PrintName()
		{
			cout << "��� ���������� - " << lastName << " " << name << " " << patronymic << endl;
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
			cout << "��� ����������: ";
			cin >> _code;
		} while (_code < 100000 || _code > 999999);
		do {
			cout << "����� �������: ";
			cin >> _number;
		} while (_number < 1 || _number > 7);
		do {
			cout << "���������� �����: ";
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
			cout << "��� ����������: ";
			cin >> code;
		}
		while (number < 1 || number > 7)
		{
			cout << "����� �������: ";
			cin >> number;
		}
		while (payroll <= 8000)
		{
			cout << "���������� �����: ";
			cin >> payroll;
		}
		
	};
	void PrintWorker()
	{
		name.PrintName();
		cout << "��� ����������: " << code << "����� �������: " << number << "���������� �����: " << payroll << endl;
	};
	~Workers() {};
};