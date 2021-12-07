#include"stdio.h"
#include<cstdlib>
#include<iostream>
#include<conio.h>
#include "windows.h"
#include<string.h>
#include<vector>
#define ENTER 13
#define BACKESPACE 8
using namespace std;
int opc,opc1,bien=0,mal=0;
float promedio;
string nombre;
int main(){

int saldo=10000,retiro=0,movimiento=0,dep=0,res;
int opc, opc1;
 
vector<string>usuarios;
vector<string>pass;

int a,b,c,d, resp,segundos=10;


 for(int i =0; i<=21; i++)
	
	cout<<"\n";
	cout<<"\t\t\t\t Cargando...\n";
	for(int i=0; i<=79; i++)
	cout<<"_";
	for(int i=0; i<=79; i++){
		
		cout<<char(219);
		Sleep(segundos*1000/80);
}
		cout<<"Completado...\n"<<endl;

{

system("cls");
cout<<"18/11/2021 \n";

cout<<"Plantel Conalep Naucalpan 1 \n";

cout<<"\t\t\t\t Integrantes \n"<<endl;

cout<<"\t\t\t\t Miranda Robledo Evelin Citlalli \n"<<endl;

cout<<"\t\t\t\t Sanchez Reyes Daniel \n"<<endl;

cout<<"\t\t\t\t Zuñiga Gonzalez Luis Angel\n"<<endl;

cout<<"\t\t\t\t Hernandez Cruz Alessandra Lizeth \n"<<endl;

cout<<"\t\t\t\t Lopez Antonio Wendy Jaqueline \n"<<endl;

cout<<"\t\t\t\t Martinez Cabrera Jose David  \n"<<endl;

cout<<"\t\t\t\t Lopez Miguel Jesus Antonio \n"<<endl;
getch();

}
 
usuarios.push_back("Jesus");

pass.push_back("45697823");
 
string usuario, password;

int contador = 0;
bool ingresa = false;

    do{
        system("cls");//Sirve para que limpie la pantalla
     cout<<" login de usuario Jesus"<<endl;
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
      
       cout<<"\t\t\t Por favor ingres tu nombre:\n"<<endl;
        getline(cin,nombre);
        cout<<"\t\t\t Bienvenido al Test de Programacion Basica:\n"<<nombre<<endl;
        cout<<"\t\t\t Porfavor selecciona alguna de las opciones a temas\n"<<endl;
        cout<<"\t\t\t 1.-Tipos de datos\n";
        cout<<"\t\t\t 2.-Tipos de ciclos\n";
        cout<<"\t\t\t 3.-Tipos de sentencias de flujo\n";
        cin>>opc;
        switch(opc){
            case 1:
                system("cls");
                char r1,r2,r3;
                cout<<"\t\t\t Seleccionaste el tema tipo de datos:"<<endl;
                cout<<"\t\t\t Porfavor selecciona la respuesta correcta:\n";
                cout<<"\t\t\t¿Cual es la instruccion o comando para almacenar los datos en c++\n";
                cout<<"\t\t\t a) cout\n";    
                cout<<"\t\t\t b) cin\n";
                cout<<"\t\t\t c) getline\n";
                cin>>r1;
                if(r1 == 'b'){
                    cout<<"\t\t\t Correcto muy bien sigue asi\n";
                    bien=bien+1;
                }
                else{
                    cout<<"\t\t\t Incorrecto la respuesta es b\n";
                    mal=mal+1;
                }
                cout<<"\t\t\t ¿Cual es la forma correcta de declarar una variable tipo bolian?\n";
                cout<<"\t\t\t a) bol\n";
                cout<<"\t\t\t b) dooble\n";
                cout<<"\t\t\t c) bool\n";
                cin>>r2;
                if(r2 == 'c'){
                    cout<<"\t\t\t Correcto muy bien sigue asi\n";
                    bien=bien+1;
                }
                else{
                    cout<<"\t\t\t Incorrecto la respuesta es b\n";
                    mal=mal+1;
                }
                cout<<"\t\t\t ¿El lenguaje de programacion C++ es debil tipeo?\n";
                cout<<"\t\t\t a) Falso\n";
                cout<<"\t\t\t b) Verdadero\n";
                cout<<"\t\t\t c) No corresponde\n";
                cin>>r3;
                if(r3 == 'b'){
                    cout<<"\t\t\t Correcto muy bien sigue asi\n";
                    bien=bien+1;
                }
                else{
                    cout<<"\t\t\t Incorrecto la respuesta es b\n";
                    mal=mal+1;
                }
                cout<<"Tu promedio es:"<<promedio<<endl;
                cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
                cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
                if(bien>=2){
                    cout<<"\t\t\t Felicidades estas aprobado:\n"<<nombre;
                }
                else{
                    cout<<"\t\t\t Lo siento sigue estudiando:"<<nombre;
                }

                break;
                case 2:
                system("cls");    
                cout<<"\t\t\t¿Cual son los tipos de ciclos\n";
                cout<<"\t\t\t a) for\n";    
                cout<<"\t\t\t b) cin\n";
                cout<<"\t\t\t c) if\n";
                cin>>r1;
                if(r1 == 'a'){
                    cout<<"\t\t\t Correcto muy bien sigue asi\n";
                    bien=bien+1;
                }
                else{
                    cout<<"\t\t\t Incorrecto la respuesta es b\n";
                    mal=mal+1;
                }
                cout<<"\t\t\t ¿Cuantos tipos de ciclos hay en c++?\n";
                cout<<"\t\t\t a) 6\n";
                cout<<"\t\t\t b) 9\n";
                cout<<"\t\t\t c) 3\n";
                cin>>r2;
                if(r2 == 'c'){
                    cout<<"\t\t\t Correcto muy bien sigue asi\n";
                    bien=bien+1;
                }
                else{
                    cout<<"\t\t\t Incorrecto la respuesta es b\n";
                    mal=mal+1;
                }
                cout<<"\t\t\t ¿El ciclo es una serie de casos?\n";
                cout<<"\t\t\t a) Falso\n";
                cout<<"\t\t\t b) Verdadero\n";
                cout<<"\t\t\t c) No corresponde\n";
                cin>>r3;
                if(r3 == 'b'){
                    cout<<"\t\t\t Correcto muy bien sigue asi\n";
                    bien=bien+1;
                }
                else{
                    cout<<"\t\t\t Incorrecto la respuesta es b\n";
                    mal=mal+1;
                }
                cout<<"Tu promedio es:"<<promedio<<endl;
                cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
                cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
                if(bien>=2){
                    cout<<"\t\t\t Felicidades estas aprobado:\n"<<nombre;
                }
                else{
                    cout<<"\t\t\t Lo siento sigue estudiando:"<<nombre;
                }

                break;
                case 3:
                system("cls");    
                cout<<"\t\t\t¿Cual es la setencia de flujos\n";
                cout<<"\t\t\t a) for\n";    
                cout<<"\t\t\t b) break\n";
                cout<<"\t\t\t c) if\n";
                cin>>r1;
                if(r1 == 'c'){
                    cout<<"\t\t\t Correcto muy bien sigue asi\n";
                    bien=bien+1;
                }
                
                else{
                    cout<<"\t\t\t Incorrecto la respuesta es b\n";
                    mal=mal+1;
                }
                cout<<"\t\t\t ¿Cuales son tipos de sentencias flujo ?\n";
                cout<<"\t\t\t a) else,if,else if,switch\n";
                cout<<"\t\t\t b) cout,cin\n";
                cout<<"\t\t\t c) break,do,while\n";
                cin>>r2;
                if(r2 == 'a'){
                    cout<<"\t\t\t Correcto muy bien sigue asi\n";
                    bien=bien+1;
                }
                else{
                    cout<<"\t\t\t Incorrecto la respuesta es b\n";
                    mal=mal+1;
                }
                cout<<"\t\t\t ¿La sentencias de flujo se pueden utilizar en cualquier programa?\n";
                cout<<"\t\t\t a) Falso\n";
                cout<<"\t\t\t b) Verdadero\n";
                cout<<"\t\t\t c) No corresponde\n";
                cin>>r3;
                if(r3 == 'b'){
                    cout<<"\t\t\t Correcto muy bien sigue asi\n";
                    bien=bien+1;
                }
                else{
                    cout<<"\t\t\t Incorrecto la respuesta es b\n";
                    mal=mal+1;
                }
                cout<<"Tu promedio es:"<<promedio<<endl;
                cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
                cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
                if(bien>=2){
                    cout<<"\t\t\t Felicidades estas aprobado:\n"<<nombre;
                }
                else{
                    cout<<"\t\t\t Lo siento sigue estudiando:"<<nombre;
                }

                break;
            }
 
        cout<<"\t\t\tQuieres salir de la aplicacion:"<<endl;
        cout<<"\t\t\t 1=si\n";
        cout<<"\t\t\t 2=no\n";
        cin>>opc1;
 
    }while(opc1 !=2);
    cin.get();
    return 0;
}

      
      
      
      
      
      
      
      
      
      
