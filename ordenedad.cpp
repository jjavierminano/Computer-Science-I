#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int maxh, minh, medh, posh1, posh2, posh3, pose1, pose2, pose3; //posiciones ordinales de las edades y alturas de cada persona
	float ha, hb, hc;
	float ea, eb, ec;
	
	cout<<"introduzca las alturas (teniendo en cuenta que es una magnitud continua) de a, b y c respectivamente: "<<endl;
	cin>>ha;
	cin>>hb;
	cin>>hc;
	cout<<"introduzca las edades (teniendo en cuenta que es una magnitud continua) de a, b y c rspectivamente: "<<endl;
	cin>>ea;
	cin>>eb;
	cin>>ec;
	
	while(ha==hb||hb==hc||ha==hc||ea==eb||ea==ec||eb==ec)
	{
		cout<<" no es posible que haya dos variables iguales, teniendo en cuenta que las magnitudes que estamos midiendo son continuas "<<endl;
		cout<<"introduzca las alturas (teniendo en cuenta que es una magnitud continua) de a, b y c respectivamente: "<<endl;
		cin>>ha;
		cin>>hb;
		cin>>hc;
		cout<<"introduzca las edades (teniendo en cuenta que es una magnitud continua) de a, b y c rspectivamente: "<<endl;
		cin>>ea;
		cin>>eb;
		cin>>ec;
	}
	
	//calculemos el mas viejo y por tanto el primero en la escala de edad;
	maxh=ha;
	if(maxh<hb)
	{
		maxh=hb;
	}
		if(maxh<hc)
	{
		maxh=hc;
	}
	cout<<"el maximo es " <<maxh<<endl;
	maxh=1;
	
	minh=ha;
	if(minh>hb)
	{
		minh=hb;
	}
		if(minh>hc)
	{
		minh=hc;
	}
	cout<<"el minimo es "<<minh<<endl;
	minh=3;
	
	if(ha<maxh&&ha>minh)
	{
		ha=medh;
	}
		if(hb<maxh&&hb>minh)
	{
		hb=medh;
	}
		if(hc<maxh&&hc>minh)
	{
		ha=medh;
	}
	cout<<medh;
return 0;
}
