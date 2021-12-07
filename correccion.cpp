#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<vector>
// definir las teclas o utilizar
#define ENTER 13
#define BACKESPACE 8
int saldo=10000,retiro=0,movimiento=0,dep=0,res;
using namespace std;
// se declara la funcion principal
int main(){
 // declarar las variables para las opciones a elegir
 int opc, opc1;
// declarar los vectores para los usuarios y sus contraseñas
vector<string>usuarios;
vector<string>pass;
// se definen los usuarios del el vector
usuarios.push_back("Jesus");
// definir los password del vector 
pass.push_back("45697823");
// declarar las variables para el password 
string usuario, password;
// declarar las variables para el contador 
int contador = 0;
bool ingresa = false;
// declarar el ciclo del password 
 
 do{
     system("cls");//Sirve para que limpie la pantalla
     cout<<"\t\t\t login de usuario Jesus"<<endl;
     cout<<"\t\t\t _____________________________"<<endl;
     cout<<"\n\t Usuario: ";
     getline(cin,usuario);
     char caracter;
     cout<<"\t Nip:";
     caracter = getch();
     password = "";
     while (caracter != ENTER){
          if(caracter != BACKESPACE){
             password.push_back(caracter);
             cout<<"*";
          }
          else{
              if(password.length()>0){//length=Mide la longitud
                  cout<<"\b\b";
                  password = password.substr(0, password.length()-1);
              }
          }
          caracter = getch();//getch=Sirve para el pausado
     }
     for(int i = 0; i< pass.size(); i++){
          if(usuarios[i] == usuario && pass[i] == password){
           ingresa = true;
           break;
         }
 }
 
     if(!ingresa){
          cout<<"\n\n El usuario y/o nip no son correctos."<<endl;
         cout<<"\n Solo tiene 3 intentos para ingresar al sistema: Total de intentos: "<<contador+1<<endl;
         cin.get();
         contador++;
     }
}
// termina el login
while(ingresa == false && contador < 3);
  if(ingresa == false){
      cout<<"Hasta luego se cumplieron tus intentos permitidos. Bye"<<endl;
  }
  else{
     do{
         system("cls");//Sirve para que limpie la pantalla
         cout<<"\n";
         cout<<"\t\t\t Bienvenido al cajero automatico "<<endl;//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
         cout<<"\t\t\t __________________________________"<<endl;
         cout<<"\t\t\t 1.-Verifica Saldo "<<endl;
         cout<<"\t\t\t 2.-Retiro de  dinero"<<endl;
         cout<<"\t\t\t 3.Deposito"<<endl;
         cout<<"\t\t\t 4.-Movimiento "<<endl;
         cout<<"\n";
         cout<<"\t\t\t Selecciona una opción: ";
         cin>>opc;//almacena
            switch (opc){
                case 1:
                system("cls");
                cout<<"\t\t\t\t Verifica tu saldo es: "<<saldo<<endl;
                cout<<"\t\t\t\t ______________________________ "<<endl;
                cout<<"\t\t\t\t Total de saldo que sobra: "<<res<<endl;
                break;//Para terminar
                case 2:
                system("cls");//Sirve para que limpie la pantalla
                cout<<"\t\t\t\t Cual es la cantidad que vas sacar"<<endl;
                cin>>retiro;//almacena
                if(retiro<=10000){
                cout<<"\t\t\t\t  El retiro se ha realizado "<<endl; 
        }
                else{
                    cout<<"\t\t\t No puedes pasarte del limite de tu saldo es de:$"<<saldo<<endl;
                }
                break;//Para terminar
                case 3:
                system("cls");//Sirve para que limpie la pantalla
                cout<<"\t\t\t\t Ingresa la cantidad de dinero que quieres depositar "<<endl;
                cin>>dep;
                break;//Para terminar
                case 4:
                system("cls");//Sirve para que limpie la pantalla
                cout<<"\t\t\t\t Movimiento: "<<endl;
                res=saldo-retiro+dep;
                cout<<"\t\t\t\t Total de saldo que sobra: "<<res<<endl;
                cout<<"Retiro:"<<retiro<<"\n"<<endl;
                cout<<"Saldo:"<<saldo<<"\n"<<endl;
                cout<<"Deposito:"<<dep<<"\n"<<endl;
                break;//Para terminar
                default:
                  system("cls");//Sirve para que limpie la pantalla
                  cout<<"\t\t\t Selecciona una opción valida";
                  break;//Para terminar
            }  // termina el do
            cout<<"\t\t ¿Deceas seguir dentro del sistema?"<<endl;
            cout<<"\t\t 1.- SI"<<endl;
            cout<<"\t\t 2.- NO"<<endl;
            cout<<"\t\t Selecciona una opción: "<<endl;
            cin>>opc1;
     }
     while(opc1 == 1);
  }
 
  cin.get();//para pausar
  return 0;//para que no de error
}
