/* estructura basica de una rutina en C++*/
/* Primero son las Librerias*/
#include"stdio.h"
#include"windows.h"
#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<vector>
#include<fstream>
// definir las teclas o utiliza
#define ENTER 13
#define BACKESPACE 8
using namespace std;
// se declara la funcion principal
int opc,opc1,bien=0,mal=0;
// declarar las variables para las opciones a elegir
float prom, prom1;
float cal1,cal2,cal3;
struct humano{
char nombre[15];
};
int main(){
int segundos=2;
string nombre="Jesus";
char frase[40],rep[100],temporal[100];
char pal;
int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=5;
int repetido=0,gano=0;
// declarar los vectores para los usuarios y sus contrase�as
vector<string>usuarios;
vector<string>pass;
// se definen los usuarios del el vector
usuarios.push_back("Jesus");
// definir los password del vector 
pass.push_back("124578");
// declarar las variables para el password 
string usuario, password;
// declarar las variables para el contador 
int contador = 0;
bool ingresa = false;
// declarar el ciclo del password
{
    cout<<"18/11/2021"<<endl;
    cout<<"CONALEP NAUCALPAN 1"<<endl;
    cout<<"\t\t\t Integrantes"<<endl;
    cout<<"\t\t\t Lopez Antonio Wendy Jaqueline"<<endl;
    cout<<"\t\t\t Miranda Robledo Evelin Citlalli"<<endl;
    cout<<"\t\t\t Hernandez Carrizosa Zahory Michelle"<<endl;
    cout<<"\t\t\t Hernandez Cruz Alessandra Lizeht"<<endl;
    cout<<"\t\t\t Sanchez Reyes Daniel"<<endl;
    cout<<"\t\t\t Zuniga Gonzales Luis Angel"<<endl;
    cout<<"\t\t\t Lopez Miguel Jesus Antonio"<<endl;
    cout<<"\t\t\t Martinez Cabrera Jose David\n"<<endl;
    getch();
}
    system("cls");//Sirve para que limpie la pantalla
	for(int s=0; s<=21; s++)
	cout<<"";
	cout<<"\t\t\t\t Bienvenido a tu Examen....\n";
	for(int s= 0; s<=90; s++)
	cout<<"";
	for(int s= 0; s<=100; s++){
		cout<<char(219);
		Sleep(segundos*1000/100);
	}
	
	do{
	system("cls");//Sirve para que limpie la pantalla
     cout<<" login de usuario Jesus"<<endl;
     cout<<"\t\t\t _____________________________"<<endl;
     cout<<"\n\t Usuario: ";
     getline(cin,usuario);
     char caracter;
     cout<<"\t Contrase�a:";
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
     for(int l = 0; l< pass.size(); l++){
     	 if(usuarios[l] == usuario && pass[l] == password){
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
// termina el login
while(ingresa == false && contador < 3);
  if(ingresa == false){
      cout<<"Hasta luego se cumplieron tus intentos permitidos. Bye"<<endl;
}		
        system("cls");//Sirve para que limpie la pantalla
        humano persona[5];
        for(int l = 0; l < 1; l++){
        cout<<"Escribe tu nombre"<<l+1<<":\n";
        cin>>persona[l].nombre;
}

        cout<<"\t\t\t Bienvenido a tu Examen\n"<<endl;//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
		cout<<"\t\t\t Porfavor selecciona alguna de las opciones a temas\n"<<endl;//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
		cout<<"\t\t\t 1.-Word\n";//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
		cout<<"\t\t\t 2.-Power point\n";//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
		cout<<"\t\t\t 3.-Excel\n";//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
		cin>>opc;
		switch(opc){
			case 1:
				system("cls");//Sirve para que limpie la pantalla
				char r1,r2,r3;
				cout<<"\t\t\t Seleccionaste el tema tipo de datos:"<<endl;//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
			    cout<<"\t\t\t Porfavor selecciona la respuesta correcta:\n";//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
			    cout<<"\t\t\t �Que es Word\n";//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
				cout<<"\t\t\t a) Un programa informatico orientado al procesamiento de textos\n";//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea	
				cout<<"\t\t\t b) Es un software de ofimatica para realizar presentacion de diapositivas\n";//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
				cout<<"\t\t\t c) Es una hoja de calculo desarrollada por micrososft para Windows\n";//\t\t\t=Sirve para dar espacios,en cada palabra salto de linea
				cin>>r1;//almacena
				if(r1 == 'a'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es a\n";
					mal=mal+1;
					cout<<"Retroalimentacion\n";
					cout<<"La respuesta correcta es:\n";
					cout<<"Un programa informatico orientado al procesamiento de textos\n";
				}
				cout<<"\t\t\t �A que nos ayuda Word\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t a) Diapositivas,Animaciones,Transiciones\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Hojas de calculo,formulas,Graficas\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c) Elalobrar,leer,editar y guardar\n";/*imprimimos en pantalla el mensaje*/
				cin>>r2;//almacena
				if(r2 == 'c'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
					cout<<"Retroalimentacion\n";
					cout<<"La respuesta correcta es:\n";
					cout<<"Elalobrar,leer,editar y guardar\n";
				}
				cout<<"\t\t\t �Cuales son las funciones de Word\n";
				cout<<"\t\t\t a) Archivos,Inicio,Insertar,Dise�o,Animaciones,Tranciones,,Referencias,Vista\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Archivos,Inicio,Insertar,Dibujar,Dise�o,Disposicion,Referencia,correspondencia,Resivar,Vista y ayuda\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c) Incio,Insertar,Disposicion de pagina,Formulas,Datos,Revisar,Vista,Programador,Ayuda\n";/*imprimimos en pantalla el mensaje*/
				cin>>r3;//almacena
				if(r3 == 'b'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
					cout<<"Retroalimentacion\n";
					cout<<"La respuesta correcta es:\n";
					cout<<"Archivos,Inicio,Insertar,Dibujar,Dise�o,Disposicion,Referencia,correspondencia,Resivar,Vista y ayuda\n";
				}
				cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
				cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					cout<<"\t\t\t Lo siento sigue estudiando:";
				}
			
				break;//Para terminar
				
				case 2:
				cout<<"\t\t\t�Que es PowerPoint\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t a)  Es una hoja de calculo desarrollada por micrososft para Windows\n";/*imprimimos en pantalla el mensaje*/	
				cout<<"\t\t\t b)  Es un software de ofimatica para realizar presentacion de diapositivas\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c)  Un programa informatico orientado al procesamiento de textos\n";/*imprimimos en pantalla el mensaje*/
				cin>>r1;
				if(r1 == 'b'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
					cout<<"Retroalimentacion\n";
					cout<<"La respuesta correcta es:\n";
					cout<<" Es un software de ofimatica para realizar presentacion de diapositivas\n";
				}
				cout<<"\t\t\t �Como agrego una diapositiva?\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t a) Menu archivo,Nueva diapositiva\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Insertar,Portada\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c) Archvo,Dise�o\n";/*imprimimos en pantalla el mensaje*/
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es c\n";
					mal=mal+1;
					cout<<"Retroalimentacion\n";
					cout<<"La respuesta correcta es:\n";
					cout<<"Archvo,Dise�o\n";
				}
				cout<<"\t\t\t �Cuales son las Funciones de Powepoint?\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t a) Archivos,Inicio,Insertar,Dise�o,Animaciones,Tranciones,,Referencias,Vista\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Archivos,Inicio,Insertar,Dibujar,Dise�o,Disposicion,Referencia,correspondencia,Resivar,Vista y ayuda\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c) Incio,Insertar,Disposicion de pagina,Formulas,Datos,Revisar,Vista,Programador,Ayuda\n";/*imprimimos en pantalla el mensaje*/
				cin>>r3;
				if(r3 == 'a'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es a\n";
					mal=mal+1;
					cout<<"Retroalimentacion\n";
					cout<<"La respuesta correcta es:\n";
					cout<<"Archivos,Inicio,Insertar,Dise�o,Animaciones,Tranciones,,Referencias,Vista\n";
				}
				cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
				cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					cout<<"\t\t\t Lo siento sigue estudiando:";
				}
					
				break;//Para terminar
				
				case 3:	
				cout<<"\t\t\t�Que es Excel\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t a) Un programa informatico orientado al procesamiento de textos\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Es una hoja de calculo desarrollada por micrososft para Windows\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c)  Un programa informatico orientado al procesamiento de textos\n";/*imprimimos en pantalla el mensaje*/
				cin>>r1;//almacena
				if(r1 == 'b'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
					cout<<"Retroalimentacion\n";
					cout<<"La respuesta correcta es:\n";
					cout<<"Es una hoja de calculo desarrollada por micrososft para Windows\n";
				}
				cout<<"\t\t\t �Como se maneja la informacion en Excel?\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t a) Paginas de texto\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Diapositivas\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c) La maneja en celdas\n";/*imprimimos en pantalla el mensaje*/
				cin>>r2;//almacena
				if(r2 == 'c'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es c\n";
					mal=mal+1;
					cout<<"Retroalimentacion\n";
					cout<<"La respuesta correcta es:\n";
					cout<<"La maneja en celdas\n";
				}
				cout<<"\t\t\t �Porque es importante en el Formato de los documentos en Excel?\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t a) Para darle claridad sobre el tipo de informacion que se esta manejando\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Para dar un mejor color\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c) Para dar un mejor margen\n";/*imprimimos en pantalla el mensaje*/
				cin>>r3;//almacena
				if(r3 == 'a'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es a\n";
					mal=mal+1;
					cout<<"Retroalimentacion\n";
					cout<<"La respuesta correcta es:\n";
					cout<<"Para darle claridad sobre el tipo de informacion que se esta manejando\n";
				}
				cout<<"Tu promedio es:"<<endl;
				cout<<"Por favor ingresa la primera calificacion"<<endl;
                cin>>cal1;
                cout<<"Por favor ingresa la segunda calificacion"<<endl;
                cin>>cal2;
                cout<<"Por favor ingresa la tercera calificacion"<<endl;
                cin>>cal3;

                prom = (cal1+ cal2+ cal3) /3;

                cout<<"El promedio final es "<<prom<<endl;
                if(prom >= 7){
                cout<<"Tu calificacion es aprobatoria"<<endl;
                }
                else{
                cout<<"Tu calificacion no es aprobatoria"<<endl;
                }
				cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
				cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					cout<<"\t\t\t Lo siento sigue estudiando:\n";
				}
				
	cout<<"\t\t\t Muchas felicidades por Aprobar es Hora de Jugar\n";
	cout<<"\t\t\t  Bienvenido al Juego del Ahorcado  **\n\n";
	cout<<"\t\t\t _________________________________________"<<endl;
    cout<<"\t\t\t  Introduzca la palabra a adivinar por el jugador:\n ";
    cin>>frase;
    system("cls");
    longitud = 0;
    inicial = 0;
    j = 0;
    rep[0] = ' ';
    rep[1] = '\0';
    do{
        system("cls");
        temp=0;
        if(inicial == 0){
            for(i=0;i<strlen(frase);i++){
                if(frase[i] == ' '){
                    temporal[i] = ' ';
                    longitud++;
                }
                else{
                    temporal[i] = '_';
                    longitud++;
                }
            }
        }
        inicial = 1;
        temporal[longitud] = '\0';
        for(i=0;i<strlen(rep);i++){
            if(rep[i] == pal){
                repetido = 1;
                break;
            }
            else{
               repetido = 0;
           }
        }
        if(repetido == 0){
            for(i=0;i<strlen(frase);i++){
                if(frase[i] == pal){
                    temporal[i] = pal;
                    acertado++;
                    temp=1;
                }
            }
        }
        if(repetido == 0){
            if(temp == 0){
                oportunidades = oportunidades - 1;
            }
        }
        else{
            cout<<"  Ya se ha introducido este caracter o letra";
            cout<<"\n\n";
        }
        cout<<"\n";
        for(i=0;i<strlen(temporal);i++){
            cout<<temporal[i];
        }
        cout<<"\n";
        if(strcmp(frase,temporal) == 0){
            gano = 1;
            break;
        }
        cout<<"\n  Letras Acertadas:"<<acertado;
        cout<<"\n  Oportunidades Restantes:  "<<oportunidades;
        cout<<"\n";
        rep[j] = pal;
        j++;
        if (oportunidades==0){
           break;
        }
        cout<<"  Introduzca una letra: ";
        cin>>pal;
    }
    while(oportunidades != 0);
    if(gano){
        cout<<"\n\n  Enhorabuena, has ganado Sigue asi.\n";
    }
    else{
        cout<<"\n\n  Has perdido.\n";
    }
			
				break;
		}
				cout<<"\t\t\tQuieres salir de la aplicacion:"<<endl;/*imprimimos en pantalla el mensaje*/
                cout<<"\t\t\t si\n";/*imprimimos en pantalla el mensaje*/
                cout<<"\t\t\t no\n";/*imprimimos en pantalla el mensaje*/
	            cin>>opc1;//almacena
	            
	            
	            ofstream file;
                file.open("Alumno.txt");
                file<<"Tu Nombre es:"<<nombre<<endl;
                file<<"Respuetas Correctas:"<<bien<<endl;
                file<<"Respuestas Incorrectas:"<<mal<<endl;
                file<<"Promedio Final:"<<prom<<endl;
                if(bien<=2){
					file<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					file<<"\t\t\t Lo siento sigue estudiando:\n";
				}
                file.close();
}
while(opc1 !=2);
cin.get();
return 0;
}
