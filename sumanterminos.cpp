//calcula la suma 1+2+...+n
#include <iostream>
#include <cmath>

using namespace std ;

int main () {
	
	int i=0, numero, suma=0 ;
	
	cout<< "introduzca un numero natural n para el cual calcular el sumatorio desde 1 hasta n --->  " ;
	cin>> numero ;
	
	if(numero>=0){
		
		do{
			
			suma = suma + i;
			i=i+1;
			
		}while(i<=numero);
		
		cout<< "la suma hasta n= " << numero << " es igual a "<< suma;
		
	}else{
		
		cout<<"no es posible";
	}
	
	
	
	return 0;
}
