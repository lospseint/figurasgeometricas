

#include<iostream>
#include<cmath>
#define pi 3.141598

using namespace std;

int main()
{
double a,A,V,h;
cout<<"\n Este Programa Calcula el Area y el "<<endl;
cout<<"\n Volumen del Tetaedro "<<endl;
cout<<"\n Introduce el valor del lado  "<<endl;
cin>>a;
A = a*a*sqrt(3);
V = sqrt(2)*a*a*a/12;
h = sqrt(6)*a/3;
cout<<"\n El Area del Tetraedro es = "<<A<<endl;
cout<<"\n El Volumen del Tetraedro es = "<<V<<endl;
cout<<"\n La Altura del Tetraedro es = "<<h<<endl;

cout<<"\n Realizado por : Juan Alarcon "<<endl;


return 0;	
	
}
