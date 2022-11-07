

#include<iostream>
#include<cmath>

using namespace std;


int main()
{
	
double A,V,a;
cout<<"\n Este Programa Calcula el Area y el Volumen "<<endl;	
cout<<"\n del Octaedro "<<endl;	
cout<<"\n Ingrese el valor del lado"<<endl;
cin >>a;
A = 2*a*a*sqrt(3);
V = sqrt(2)*a*a*a/3;

cout<<"\n El Area del Octaedro es ="<<A<<endl;
cout<<"\n El Volumen del Octaedro es ="<<V<<endl;

cout<<"\n Realizado por : Juan Alarcon"<<endl;	
	
	
	
	return 0;
	
}