#include <iostream>

using namespace std;

int main()
 {
	
double pbase,ap,At,Al, abase,V,h;
cout <<"Este Programa calcula el area lateral"<<endl;
cout <<"El area total y el volumen de la Piramide"<<endl;

cout <<"Introducir el Perimetro de la  Base =" << endl;
cin>>pbase;

cout <<"Introducir la Apotema  =" << endl;
cin>>ap;

cout <<"Introducir el Area  de la  Base =" << endl;
cin>>abase;
cout <<"Introducir la Altura de la  Piramide =" << endl;
cin>> h;
Al = 0.5*pbase*ap;
At = Al + abase;
V = abase*h/3;
	
cout <<"El Area lateral de la Piramide es  =" <<Al<< endl;

cout <<"El Area Total de la Piramiden es  =" <<At<< endl;
	
cout <<"El Volumen de la Piramide  es  =" << V << endl;



return 0;		
}