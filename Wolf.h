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
		cout << "��� �����: ";
		cin >> _name;
		do {
			cout << "������� �����: ";
			cin >> _age;
		} while (_age <= 0);
		do {
			cout << "����� �������: ";
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
		cout << "��� �����: ";
		cin >> name;
		while (age <= 0)
		{
			cout << "������� �����: ";
			cin >> age;
		}
		while (number < 1 || number > 2)
		{
			cout << "����� �������: ";
			cin >> number;
		}
	};
	void PrintWolf()
	{
		cout << "��� �����: " << name << ", ������� - " << age << ", ����� ������� - " << number << endl;
	}
	~Wolf() {};
};