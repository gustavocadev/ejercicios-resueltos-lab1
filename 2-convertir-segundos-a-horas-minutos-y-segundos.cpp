#include <iostream>

using namespace std;

int main (int argc, char** argv){
/*
2.- Diseñe el programa que permita ingresar una
cierta cantidad de segundos y muestre como
resultado Horas Minutos y segundos.
*/

  cout << "programa para convertir de segudndos a hora, minutos y segundos" << endl;
  int totalOfSeconds;
  cout << "ingrese los segundos" << endl;
  cin >> totalOfSeconds; 

  int hours = totalOfSeconds / 3600;
  int hoursRemainder = totalOfSeconds % 3600;

  int minutes = hoursRemainder / 60;
  int minutesRemainder = hoursRemainder % 60;

  int seconds = minutesRemainder;

  cout << "horas: " << hours << " : minutos: " << minutes << ": segundos: " << seconds << endl;
	
	system("PAUSE");
	return 0;
}
