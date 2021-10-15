#include "iostream"
using namespace std;
int main(){
	
	int dia;
	
	cout<<"Ingresa un numero del 1 a 7 para determinar el dia de la semana: \n";
	cin>>dia;
	
	switch(dia){
		
		case 1 : 
		cout<<"El numero 1 pertenece al dia Domingo"<<endl;
		break;
		
		case 2 : 
		cout<<"El numero 2 pertenece al dia lunes"<<endl;
		break;
		
		case 3 : 
		cout<<"El numero 3 pertenece al dia Martes"<<endl;
		break;
		
		case 4 : 
		cout<<"El numero 4 pertenece al dia Miercoles"<<endl;
		break;
		
		case 5 : 
		cout<<"El numero 5 pertenece al dia Jueves"<<endl;
		break;
		
		case 6 : 
		cout<<"El numero 6 pertenece al dia Viernes"<<endl;
		break;
		
		case 7 : 
		cout<<"El numero 7 pertenece al dia Sabado"<<endl;
		break;
		
		default:
			
			cout<<"opcion no valida saldremos del sistema\n";
	}
	}
