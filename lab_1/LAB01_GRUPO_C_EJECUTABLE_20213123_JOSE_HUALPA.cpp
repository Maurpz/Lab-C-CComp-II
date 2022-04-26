/*1*/
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
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

    /*3*//*
    string hora_p,h_aux;
    int h_4,m_4;
    cout<<"Ingrese la hora como muestra el ejemplo (HH:MM) : ";cin>>hora_p;
    h_4=stoi(hora_p[0]+hora_p[1])

    
    /*4*/

    /*5*/
    
    float n_f =0;
    cout<<"Introduzca el numero flotante : ";cin>>n_f;
    cout<<"EL numero redondeado es : "<<round(n_f)<<endl;
    /*6*/
    

    bool s=true;
    int n_6=0;
    vector <int> n_b;
    do{
    cout<<"Ingrese un numero mayor que 100 y menor que 999 : ";cin>>n_6;
    } while (s!=(n_6>=100 && n_6<=999));

    for(int i=9;i>=0;i--){
        if (n_6>0){
            if(pow(2,i)>n_6){
                if(n_b.size()>=1){n_b.emplace_back(0);}
                continue;}
            else{n_6-=pow(2,i);n_b.emplace_back(1);}
        }
        else{n_b.emplace_back(0);}
    }
    for(auto it=n_b.begin();it!=n_b.end();it++){cout<<*it;}
    cout<<endl;
    /*7*/
    int n_71,n_72;
    cout<<"Ingrese 2 numeros por el teclado : ";cin>>n_71;cin>>n_72;
    if((n_71%n_72)==0){cout<<n_72<<" es divisor de "<<n_71<<endl;}
    else if((n_72%n_71)==0){cout<<n_71<<" es divisor de "<<n_72<<endl;}
    else{cout<<"Ninguno de los 2 numeros ingresados son divisibles entre si .."<<endl;}
    
    
    
    
    




}