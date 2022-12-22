//5. Escribe un programa que dado un vector de tamaño N<10, permita invertir el vector. Es decir, si V
//= {4,2,1,6,5}, entonces el resultado será V = {5,6,1,2,4}.

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int TAM=100;
	int vector[TAM];
	int aux;
	
	cout<<"introduzca el tamaño del vector (menor que 10) "<<endl;
	cin>> TAM;
	
	while(TAM>=10)
	{
		cout<< " el tamaño del vector debe ser menor que 10 "<<endl;
		cout<<"introduzca otra vez el tamaño del vector (menor que 10) "<<endl;
		cin>> TAM;
	}	
	
	cout<<" introduzca los elementos del vector "<<endl;
	
	for(int i=0; i<TAM; i++)
	{
		cin>>vector[i];
	}
	
	cout<<"el vector invertido es el siguiente "<<endl;
	
	for(int i=0; i<=(TAM/2); i++){
		aux=vector[i];
		vector[i]=vector[TAM-1-i];
		vector[TAM-1-i]=aux;
	}
	
	for(int i = 0; i<TAM; i++)
	{
		cout<<vector[i];
	}
	
	
	
	
	
	
	
return 0;
}
