#include"Daniel.h"

using namespace std;
char paterno[11],materno[11],nombre[11],rfc[15],an[7];
int main(){

cout<<"\t\t\t Ingresa tu apellido Paterno:";
cin>>paterno;
cout<<"\t\t\t Ingresa tu apellido Materno:";
cin>>materno;
cout<<"\t\t\t Ingresa tu nombre:";
cin>>nombre;
cout<<"\t\t\t Ingresa tu fecha de nacimiento as/mm/dd:"<<endl;
cin>>an;

strupr(paterno);
strupr(materno);
strupr(nombre);
rfc[0]=paterno[0];
rfc[1]=paterno[1];
rfc[2]=materno[0];
rfc[3]=nombre[0];
strcat(rfc,an);

cout<<"\n";
cout<<"\t\t Su nombre es:"<<nombre<<paterno<<materno;
cout<<"\t\t Fecha de nacimiento:"<<an;
cout<<"\t\t Tu RFC:"<<rfc;
getch();
return 0;
}







