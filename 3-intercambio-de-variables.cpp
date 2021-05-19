#include <iostream>

using namespace std;

int main (int argc, char** argv){
/*
3.- Diseñe el programa que permita ingresar dos
valores reales y los intercambie.
*/
 cout << "programa para intercambiar 2 valores" << endl;
 
  float real1;
  float real2;
  
  cout << "ingrese el primeer numero real (real 1)" << endl;
  cin >> real1;

  cout << "ingrese el segundo numero real (real 2)" << endl;
  cin >> real2;

  float aux = real1;

  real1 = real2;
  real2 = aux;

  cout << "el real 1 : " << real1 << endl;
  cout << "el real 2 : " << real2 << endl;
	
	system("PAUSE");
	return 0;
}
