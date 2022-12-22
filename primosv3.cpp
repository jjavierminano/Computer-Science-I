//El número 1 no es primo (ver el Lema de Euclides o el teorema fundamental de la
//aritmética). Implementa un programa que compruebe si un entero, obligatoriamente
//mayor que 1, es primo.

#include <cmath>
#include <iostream>

using namespace std;

int main (){
	
	int numero, i;
	bool entrada_correcta=false;
	while(!entrada_correcta)
	{
	cout << "introduzca un entero mayor que 0 "<<endl;
	cin>> numero;
	
	
	if(numero==0 )
		{
		cout<<"no es posible introducir el 0"<<endl;
		}
	if(numero==1)
		{
		cout<<"el 1 no es primo, segun el lema de Euclides"<<endl;
		}
	if(numero!=0 && numero!=1)
		{
		cout <<"numero correcto "<<endl;
		break;
		} 
	}
	
	if(numero==2){
		cout<<"es primo"<<endl;
	}
	for(i=2; i<numero-1; i++){
		if(numero%i==0){
			cout<<"el numero no es primo "<<endl;
			break;
		}
	}
	if(i==numero-1){
		cout<<"es primo ";
	}
	
	
	
return 0;
}
