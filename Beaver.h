#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Beaver
{
private:
	std::string name;
	double weight;
	double length;
	int number;
public:
	Beaver() {};
	Beaver InitBeaver()
	{
		Beaver beaverExam;
		std::string _name;
		double _weight;
		double _lenght;
		int _number;
		cout << "Имя бобра: ";
		cin >> _name;
		do {
			cout << "Вес бобра: ";
			cin >> _weight;
		} while (_weight <= 0);
		do {
			cout << "Длина хвоста бобра в сантиметрах: ";
			cin >> _lenght;
		} while (_lenght <= 0);
		_number = 4;
		beaverExam.name = _name;
		beaverExam.weight = _weight;
		beaverExam.length = _lenght;
		beaverExam.number = _number;
		return beaverExam;
	};
	void SetBeaver(std::string _name, double _weight, double _length, int _number)
	{
		name = _name;
		weight = _weight;
		length = _length;
		number = 4;
	};
	void GetBeaver()
	{
		cout << "Имя бобра: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "Вес бобра: ";
			cin >> weight;
		}
		while (length <= 0)
		{
			cout << "Длина хвоста бобра в сантиметрах: ";
			cin >> length;
		}
		number = 4;
	}
	void PrintBeaver()
	{
		cout << "Имя бобра - " << name << ",вес волка - " << weight << ", длина хвоста бобра в сантиметрах - " << length << ", номер вольера - " << number << endl;
	}
	~Beaver() {};
};