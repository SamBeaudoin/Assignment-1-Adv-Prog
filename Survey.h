#pragma once
#include "GamingStudent.h"
#include "NonGamingStudent.h"

class Survey
{
public:
	string FirstNameArray[13] = { "Daenerys", "Jon", "Arya", "Sansa", "Eddard", "Khal", "Robb", "Oberyn", "Ygritte", "Tyrion", "Tormund", "Sandor", "Hodor" };
	string LastNameArray[13] = { "Targaryen", "Snow", "Stark", "Drogo", "Martell", "Martell", "Bolton", "Lannister", "Baratheon", "Clegane", "Greyjoy", "Giantsbane", "Tarly" };
	string GameDevice[4]{ "XBOX", "PLAYSTATION", "SWITCH", "PC" };
	string StreamService[4] = { "NETFLIX", "HULU", "YOUTUBE", "TWITCH" };
	
	Student* SurveyArray[500];

	Survey();
	~Survey();


	void GenerateSurvey();
	void CreateParticipants(int UserNum);
	void CommenceSurvey(int UserNum);
};

