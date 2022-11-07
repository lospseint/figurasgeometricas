
#include<iostream>
#define pi 3.14159

using namespace std;

int main()
{
	
double r,A,V;

cout<<"Este Programa Calcula el Area y "<<endl;
cout<<"el Volumen de la Esfera \n"<<endl;

cout << " Introducir el Radio  de la Esfera ="<<endl;
cin >>r;
A = 4*pi*r*r;
V = 4*pi*r*r*r/3;
	
cout<<"El Area de la Esfera es = "<<A<<endl;	
cout<<"El Volumen de la Esfera es = "<<V<<endl;	
	
cout<<"\n Realizado por: Juan Alarcon"<<endl;	
	
	
	
return 0;	
	
}