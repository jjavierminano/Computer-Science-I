//Haga un programa en C+* que lea dos números enteros desde la entrada estándar y que calcule la división y el resto del primero
//entre el segundo. Debe tener en cuenta que ambos números pueden ser negativos, positivos o cero y que debe mostrar el resultado
//adecuado en cada caso.
//RESTRICCIÓN' Para implementar el programa no puede hacer uso de los operadores / ni oA, es decir, deberá realizar la
//división con restas sucesivas.

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int dividendo, divisor, cociente=0, resto;
	
	cout<<"introduzca el dividendo "<<endl;
	cin>>dividendo;
	
	cout<<"introduzca el divisor "<<endl;
	cin>>divisor;
	
	if(divisor>dividendo)
	{
		cociente=0;
		resto=dividendo;
		cout<<" el cociente es 0 "<<endl;
		cout<<" el resto es "<<dividendo<<endl;
	}	
	
	if(divisor==0)
	{
		cout<< "indeterminacion "<<endl;
	}
	
	if(dividendo==0)
	{
		cout<< " el dividendo es 0, el cociente entonces es 0 "<<endl;
	}
	
	if(dividendo>divisor && dividendo>0 && divisor>0)
	{
 		while (dividendo >= divisor)
		{
    		dividendo = dividendo - divisor;
     		cociente++;
 		}
 		cout << "El resultado es " << cociente << endl;
 		resto = dividendo-divisor*cociente ;
 		cout<< "el resto es "<<resto<<endl;
	}
return 0;
}
