#include "Survey.h"
#include "GamingStudent.h"
#include "NonGamingStudent.h"
#include <iostream>

Survey::Survey()
{
}

Survey::~Survey()
{
}

void Survey::GenerateSurvey()
{
	for (int i = 0; i < 500; i++)
	{
		*(SurveyArray + i) = nullptr;
	}
}

void Survey::CreateParticipants(int UserNum)
{

	for (int i = 0; i < UserNum; i++)
	{
		int random = (rand() % 60);
		if (random % 2 == 0)
			SurveyArray[i] = new GamingStudent(FirstNameArray[rand() % 13] + " " + LastNameArray[rand() % 13], (17 + rand() % 20), Student::College(rand() % 4),
				"Computer Science", 1, GameDevice[0 + rand() % 4], (5 + rand() % 40));
		else
		{
			SurveyArray[i] = new NonGamingStudent(FirstNameArray[rand() % 13] + " " + LastNameArray[rand() % 13], (17 + rand() % 15), Student::College(rand() % 4),
				"Computer Science", 1, StreamService[(rand() % 4)], (2 + rand() % 40));
		}
	}
}

void Survey::CommenceSurvey(int UserNum)
{
	int numGamers = 0;
	int numNGamers = 0;
	int ageAvgGamer = 0;
	int ageAvgNGamer = 0;

	string streamService;
	int device1 = 0, device2 = 0, device3 = 0, device4 = 0;

	string gameDevice;
	int Gdevice1 = 0, Gdevice2 = 0, Gdevice3 = 0, Gdevice4 = 0;

	int hoursAvgGamer = 0;
	int hoursAvgNGamer = 0;

	for (int i = 0; i < 500; i++)
	{
		if (SurveyArray[i] != nullptr)
		{
			if (SurveyArray[i]->isGamer())	// IsGamer = true
			{
				numGamers++;	// Number of gamers
				ageAvgGamer += SurveyArray[i]->getAge();	// total of all ages combined to be later divided by Number of gamers
				hoursAvgGamer += SurveyArray[i]->getHours();	// total of all hours "" "" ..... same

				if (SurveyArray[i]->getDevice() == "XBOX")		// All Possible  XBOX, PLAYSTATION, SWITCH, PC 
					Gdevice1++;
				if (SurveyArray[i]->getDevice() == "PLAYSTATION")		
					Gdevice2++;
				if (SurveyArray[i]->getDevice() == "SWITCH")
					Gdevice3++;
				if (SurveyArray[i]->getDevice() == "PC")
					Gdevice4++;
					
			}
			if (!SurveyArray[i]->isGamer()) // IsGamer = not true
			{
				numNGamers++;	// Number of Non-Gamers
				ageAvgNGamer += SurveyArray[i]->getAge();	// total of all ages combined to be later divided by Number of non-gamers
				hoursAvgNGamer += SurveyArray[i]->getHours();	// total of all hours "" "" ..... same

				if (SurveyArray[i]->getDevice() == "NETFLIX")		// All Possible  NETFLIX, HULU, YOUTUBE, TWITCH 
					device1++;
				if (SurveyArray[i]->getDevice() == "HULU")
					device2++;
				if (SurveyArray[i]->getDevice() == "YOUTUBE")
					device3++;
				if (SurveyArray[i]->getDevice() == "TWITCH")
					device4++;

			}

		}
	}

	if (Gdevice1 == Gdevice2 || Gdevice2 == Gdevice3 || Gdevice3 == Gdevice4 || Gdevice1 == Gdevice4 || Gdevice2 == Gdevice4) // in case of tie
		gameDevice = "There was a tie, The Console wars rage on.";
	if (Gdevice1 > Gdevice2 && Gdevice1 > Gdevice3 && Gdevice1 > Gdevice4)	// if Device 1 is most popular
		gameDevice = "Xbox";
	else if (Gdevice2 > Gdevice1 && Gdevice2 > Gdevice3 && Gdevice2 > Gdevice4)
		gameDevice = "Playstation";
	else if (Gdevice3 > Gdevice1 && Gdevice3 > Gdevice2 && Gdevice3 > Gdevice4)
		gameDevice = "Nintendo Switch";
	else if (Gdevice4 > Gdevice1 && Gdevice4 > Gdevice2 && Gdevice4 > Gdevice3)
		gameDevice = "PC Master Race";

	if (device1 == device2 || device2 == device3 || device3 == device4 || device1 == device4 || device2 == device4)	// in case of tie
		streamService = "There was a tie, don't forget to like, comment, and subscribe";
	if (device1 > device2 && device1 > device3 && device1 > device4)	// if Device 1 is most popular
		streamService = "Netflix";
	else if (device2 > device1 && device2 > device3 && device2 > device4)
		streamService = "Hulu";
	else if (device3 > device1 && device3 > device2 && device3 > device4)
		streamService = "YouTube";
	else if (device4 > device1 && device4 > device2 && device4 > device3)
		streamService = "Twitch";



	cout << "\n\nThe results of your survey are as follows:\n\n" << endl;

	cout << "The number of gaming students is: " << numGamers << endl;
	cout << "Their average number of hours gaming per week is: " << (hoursAvgGamer / numGamers) << endl;
	cout << "The average age of gaming students is: " << (ageAvgGamer / numGamers) << endl;
	cout << "The most preffered gaming device was: " << gameDevice << endl << endl << endl;

	cout << "The number of non-gaming students is: " << numNGamers << " and that's just a shame really. " << endl;
	cout << "The average number of hours spent consuming non-gaming entertainment: " << (hoursAvgNGamer / numNGamers) << endl;
	cout << "The average age of non-gaming students is: " << (ageAvgNGamer / numNGamers) << endl;
	cout << "Their most preffered streaming service was: " << streamService << endl;

}
