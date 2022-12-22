//Usando una estructura while, crea un programa que dé como resultado la suma de los números pares comprendidos entre dos valores introducidos por el usuario

#include <cmath>
#include <iostream>

using namespace std;

int main () {
	
	int inf, sup, suma=0 ;
	
	cout << "introduzca el infimo del intervalo" <<endl ;
	cin >> inf ;
	
	cout << "introduzca el supremo del intervalo" << endl ;
	cin >> sup ;
	
	while(sup<inf){
		
		cout << "los elementos no han sido introducidos en el orden correcto, vuelve a introducirlos "<< endl ;
	
		cout << "introduzca el infimo del intervalo" <<endl ;
		cin >> inf ;
	
		cout << "introduzca el supremo del intervalo" << endl ;
		cin >> sup ;
	
	}
	while(sup>=inf){
		
		if(inf%2==0){
			suma = suma +inf;
		}
		inf = inf +1 ;
	}
	cout << suma ;
return 0 ;
}
	
	
	
	

	
	

