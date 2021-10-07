#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	
 char seguir;
 int i,numero,multiplica;
 
 do{	
 	cout<<"Por favor ingresa el numero de la tabla a presentar \n";
 	cin>>numero;
 
 
 
 for(int i= 1; i<=10; i++){ 
 multiplica = i * numero;
 cout<<numero<< " * "<<i<<" = "<<multiplica<<endl;
 
}

cout<<"¿Quieres generar otra tabla de multiplicar(s/n)?";
fflush(stdin);
cin>>seguir;



 	
}
 while(seguir!='n');



 cin.get();	
return 0;
	
}
