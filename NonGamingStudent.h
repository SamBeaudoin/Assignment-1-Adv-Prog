#pragma once
#include "Student.h"
#include "Survey.h"
#include <string>

using namespace std;

class NonGamingStudent :
    public Student
{
private:
    string m_streamService;
    int m_timeSpent;
    bool m_isGamer = false;

public:

    NonGamingStudent(string n, int a, College c, string prog, int semNum, string sS, int time) : Student(n, a, c, prog, semNum)
    {
        m_streamService = sS;
        m_timeSpent = time;

    }

    ~NonGamingStudent();

    virtual string getDevice();
    virtual int getHours();
    virtual bool isGamer();

};