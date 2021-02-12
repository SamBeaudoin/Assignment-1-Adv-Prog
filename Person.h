#pragma once

#include <string>

using namespace std;

class Person
{
protected: 
	string m_name;
	int m_age;

public:
	Person(string n, int a) { m_name = n; m_age = a; };

	~Person();

	int getAge();
	virtual string getDevice() = 0;
	virtual int getHours() = 0;
	virtual bool isGamer() = 0;
};

