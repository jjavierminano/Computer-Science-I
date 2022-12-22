#include <cmath>
#include <iostream>

using namespace std ;

int main () {
	
	int base, exponente, i=1 ;
	float resultado = 1 ;
	
	cout<< "introduzca la base de la potencia " ;
	cin>> base ;
	
	cout<< "introduzca el exponente " ;
	cin>> exponente ;
	
	if(exponente>=1){
		
		do{
			
			resultado = resultado*base ;
			i=i+1 ;
		}while(i<=exponente) ;
		
		cout <<resultado;
		
	}else if(exponente<0){
		
		i=i-2;
		
		do{
			
			resultado = 1.0*(resultado/base) ;
			i = i-1;
			
		}while(i>=exponente);
		
		cout<<resultado ;
	}else{
		
		resultado = 1;
		cout<< resultado ;
	}
	
	
	
	return 0;
	
}
