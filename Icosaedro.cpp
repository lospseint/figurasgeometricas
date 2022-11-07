


#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	
double A,V,a;

cout<<"\n Este Programa Calcula el Area y el Volumen"<<endl;	
cout<<"\n del Icosaedro "<<endl;	
	
cout<<"\n Ingrese el valor del lado del Icosaedro "<<endl;	
cin >>a;
A = 5*a*a*sqrt(3);
V = 5*(3+sqrt(5))*a*a*a/12;

cout<<"\n El Area del Icosaedro es ="<<A<<endl;
cout<<"\n El Volumen del Icosaedro es ="<<V<<endl;	

cout<<"\n Realizado por : Juan Alarcon"<<endl;	
	
	
	
return 0;	
	
}