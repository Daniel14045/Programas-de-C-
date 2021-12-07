#include"iostream"
#include"stdio.h"
#include "windows.h"

using namespace std;

int main(){
	
	int segundos =10;
	
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
	return 0;
	
	
	
	
	
}
