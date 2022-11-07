


#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	
double a,A,V;
cout<<"\n Este Programa Calcula el Area y el Volumen,"<<endl;	
cout<<"\n del Dodecaedro"<<endl;

cout<<"\n Introduce el valor del lado "<<endl;	
cin >>a;
A= 3*a*a*sqrt(25+10*sqrt(5));
V = (15+7*sqrt(5))*a*a*a;

cout<<"\n El Area del Dodecaedro es ="<<A<<endl;
cout<<"\n El Volumen del Dodecaedro es ="<<V<<endl;	
	
	
cout<<"\n Realizado por : Juan Alarcon "<<endl;	
	
	
	
return 0;	
	
}