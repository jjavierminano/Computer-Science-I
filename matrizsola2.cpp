#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int filas, columnas, f=0, cont=1;
	cout<<"introduzca el numero de filas "<<endl ;
	cin>>filas;
	cout<<"introduzca el numero de columnas "<<endl;
	cin>>columnas;
	
	int M[filas][columnas];

	while(f<filas)
	{
		for(int j=0; j<columnas; j++)
		{
			M[f][j]=cont;
			cont++;
		}	
	f++;
	}
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			cout<<M[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	
return 0;
}
