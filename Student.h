#pragma once
#include "Person.h"
#include <string>

using namespace std;

class Student :
    public Person
{
protected:
    string m_college;
    string m_program;
    int m_currentSemester;


public:
    enum College { GB, SENECA, CENTENNIAL, HUMBER };

    Student(string n, int a, College c, string prog, int semNum) : Person(n, a)
    {
        m_college = c;
        m_program = prog;
        m_currentSemester = semNum;
    }

    ~Student();

};