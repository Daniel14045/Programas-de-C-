#include "iostream"
using namespace std;
int main (){
	int arreglo[20];
	for(int z = 0; z <=50; z++){
	
	if( z % 5 == 0){
		arreglo[z] = z;}
		
	}	
	
	for(int z = 0; z<=50; z++){
	if(z % 5 == 0){
		cout<<arreglo[z]<<endl;}
		
	}
	
	return 0;
}
		
