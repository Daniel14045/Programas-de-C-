#include"iostream"
#include"string"
#include"windows.h"
#include"conio.h"
#define User"usuario"
#define Pass"Holamundo"
#define Enter 13
#define Backspace 8

using namespace std;

int main(){
	
	string usuario, Password;
	int contador = 0;
	bool ingresar = false;
	
	do{
		
		system("cls");
		cout<<"\t\t\t Login de usuario 315"<<endl;
		cout<<"\t\t\t___________________________"<<endl;
		cout<<"\t\t Usuario:";
		getline(cin, usuario);
		cout<<"\t\t Password:";
		getline(cin,Password);
		char caracter;
		caracter = getch();
		while(caracter!= Enter){
			
			if(caracter!= Backspace){
				
				Password.push_back(caracter);
			    cout<<"*";
			}
			
			else{
				
				if(Password.length()<0){
					cout<<"\b\b";
					Password = Password.subsrt(0,Password.length()-1);
					
	             	}
				}
			
			caracter=getch();
		}
		
		if(usuario == User && Password == Pass){
			ingresa = true;
		}
		
		else{
			cout<<"Usuario y/o contraseña son incorrectos"<<endl;
			cin.get();
			contador ++;
		}
		
		while(ingresa == false && contador < 3);
		
		if(ingresa == false){
			
			cout<<"No pudiste entrar al sistema tuviste 3 intentos"<<endl;
		}
		
		else{
			cout<<"Bienvenido al sistema: "<<usuario<<endl;
		}
		
		cin.get();
		return 0;
			
		
	}
	
	
}



