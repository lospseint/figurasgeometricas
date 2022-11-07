
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
double a,b,c,V,D,A;
cout <<"\n Este Programa Calcula el area,Diagonal "<<endl;
cout <<"\n y el Volumen de un Ortoedro "<<endl;

cout <<"\n Introducir el lado A="<<endl;
cin>>a;
cout <<"\n Introducr el lado B = "<<endl;
cin>>b;
cout <<"\n Introducr el lado C = "<<endl;
cin>>c;
A =2*(a*b+a*c+b*c);
D = sqrt(a*a+b*b+c*c);
V =a*b*c;
cout <<"\n El Area del Ortoedro es = "<<A<<endl;
cout <<"\n La Diagonal del Ortoedro es  = "<<D<<endl;
cout <<"\n El Volumen del Ortoedro es = "<<V<<endl;

cout <<"\n Realizado por : Juan Alarcon "<<endl;
	
return 0;	
}