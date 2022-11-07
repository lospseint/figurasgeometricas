#include<iostream>
#define pi 3.14159
using namespace std;

int main()
{
	
double r,g,pbase,al,at,V,h;

cout<<"Este programa Calcula el Area lateral"<< endl;
cout<<"el Area Total y el Volumen del Cono "<< endl;

cout <<"Introduce el Radio del Cono ="<<endl;
cin >> r;
cout <<"Introduce la Generatriz  del Cono ="<<endl;
cin >> g;	
cout <<"Introduce la Altura  del Cono ="<<endl;
cin >> h;
al = pi*r*g;
at = al + pi*r*(g+r);
V = pi*r*r*h/3;
cout <<"El Area Lateral del Cono es  ="<<al<<endl;
cout <<"El Area Total del Cono ="<<at<<endl;
cout << "El Volumen del Conos es "<<V<<endl;	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}