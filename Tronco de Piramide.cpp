

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
double PB,Pb,ap,Al,At,V,AB,Ab,h;
cout<<"\n Este Programa Calcula el Area lateral "<<endl;
cout<<"\n el Area Total y el Volumen del Tronco de Piramide "<<endl;	
cout<<"\n Introduce el Perimetro de la Base Mayor = "<<endl;	
cin >>PB;
cout<<"\n Introdue el Perimetro de la Base menor = "<<endl;	
cin >>Pb;
cout<<"\n Introduce la Apotema= "<<endl;	
cin >>ap;
cout<<"\n Introduce el Area de la Base mayor = "<<endl;	
cin >>AB;
cout<<"\n Introduce EL Area de la base menor= "<<endl;	
cin >>Ab;
cout<<"\n Introduce la Altura = "<<endl;	
cin >> h;
Al= (PB+Pb)*ap/2;
At = Al + AB+ Ab;
V = h*(AB+Ab+sqrt(AB+Ab));	
cout<<"\n El Area lateral del Trondo de Piramide es = "<<Al<<endl;	
	
cout<<"\n El Area Total del Trondo de Piramide es = "<<At<<endl;	
	
cout<<"\n El Volumen del Trondo de Piramide es = "<<V<<endl;


cout<<"\n Realizado por : Juan Alarcon "<<endl;


	
return 0;	
	
	
	
}