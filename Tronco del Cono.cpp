

#include<iostream>
#define pi 3.14159

using namespace std;

int main()
{
double R,r,h,Al,At,V,g,AB,Ab;

cout <<" Este Programa Calcula el Area lateral, "<<endl;
	
cout <<"el Area Total y el Volumen del Tronco de Cono \n  "<<endl;	
	
cout <<" Introduce el Radio Mayor del Tronco de cono "<<endl;	
cin >> R;
cout <<" Introduce el Radio menor del Tronco de Cono "<<endl;	
cin >>r;

cout <<" Introduce la Generatriz Tronco de Cono "<<endl;	
cin >>g;
cout <<" Introduce la Altura del  Tronco de Cono "<<endl;	
cin >>h;

AB = pi*R*R;
Ab = pi*r*r;
Al =pi*g*(R+r);
At = Al+ AB+Ab;	
V = pi*h*(R*R+r*r+R*r)/3;
cout <<"\n El  Area lateral del Tronco de Cono es= "<<Al<<endl;
	
cout <<"\n El  Area Total del Tronco de Cono es= "<<At<<endl;

cout <<" El  Volumen del Tronco de Cono  es= "<<V<<endl;
	
cout<<"\n Realizado por: Juan Alarcon"<<endl;



return 0;
}