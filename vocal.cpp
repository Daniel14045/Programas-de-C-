#include "iostream"
using namespace std;
int main(){
	
	char vocal;
	
	cout<<"Coloca una letra vocal o consonante\n";
	cin>>vocal;
	
	switch(vocal){
		
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':	
		
		cout<<"La letra digitada es : vocal \n";
		break;
		
		defauld:
			
			cout<<"La letra digitada es : consonante \n";

		
	cin.get();
	return 0;
}

