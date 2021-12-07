#include"iostream"
using namespace std;

	string  user ="Daniel14045", pass= "14045", usuario, password, saludo="Hola bienvenido";
	int opc,edad,grupo,nombre;
	int main(){
	
	cout<<"Bienvenido al sistema Por favor digita tu usuario y password \n";
	cout<<"Usuario:";
	cin>>usuario;
	cout<<"Password:";
	cin>>password;
	if(usuario == user && password == pass){
		
		cout<<saludo<<":"<<usuario<<endl;
		cout<<"Por favor selecciona una opcion"<<endl;
	}
		do{
			cout<<" 1.- Registrar usuario \n";
			cout<<"2.- Ver perfil \n";
			cout<<"3.- Salir \n";
			cin>>opc;
		
		if(opc == 1){
			
			cout<<"Registra un usuario \n";
			
			cout<<"Digita tu nombre \n";
			cin>>nombre;
			
			cout<<"Ingresa tu grupo \n";
			cin>>grupo;
			cout<<"Ingresa tu edad \n";
			cin>>edad;
		}
	
		else if(opc == 2){
			
			cout<<"Verificar perfil \n";
			
			
		}
	
	else{
		
		cout<<"Opcion no valida";
	}
	
	}while(opc !=3);



return 0;
cin.get();
}
