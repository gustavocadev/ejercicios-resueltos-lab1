#include <iostream>

using namespace std;

int main (int argc, char** argv){
	/*
5) Un maestro desea saber que porcentaje de hombres y que
porcentaje de mujeres hay en un grupo de estudiantes.
*/

	cout << "programa para calcular el portectaje de hombres" << endl;
	
	int men;
	int women;
	
	cout << "ingrese la cantidad de hombres" << endl;
	cin >> men;
	
	cout << "ingrese la cantidad de mujeres" << endl;
	cin >> women;
	
	int totalOfStudents = men + women;
	float percentOfMen = ( men * 100 / totalOfStudents);
	float percentOfWomen = ( women * 100 / totalOfStudents);
	
	cout << "el porcetaje de hombres es: " << percentOfMen << "%" << endl;
	cout << "el porcetaje de mujeres es: " << percentOfWomen << "%" << endl;
	
	system("PAUSE");
	return 0;
}
