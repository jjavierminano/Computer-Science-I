#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int n, suma; 
	
	do
	{
		cout<<"introduzca un numero del 1 al 4 --> ";
		cin>>n; 
	}while(n<1||n>4);
	
	switch(n)
	{
		case 1: cout<<"1 = 1";break;
		case 2: cout<<"1_= 1"<<endl;
				cout<<"22 = 2"<<endl;
				break;
		case 3: cout<<"1_= 1"<<endl;
				cout<<"22_ = 4"<<endl;
				cout<<"333 = 9"<<endl;
				break;	
		case 4: cout<<"1_= 1"<<endl;
				cout<<"22_ = 4"<<endl;
				cout<<"333_= 9"<<endl;
				cout<<"4444 = 16"<<endl;
				break;							
	}
	
	
	
return 0;
}
