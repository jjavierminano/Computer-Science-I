#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int TAM=100;
	bool ordenado=true;
	int vector[TAM];
	int aux;
	cout<<"introduzca el tamaño del vector"<<endl;
	cin>> TAM;
	cout<<"introduzca los elementos del vector"<<endl;

	for(int i =0; i<TAM; i++)
	{
		cin>> vector[i];
	}

	cout<< " el vector que ha introducido es el siguiente: "<<endl;
	for(int i=0; i<TAM; i++)
	{
		cout<<vector[i]<<" ";
	}

	for(int i=0; i<TAM; i++)
	{
		
		if(vector[i]>vector[i+1])
		{
			cout<<" el vector esta desordenado"<<endl;
			ordenado=false;
			break;
		}else
		{
			cout<< "el vector esta ordenado "<<endl;
			ordenado=true;
		}
		
	}
	if(ordenado==false)
	{
		for(int j=0; j<TAM; j++)
		{
			for(int i =0; i<TAM; i++)
			{
				if(vector[i]>vector[i+1])
				{
					aux=vector[i];
					vector[i]=vector[i+1];
					vector[i+1]=aux;
				}
			}
		}	
	for(int i=0; i<TAM; i++)
	{
		cout<<vector[i]<<" ";
	}	
	}
	
	
	
	
	
return 0;	
}
