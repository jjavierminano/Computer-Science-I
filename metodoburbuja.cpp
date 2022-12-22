//pide un vector por pantalla al usuario y ordenalo

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int TAM=100;
	int vector[100];
	int aux=0;
	cout<< " introduzca el tamaño del vector "<<endl;
	cin>>TAM;
	
	cout<<"introduzca los elementos del vector "<<endl;
	for(int i=0; i<TAM; i++)
	{
		cout<<"introduzca la posicion "<<i<<endl;
		cin>>vector[i];
	}
	
	cout<<"el vector que usted ha introducido es el siguiente; "<<endl;
	for(int i =0; i<TAM; i++)
	{
		cout<<vector[i]<<" ";
	}
	cout<< " "<<endl;
	
	cout<<"el vector ordenado es el siguiente "<<endl;
	for(int j=0; j<TAM; j++)
	{
		for(int i=0; i<TAM; i++)
		{
			if(vector[i]>vector[i+1])
			{
				aux=vector[i];
				vector[i]=vector[i+1];
				vector[i+1]=aux;
			}
		}
	}
	
		for(int i =0; i<TAM; i++)
		{
			cout<<vector[i]<<" "<<endl;
		}
		cout <<"el vector ordenado en orden descendente es el siguiente: "<<endl;
		for(int i = TAM; i>=0; i-- )
		{
				cout<<vector[i]<<" ";
		}
		
	
	return 0;
}
