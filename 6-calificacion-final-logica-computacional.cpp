#include <iostream>

using namespace std;

int main (int argc, char** argv){
/*
6. Un alumno desea saber cual será su calificación final en la
materia de Lógica Computacional. Dicha calificación se
compone de tres exámenes parciales cuya ponderación es
de 30%, 30% y 40%.
*/

 int grade1, grade2, grade3;

 cout << "ingrese la primer nota" << endl;
 cin >> grade1;

 cout << "ingrese la segunda nota" << endl;
 cin >> grade2;

 cout << "ingrese la tercera nota" << endl;
 cin >> grade3;

 int finalGrade = (grade1 * 0.3) + (grade2 * 0.3) + (grade1 * 0.4);

 cout << "la calificacion final es: " << finalGrade << endl;
	
	system("PAUSE");
	return 0;
}
