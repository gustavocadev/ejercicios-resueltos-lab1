#include <iostream>

using namespace std;

int main (int argc, char** argv){
	
/*
	8) Diseñar el algoritmo que me permita determinar la cantidad mínima de billetes y/o monedas que 
	obtendrá un cliente al utilizar el servicio del cajero automático. Nominaciones (100, 50, 20, 10, 5, 1) 
*/

 int money;

 cout << "ingresa los billetes y monedas" << endl;
 cin >> money;

 const int resultBillsOf100 = money / 100;
 const int remainderOf100 = money % 100;

 const int resultBillsOf50 = remainderOf100 / 50;
 const int remainderOf50 = remainderOf100 % 50;
 
 const int resultBillsOf20 = remainderOf50 / 20;
 const int remainderOf20 = remainderOf50 % 20; 

 const int resultBillsOf10 = remainderOf20 / 10;
 const int remainderOf10 = remainderOf20 % 10; 
 
 const int resultCoinsOf5 = remainderOf10 / 5;
 const int remainderOf5 = remainderOf10 % 5;
 
 const int resultCoinsOf2 = remainderOf5 / 2; 
 const int remainderOf2 = remainderOf5 % 2; 

 const int addOfMoney = resultBillsOf100 + resultBillsOf50 + resultBillsOf20 + resultBillsOf10 + resultCoinsOf5 + resultCoinsOf2;
 
 cout << "hay " << resultBillsOf100 << " billetes de 100 soles" << endl;
 cout << "hay " << resultBillsOf50 << " billetes de 50 soles" << endl;
 cout << "hay " << resultBillsOf20 << " billetes de 20 soles" << endl;
 cout << "hay " << resultBillsOf10 << " billetes de 10 soles" << endl;
 cout << "hay " << resultCoinsOf5 << " billetes de 5 soles" << endl;
 cout << "hay " << resultCoinsOf2 << " billetes de 2 soles" << endl;
 cout << "cantidad minima de billetes es: " << addOfMoney << endl;
	
	system("PAUSE");
	return 0;
}
