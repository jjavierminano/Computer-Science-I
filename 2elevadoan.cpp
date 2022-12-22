//programa que calcule 2^1+2^2+...+2^n

#include <cmath>
#include <iostream>

using namespace std;

int main(){
	int num=0;
	int elevacion=0;
	int suma=0;
	
	cout<< "introduzca la el numero limite";
	cin>>num;
	
	for(int i=1; i<=num; i++)
	{
		elevacion = pow(2,i) ;
		suma = suma + elevacion;
	}
	
	cout <<suma;
return 0;
}
