//Escribe un programa que dado un vector de tamaño 10, indique si el vector está ordenado de
//menor a mayor. Si lo está imprimirá "ORDENADO". Si no lo está imprimirá "NO ORDENADO". En
//caso de no estar ordenado, debe ordenarse de menor a mayor. Finalmente, el programa
//imprimirá el vector ordenado.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int TAM=10;
	int vector[TAM];
	int aux=0;
	cout<<"introduzca los elementos del vector "<<endl;
	
	for(int i=0; i<TAM; i++)
	{
		cin>>vector[i];
	}
	cout<<"el vector que usted ha introducido es "<<endl;
	for(int i=0; i<TAM; i++)
	{
		cout<< vector[i]<< endl;
	}
	for(int i=0; i<TAM; i++)
	{
	for(int i =0; i<TAM; i++)
	{
		if(vector[i]<vector[i+1])
		{
			aux=vector[i];
			vector[i]=vector[i+1];
			vector[i+1]=aux;
		}
	}
    }
		cout<<"el vector ordenado que usted ha introducido es "<<endl;
	for(int i=0; i<TAM; i++)
	{
		cout<< vector[i]<< ",";
	}
	
return 0;
}
