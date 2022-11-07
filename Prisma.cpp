
#include <iostream>
#define pi 3.14159
using namespace std;

int main()
 {
int n, l,pbase,h,abase,v,ap,Al;
cout <<"Este programa calcula el area lateral,area total y el volumen del prisma"<< endl;

cout <<"Introducir el numero de lado = "<< endl;
cin >> n;
cout <<"Introducir el valor del lado = "<< endl;
cin >> l;
cout <<"Introducir la Apotema = "<< endl;
cin >> ap;
cout<<"Introducir la Altura del Prisma="<< endl;
cin >>h;
pbase = n*l;
abase = pbase*ap/2;
Al=pbase*h;
v = abase*h;
cout<<"El Area lateral "<< Al<<endl;
cout<<"El Area Total "<< Al + 2*abase <<endl;
cout<<"El Volumen del Prisma ="<<v <<endl;



return 0;


}