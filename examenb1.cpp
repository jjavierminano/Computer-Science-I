#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, suma;
	
	do
	{
		cout<<"introduzca el valor n -->";
		cin>> n;
	}while(n>10 || n<1);
	
	for(int i=1; i<=n; i++)
	{
		suma=0;
		for(int j=1; j<=i; j++)
		{
			cout<<""<<i<<"";
			suma=suma+i;
		}
		for(int k=1; k<=(n-i); k++)
		{
			cout<<"_";
			if(k==(n-i))
			{
				cout<<"="<<suma<<"";
				cout<<endl;
			}
		}
		if(i==n)
		{
			cout<<"="<<suma<<"";
		}
	
	cout<<"="<<(i+1)*(i+1)<<endl;
	}

	
	
	
return 0;
}
