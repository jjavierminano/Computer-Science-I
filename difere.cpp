//3. Escribe un programa que solicite al usuario un vector de enteros: primero solicita el tamaño y
//luego los valores. Escribe un programa que calcule cuantos valores distintos hay en el vector.

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int TAM=1000;
	int vector[TAM];
	bool esta_repe=false;
	int cont=0;
	
	cout<<"introduzca el tamaño del vector"<<endl;
	cin>> TAM;
	
	cout<<"introduzca los valores del vector"<<endl;
	for(int i=0;i<TAM;i++)
	{
		cin>>vector[i];
	}
	
	for(int i =0; i<TAM; i++)
	{
		if(vector[i]==vector[i+1])
		cont = cont + 1;
	}
	
	cout <<cont;
	
	
	
return 0;
}
