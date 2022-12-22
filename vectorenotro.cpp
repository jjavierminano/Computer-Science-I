#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int cont=0;
	int TAM, TAM2;
	int vector[TAM];
	int vector2[TAM2];
	
	cout<<"introduzca el tamaño del vector 1, que debe ser mas menor o igual que el vector 2"<<endl;
	cin>>TAM;
	cout<<"introduzca el tamaño del vector 2 "<<endl;
	cin>>TAM2;
	
	while(TAM2<TAM)
	{
		cout<<"el tamaño de los vectores ha sido mal introducido"<<endl;
		cout<<"introduzca el tamaño del vector 1, que debe ser mas menor o igual que el vector 2"<<endl;
		cin>>TAM;
		cout<<"introduzca el tamaño del vector 2 "<<endl;
		cin>>TAM2;
	}
	
	cout<<"introduzca los datos del vector 1:"<<endl;
	for(int i=0; i<TAM; i++)
	{
		cin>>vector[i];
	}
	
	cout<<"introduzca los datos del vector 2:"<<endl;
	for(int j=0; j<TAM2; j++)
	{
		cin>>vector2[j];
	}	
	
	for(int i=0; i<TAM; i++)
	{
		for(int j=0; j<TAM2; j++)
		{
			if(vector[i]==vector2[j])
			{
				cout<<"la posicion "<<i <<" esta incluida"<<endl;
				cont++;
				if(cont==TAM)
				{
					cout<<"el vector 1 esta incluido en el 2 "<<endl;
				}
			}else
			{
				cout<<"no esta incluido"<<endl;
			}
		}
	}
	
	
	
	
return 0;
}
