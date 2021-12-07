#include "stdlib"
#include"iostream"
#include "conio.h"
#include "string"
#include"vector"

#define ENTER 13
#define BACKESPACE 8
using namespace std;

int num1,num2,num3,res;
int main(){
	
	int opc,opc1;
	
	vector<string>usuarios;
	vector<string>pass;
	
	usuarios.push_back("Daniel");
	usuarios.push_back("Eve");
	usuarios.push_back("Jesus");
	usuarios.push_back("Naty");
	
	pass.push_back("12345");
	pass.push_back("822215");
	pass.push_back("14045");
	pass.push_back("161286");
	
	string usuario, password;
	
	int contador = 0;
	bool ingresa = false;
	
	do
	{
	system("cls");
	cout<<"\t\t\t login de usuario Daniel14045"<<endl;
	cout<<"\t\t\t ____________________________"<<endl;	
	cout<<"\n\t Usuario:";
	getline(cin,usuario);
	char caracter;
	cout<<"\t Password:";
	caracter = getch();
	password = "";
		
	while (caracter!=ENTER){
		if(caracter != BACKESPACE){
			password.push_back(caracter);
			cout<<"*";
			
	}
	
	
	else{
		
		if(password.length()>0){
			cout<<"\b\b";
			password = password.substr(0,password.length()-1);
		}
	}
	caracter = getch();
}

for(int i=0;i<usuarios.size(); i++){
	if(usuarios[i] == usuario && pass[i] == password){
		ingresa = true;
		break;
		
	}
		}
		
if(!ingresa){
	cout<<"\n\n El usuario y/o contraseña no son correctos."<<endl;
	cout<<"\n Tienes 3 intentos para ingresar al sistema:Total de intentos:"<<endl;
	cin.get();
	
	
}














