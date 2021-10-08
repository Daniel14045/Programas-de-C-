#include<iostream>
using namespace std;
int main(){
    int tope = 2021, an, atotales, meses = 12, mes, dia = 31, dias, horas = 24, hrs, min = 60, minutos, seg = 60 , segundos;
    string nombre;
    cout<<" Hola Bienvenido por favor ingresa tu nombre para poder saludarte"<<endl;
    cin>>nombre;
    cout<<" Es un gusto saludarte: "<<nombre<<" Por favor ingresa el año en el que naciste ejemplo 1990"<<endl;
    cout<<"Para poder indicarte tus años, meses, dias, horas, minutos y segundos de vida"<<endl;
    cin>>an;
    atotales = tope - an;
    mes = an * meses;
    dias = mes * dia;
    hrs = dias * horas;
    minutos = hrs * min;
    segundos = minutos * seg;
    cout<<" Genial "<<nombre<<" Tu edad actual es de: "<<atotales<< " Años"<<endl;
    cout<<" Los meses equivalentes a tus "<<atotales<<" años son: "<<mes<< " meses "<<endl;
    cout<<" Los dias equivalentes a tus "<<mes<<" meses son: "<<dias<< " dias "<<endl;
    cout<<" Las horas equivalentes a tus "<<dias<<" dias son: "<<hrs<< " horas "<<endl;
    cout<<" Los minutos equivalentes a tus "<<hrs<<" horas son: "<<minutos<< " Minutos "<<endl;
    cout<<" Los segundo equivalentes a tus "<<minutos<<" horas son: "<<segundos<< " segundos "<<endl;
    if(atotales >= 18){
      cout<<"con tu edad actial sabemos que eres mayor de edad"<<endl;
    }
    else{
      cout<<"con tu edad actial sabemos que No eres mayor de edad"<<endl;
    }
    
    return 0;
    cin.get();
}
