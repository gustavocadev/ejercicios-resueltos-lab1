#include <iostream>

using namespace std;

int main (int argc, char** argv){
	
/* 7.Diseñar el algoritmo que me permita determinar el monto a pagar en una cabina de Internet, sabiendo que el costo por hora es
S/1,5 soles. Además, existe una oferta por apertura, que por cada 5 horaste obsequian una hora . */
	int hoursOfUse;
	
	cout << "ingrese la cantidad de horas que vas a estar usando el internet" << endl;
	cin >> hoursOfUse;

 //price of The hour
	const float priceOfTheHour = 1.5;
	
	const int promotion = hoursOfUse / 6;
	const int applyPromotion =  (hoursOfUse - promotion) ;
	const float finalPay =  applyPromotion * priceOfTheHour;
	
	cout << "el pago final es: " << finalPay << " soles" << endl;
	
	system("PAUSE");
	return 0;
}
