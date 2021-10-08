#include"iostream"
#include"stdio.h"
#include"stdlib.h"
using namespace std;
string usuario,password,user="Daniel14045",pass="315",saludo="Hola exelente dia";	
int main(){	
	
char opc,letra;
int tope = 2021, an, atotales, meses = 12, mes, dia = 31, dias, horas = 24, hrs, min = 60, minutos, seg = 60 , segundos;

cout<<"Bienvenido al sistema Por favor ingresa tus credenciales para seguir"<<endl;
cout<<"Ingresa tu usuario:"<<endl;
cin>>usuario;
cout<<"Ingresa tu password:"<<endl;
cin>>password;

if(usuario==user&&password==pass){
	
	cout<<"Bienvenido al sistema:"<<usuario<<"\n"<<endl;
	cout<<"Minombre es C++ selecciona una opcion para interactuar conmigo \n"<<endl;
	cout<<"1.- ¿Quieres que el programa te salude? \n"<<endl;
	cout<<"2.-¿Quieres saber tu edad, meses,horas y minutos de vida? \n"<<endl;
	cout<<"3.-¿Quieres si la letra que digitas es vocal o consonante?\n"<<endl;
	cin>>opc;
}	

if(opc=='1') {
cout<<saludo<<"\n"<<usuario<<"\n"<<endl;


}    

else if (opc=='2') {

    cout<<" Es un gusto saludarte: "<<usuario<<" Por favor ingresa el año en el que naciste ejemplo 1990"<<endl;
    cout<<"Para poder indicarte tus años, meses, dias, horas, minutos y segundos de vida"<<endl;
    cin>>an;
    atotales = tope - an;
    mes = an * meses;
    dias = mes * dia;
    hrs = dias * horas;
    minutos = hrs * min;
    segundos = minutos * seg;
   
    cout<<" Genial "<<usuario<<" Tu edad actual es de: "<<atotales<< " Años"<<endl;
    cout<<" Los meses equivalentes a tus "<<atotales<<" años son: "<<mes<< " meses "<<endl;
    cout<<" Los dias equivalentes a tus "<<mes<<" meses son: "<<dias<< " dias "<<endl;
    cout<<" Las horas equivalentes a tus "<<dias<<" dias son: "<<hrs<< " horas "<<endl;
    cout<<" Los minutos equivalentes a tus "<<hrs<<" horas son: "<<minutos<< " Minutos "<<endl;
    cout<<" Los segundo equivalentes a tus "<<minutos<<" horas son: "<<segundos<< " segundos "<<endl;
}



else if(opc=='3'){
cout<<"Por favor digita una letra a validar:";
cin>>letra;
}

 if(letra=='a'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;
}	
	
else if(letra=='e'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;
}		
	
else if(letra=='i'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;
}

else if(letra=='o'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;
}

else if(letra=='u'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;
}



else{
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una consonante \n  "<<endl; 
}




	


return 0;
cin.get();
	
}




 






	









	

	

		
	
	
	
	
	

	
	
	



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

