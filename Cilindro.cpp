#include <iostream>
#define pi 3.14159
using namespace std;

int main()
 {
double r,h,pbase,abase,v,Al,At;
cout <<"Este programa calcula el area lateral,area total y el volumen del Cilindro Recto"<< endl;

cout <<"Introducir el Radio = "<< endl;
cin >> r;
cout<<"Introducir la Altura del Cilindro ="<< endl;
cin >>h;
pbase = 2*pi*r;
abase = pi*r*r;
Al=2*pi*r*h;
v = abase*h;
At = 2*pi*r*( h+r );
cout<<"El Area lateral "<< Al<<endl;
cout<<"El Area Total "<< At <<endl;
cout<<"El Volumen del Prisma ="<<v <<endl;



return 0 ;
}