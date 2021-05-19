#include <iostream>

using namespace std;

int main (int argc, char** argv){
	
	/* 4.- Dise�ar el algoritmo que me permita determinar la hora de llegada de un estudiante a su universidad, sabiendo que
parte a las H horas, M minutos y S segundos, y el tiempo que demora el trayecto esta dada en T minutos. */

	int hoursOfStart, minutesOfStart, secondsOfStart, timeOfTheTrip;

	cout << "ingrese la hora de partida" << endl;
	cin >> hoursOfStart;

	cout << "ingrese los minutos de partida" << endl;
	cin >> minutesOfStart;

	cout << "ingrese los segundos de partida" << endl;
	cin >> secondsOfStart;

	cout << "ingrese los minutos que se tardo" << endl;
	cin >> timeOfTheTrip;

	const int convertEverythingToSeconds = (hoursOfStart * 3600) + (minutesOfStart * 60) + secondsOfStart + (timeOfTheTrip * 60);

	const int totalOfHours = convertEverythingToSeconds / 3600;

	const int residueOfHours = convertEverythingToSeconds % 3600;

	const int totalOfMinutes = residueOfHours / 60; //find and convert seconds to minutes through the residueOfHours

	const int residueOfMinutes = residueOfHours % 60;

	const int totalOfSeconds = residueOfMinutes;

	cout << "la hora de llegada es: " << totalOfHours << ":" << totalOfMinutes << ":" << totalOfSeconds << endl;

	
	system("PAUSE");
	return 0;
}
