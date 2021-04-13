// Triangulos_equilateros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main(void){
	float l1, l2, l3, l, a,result;
	short caso=1;
	bool val_lados=0;
	while (val_lados==0) {
		cout << "Ingrese el primer lado del triangulo\n";
		cin >> l1;
		cout << "Ingrese el segundo lado del triangulo\n";
		cin >> l2;
		cout << "Ingrese el tercer lado del triangulo\n";
		cin >> l3;
		val_lados = ((l2 < l1 + l3) & (l2 > abs(l1 - l3))) ? 1:0;
	}
	if (l1 == l2) {
		l = l1;
		caso++;
		if (l1 == l3) caso++;
		else a = l3;
	}
	else {
		if (l1 == l3) {
			caso++;
			l = l1;
			a = l2;
		}
		else {
			if (l2 == l3) {
				caso++;
				l = l2;
				a = l1;
			}
		}
	}
	switch (caso) {
	case 1:
		float s = (l1 + l2 + l3) / 2;
		result = sqrt(s * (s - l1) * (s - l2) * (s - l3));
		cout << "El tipo de triangulo que ha ingresado es escaleno/n" << "El área del triángulo es " << result;
		break;
	case 2:
		result = (a * sqrt((l*l) - (a*a) / 4))/2;
		cout << "El tipo de triangulo que ha ingresado es isóceles/n" << "El área del triángulo es " << result;
		break;
	default:
		result = (sqrt(3) / 4) * l * l;
		cout << "El tipo de triangulo que ha ingresado es equilatero/n" << "El área del triángulo es " << result;
		break;
	}
	
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
