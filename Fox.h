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
		cout << "��� ����: ";
		cin >> _name;
		do {
			cout << "��� ����: ";
			cin >> _weight;
		} while (_weight <= 0);
		do {
			cout << "������� ����: ";
			cin >> _age;
		} while (_age <= 0);
		do {
			cout << "����� �������: ";
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
		cout << "��� ����: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "��� ����: ";
		cin >> weight;
		}
		while (age <= 0)
		{
			cout << "������� ����: ";
			cin >> age;
		}
		while (number < 5 || number > 6)
		{
			cout << "����� �������: ";
			cin >> number;
		};
	}
	void PrintFox()
	{
		cout << "��� ����� - " << name << ", ��� ����� - " << weight << ", ������� ���� - " << ", ����� ������� - " << number << endl;
	}
	~Fox() {};
};