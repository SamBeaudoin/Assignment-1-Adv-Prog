#pragma once
#include "Student.h"
#include "Survey.h"
#include <string>

using namespace std;

class GamingStudent :
    public Student
{
private:
    string m_gameDevice;
    int m_hoursWasted;
    bool m_isGamer = true;

public:


    GamingStudent(string n, int a, College c, string prog, int semNum, string g, int time) : Student(n, a, c, prog, semNum)
    {
        m_gameDevice = g;
        m_hoursWasted = time;

    }

    ~GamingStudent();

    virtual string getDevice();
    virtual int getHours();
    virtual bool isGamer();
};

