#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<vector>
#define ENTER 13
#define BACKESPACE 8
using namespace std;
int main(){

 int opc, opc1,saldo=10000,retiro=0,movimiento= 0,res,deposito=0;
 
vector<string>usuarios;
vector<string>pass;
usuarios.push_back("Daniel");
pass.push_back("45697823");
 
string usuario,password;
 
int contador = 0;
bool ingresa = false;

do{

system("cls");
cout<<"\t\t\t Ingresa tu usuario "<<endl;
cout<<"\t\t\t________________________"<<endl;
cout<<"\n\t Usuario:";
getline(cin,usuario);
 char caracter;
  cout<<"\t Nip: ";
  caracter = getch();
  password = "";
     while (caracter != ENTER){
          if(caracter != BACKESPACE){
             password.push_back(caracter);
             cout<<"*";
          }
          else{
              if(password.length()>0){
                  cout<<"\b\b";
                  password = password.substr(0, password.length()-1);
              }
          }
          caracter = getch();
     }
     for(int i = 0; i< pass.size(); i++){
     	if( pass[i] == password){
           ingresa = true;
           break;
         }
         
 }
 
     if(!ingresa){
         cout<<"\n\n Tu NIP no es valido"<<endl;
         cout<<"\n Solo tiene 3 intentos para ingresar al sistema: Total de intentos: "<<contador+1<<endl;
         cin.get();
         contador++; 
     }
}

while(ingresa == false && contador < 3);
  if(ingresa == false){
      cout<<"Hasta luego se cumplieron tus intentos permitidos. Bye"<<endl;
  }
  else{
     do{
         system("cls");
         cout<<"\n";
         cout<<"\t\t\t Bienvenido al cajero automatico: "<<endl;
         cout<<"\t\t\t __________________________________"<<endl;
         cout<<"\t\t\t 1.- Quieres verificar tu saldo"<<endl;
         cout<<"\t\t\t 2.- Retirar dinero"<<endl;
         cout<<"\t\t\t 3.- Deseas a ser un deposito"<<endl;
         cout<<"\t\t\t 4.- Movimiento"<<endl;
         
         cout<<"\n";
         cout<<"\t\t\t Selecciona una opción: ";
         cin>>opc;
            switch (opc){
            	
                case 1:
                system("cls");
                cout<<"\t\t\t\t Su saldo es de:"<<saldo<<endl;
                cout<<"\t\t\t\t ______________________________ "<<endl;
                 cout<<"\t\t\t\t Total de saldo que sobra: "<<res<<"\n"<<endl;
                break;
                
                case 2:
                system("cls");
                
				
                cout<<"\t\t\t\t Cual es la cantidad que deseas retirar:  "<<endl;
                cin>>retiro;
                if(retiro<= 10000){
                
                cout<<"\t\t\t\t El retiro se ha realizado"<<endl;
                cout<<"\t\t\t\t ______________________________ "<<endl;
            }
                else{
                	cout<<"No puedes pasar del limite de tu saldo es de: $ "<<saldo<<endl;
				}
                break;
                
                case 3:
                system("cls");
				cout<<"\t\t\t\t Ingresa la cantidad que desea depositar:"<<endl;
				cin>>deposito;
                break;
                
               
                
                
                case 4:
                system("cls");
                cout<<"\t\t\t\t Movimiento: \n "<<endl;
                res=saldo-retiro + deposito;
                cout<<"\t\t\t\t Total de saldo que sobra:"<<res<<"\n"<<endl;
                cout<<"\t\t\t\t saldo = "<<saldo<<"\n"<<endl;
                cout<<"\t\t\t\t retiro = "<<retiro<<"\n"<<endl;
                cout<<"\t\t\t\t deposito = "<<deposito<<"\n"<<endl;
                 break;
                
                
            
                
                
                
                default:
                  system("cls");
                  cout<<"\t\t\t Selecciona una opción valida\n";
                  break;
            }  
            cout<<"\t\t ¿Deceas seguir dentro del sistema?"<<endl;
            cout<<"\t\t 1.- SI"<<endl;
            cout<<"\t\t 2.- NO"<<endl;
            cout<<"\t\t Selecciona una opción: "<<endl;
            cin>>opc1;
     }
     while(opc1 == 1);
}
  
  
 
  cin.get();
  return 0;
}
