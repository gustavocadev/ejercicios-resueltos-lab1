#include <iostream>

using namespace std;

int main (int argc, char** argv){
	
	//	1.- Diseñar el programa que me permita determinar el promedio de 3 notas
	
		int grade1, grade2, grade3;
	
		cout << "ingrese la nota 1" << endl;
		cin >> grade1;
	
		cout << "ingrese la nota 1" << endl;
		cin >> grade2;
	
		cout << "ingrese la nota 1" << endl;
		cin >> grade3;
	
		int finalGrade = (grade1 + grade2 + grade3) / 3;
		cout << "el promedio de notas es: " << finalGrade << endl;
	
	system("PAUSE");
	return 0;
}
