//cajero virtual

#include <cmath>
#include <iostream>

using namespace std;

int main () {
	
	int saldo_inicial = 1000 , opc ;
	float extra ;
	
	
	cout << " bienvenido a su cajero virtual " ;
	cout << " opciones :" << endl ;
	cout << "\t 1. ingresar dinero en la cuenta " <<endl ;
	cout << "\t 2. sacar dinero de la cuenta "<<endl ;
	cout << " \t 3. salir del menu" << endl ;
	
	cin >> opc ;
	
	if 	(opc>=1 && opc<=3) {
	
		switch (opc){
		
		case 1: cout<< "¿cuanto dinero desea ingresar?     " ;
				cin >> extra ;
				saldo_inicial = saldo_inicial + extra ;
				cout << " su saldo actual es    " << saldo_inicial ;
				break ;
				
		case 2: cout << "cuanto dinero desea retirar?    " ;
				cin >> extra;
				saldo_inicial = saldo_inicial - extra ;
				cout << " su saldo actual es     " << saldo_inicial ;
				if (saldo_inicial<0) {
					cout << "     usted esta en numeros negativos" ;
				}
				break ;
				
		case 3: break;
		}	
	}else{
		
		cout << "esa opcion no existe" ; 
		
		
		
	}
	

	return 0 ;
}
