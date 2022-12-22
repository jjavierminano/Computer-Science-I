#include <iostream>
#include <cmath>
#include <vector>

#define contadorMaximo 20

using namespace std;

int sumaCuadrados(int numero1) {
	// Suma cuadrados. Caja negra.
	int suma = 0;
	while (numero1 > 0) {
		suma = suma + pow(numero1%10, 2);
		numero1 = numero1 / 10;
	}
	//
	
	return suma;
}

int esFeliz(int numero) {
	int suma;
	int contador;
	bool bucle;
	vector<int> sumasPrevias;
		
	suma = 0;
	contador = 0;
	bucle = false;
	while ( (suma!=1) && (contador<contadorMaximo) && (!bucle) ) {
	
		suma = sumaCuadrados(numero);
		sumasPrevias.push_back(suma); 
		
		//
		for (int i=0; i<contador; i++) {
			if (suma==sumasPrevias.at(i)) {
		//	if (suma==sumasPrevias[i]) 
				bucle = true;	
				break;
			}
		}
		//
		
		// Preparación para la siguiente iteración.
		numero = suma;
		contador++;
	}
		
	sumasPrevias.resize(0);
	sumasPrevias.shrink_to_fit();  
	
	if (suma==1)
		return 0;
	else
		return 1;
}

int main() {
	int intervaloInicio, intervaloFin;
	bool noPrimo;
	vector<int> primosLista;
	
	// Introducción de valores.
	cout << "Introduzca el inicio del intervalo: " << endl;
	cin >> intervaloInicio;
	cout << "Introduzca el fin del intervalo: " << endl;
	cin >> intervaloFin;
	
	for (int i=intervaloInicio; i<=intervaloFin; i++) {
		noPrimo = false;
		for (int j=2; j<i; j++) {
			if (i % j == 0) {
				noPrimo = true;
				break;
			}
		}
		if (!noPrimo)
			primosLista.push_back(i); 
	}

	cout << "La lista de los primos en el intervalo dado es: ";
	for (int i=0; i<primosLista.size()-1; i++)
		cout << primosLista[i] <<", ";
		cout << primosLista[primosLista.size()-1] << ". " << endl;

	cout << "De esos numero primos, felices son: ";

	for (int i=0; i<primosLista.size(); i++)
		if (esFeliz(primosLista[i])==0)
			cout << primosLista[i] << ", ";
	
	cout << endl;

	system ("pause");
	
	return 0;
}
