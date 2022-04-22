/*1*/
#include <iostream>
using namespace std;
int main(){
    int a=0;int b =0;
    cout<<"Ingrese un numero entero : ";cin>>a;
    cout<<"Ingrese otro numero entero : ";cin>>b;
    cout<<"El producto de "<<a<<" x "<<b<<" es igual a : "<<a*b<<endl;

    string nombre,apellido_p,apellido_m;
    cout<<"Ingrese su primer nombre : ";cin>>nombre;
    cout<<"Ingrese su apellido paterno : ";cin>>apellido_p;
    cout<<"Ingrese su apellido materno : ";cin>>apellido_m;
    cout<<"Su correo institucional es : "<<nombre[0]<<apellido_p<<apellido_m[0]<<"@unsa.edu.pe"<<endl;
    return 0;
}