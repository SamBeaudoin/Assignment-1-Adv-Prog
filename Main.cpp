#include <iostream>
#include <string>
#include <ctime>

#include "Survey.h"
#include "GamingStudent.h"
#include "NonGamingStudent.h"

using namespace std;

int main()
{
	srand(time(0));

	Survey StudentSurvey;
	StudentSurvey.GenerateSurvey();

	// Beginning of Program

	cout << "Welcome to the Student Survey V2.01!" << endl << endl;
	cout << "This program will ask 'real' students various question like:\n"
		<< "Their Average age.\n"
		<< "Their most preferred streaming service.\n"
		<< "Their most preferred gaming device.\n"
		<< "And etc..." << endl << endl;

	cout << "How many 'students' would you like the program to interrogte.... err.... survey?" << endl;
	int UserChoice = 0;
	while (UserChoice > 500 || UserChoice < 1)
	{
		cin >> UserChoice;
		if (UserChoice > 500 || UserChoice < 1)
		{
			cout << "Please enter a number between 0 and 501" << endl;
		}
	}
	StudentSurvey.CreateParticipants(UserChoice);
	
	cout << "\n\nYou're 'Volunteers' have been gathered" << endl
		<< "Would you like to commence the questioning?" << "\n\n1 for yes" << "\n0 for no" << endl;

	int response;
	cin >> response;

	if (response == 1)
		StudentSurvey.CommenceSurvey(UserChoice);
	else
		cout << "Subjects terminated." << endl;

	return 0;
}