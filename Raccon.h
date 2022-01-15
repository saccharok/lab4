#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Raccon
{
private:
	std::string name;
	double weight;
	int age;
	int number;
public:
	Raccon() {};
	Raccon InitRaccon()
	{
		Raccon racExam;
		std::string _name;
		double _weight;
		int _age;
		int _number;
		cout << "Имя енота: ";
		cin >> _name;
		do {
			cout << "Вес енота: ";
			cin >> _weight;
		} while (_weight <= 0);
		do {
			cout << "Возраст енота: ";
			cin >> _age;
		} while (_age <= 0);
		_number = 7;
		racExam.name = _name;
		racExam.weight = _weight;
		racExam.age = _age;
		racExam.number = _number;
		return racExam;
	};
	void SetRaccon(std::string _name, double _weight, int _age, int _number)
	{
		name = _name;
		weight = _weight;
		age = _age;
		number = 7;
	};
	void GetRaccon()
	{
		cout << "Имя енота: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "Вес енота: ";
			cin >> weight;
		}
		while (age <= 0)
		{
			cout << "Возраст енота: ";
			cin >> age;
		}
		number = 7;
	}; 
	void PrintRaccon()
	{
		cout << "Имя лисы - " << name << ", вес лисы - " << weight << ", возраст лисы - " << ", номер вольера - " << number << endl;
	}
	~Raccon() {};
};