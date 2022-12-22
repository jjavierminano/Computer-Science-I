#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int TAM=5;
	int vector[TAM];
	int aux[TAM];

	//introducimos el vector
	cout<<"rellene el vector con numeros del 0 al 4 "<<endl;
	for(int i=0; i<TAM; i++)
	{
		cout<<"introduzca la posicion "<<i <<" del vector"<<endl;
		cin>>vector[i];
	}
	
	//sacamos el vector por pantalla
	for(int i=0; i<TAM; i++)
	{
		cout<<vector[i]<<", ";
	}
	
	for(int i=0; i<TAM; i++)
	{
		for(int j=0; j<TAM; j++)
		{
			if(vector[j]==i)
			{
				aux[i]=j;
				break;
			}
		}
	}
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<" el valor "<<i <<" esta en la posicion "<<aux[i]<<endl;
	}
	


	
	
return 0;
}
