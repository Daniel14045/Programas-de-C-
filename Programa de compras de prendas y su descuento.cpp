#include <iostream> /*Aqui agregamos la libreria iostream*/
using namespace std; /* Declaracion del espacio de nombres*/
int main (){    /*Aqui pusimos la funcion principal de ejecutar el programa*/

 int compras, precio; /*Declaramos las variables*/
 float descuento,total; /*Declaramos las variables de tipo flotante*/

    
 
    cout<<"ingrese el precio del producto: "; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
    cin>>precio; /*Aqui almacenamos la variable precio*/
    
    cout<<"ingrese el numero de prendas  seleccionados: "; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
    cin>>compras; /*Aqui almacenamos la variable compras*/
 
    if (compras > 35) /*Aqui estamos evaluando una expresion condicional que se cumple*/
    {
        cout<<"usted tendra un descuento del 40%" << endl; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
        
        total = precio * compras; /* Aqui estamos asiendo la multiplicacion de  dos vaeriables*/
        
        descuento=total-(total*0.40); /*Aqui esmatos asiedndo una resta y multiplicacion entre el descuento y el total a pagar*/
        
        cout<<"el total de su compra con descuento incluido es:"<<descuento<<endl; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
	}
	else if (compras > 25) /*Aqui estamos agregando una condicion y sentencia*/
    {
        cout<<"usted tendra un descuento del 25%"; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
        
        total = precio * compras; /* Aqui estamos asiendo la multiplicacion de  dos vaeriables*/
        
        descuento=total-(total*0.25); /*Aqui esmatos asiedndo una resta y multiplicacion entre el descuento y el total a pagar*/
        
        cout<<"el total de su compra con descuento es: "<<descuento<<endl; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
    }
    else if (compras > 10 ) /*Aqui estamos agregando una condicion y sentencia*/
	{
        cout<<"usted tendra un descuento del 15%"; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
        
        total = precio * compras; /* Aqui estamos asiendo la multiplicacion de  dos vaeriables*/
        
        descuento=total-(total*0.15); /*Aqui esmatos asiedndo una resta y multiplicacion entre el descuento y el total a pagar*/
        
        cout<<"el total de su compra con descuento es: "<<descuento<<endl; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
    }
    else /*Si nose cumple ninguna condicion anterior*/
    {
        cout<<"usted no tendra descuento"; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
        
        cout<<"el total de su compra sin descuento es: "<<precio<<endl; /*Aqui imprimimos lo que vamos a escribir y enseñar en el programa*/
    }
 
    return 0;  /* Aqui cerramos el codigo*/
}
