#include "NonGamingStudent.h"

NonGamingStudent::~NonGamingStudent()
{
}

string NonGamingStudent::getDevice()
{
    return m_streamService;
}

int NonGamingStudent::getHours()
{
    return m_timeSpent;
}

bool NonGamingStudent::isGamer()
{
    return m_isGamer;
}
