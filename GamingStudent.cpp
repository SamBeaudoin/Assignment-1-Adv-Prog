#include "GamingStudent.h"

#include <string>

using namespace std;

GamingStudent::~GamingStudent()
{
}

string GamingStudent::getDevice()
{
	return m_gameDevice;
}

int GamingStudent::getHours()
{
	return m_hoursWasted;
}

bool GamingStudent::isGamer()
{
	return m_isGamer;
}
