#include<iostream>
#include<vector>
using namespace std;
int potencia(int a,int b){
    int r_1=1;
    for(int i=0;i<b;i++){
        r_1*=a;
    }
    return r_1;
}
string bisiesto(int _anio){
    string _b ="es bisiesto";
    string _nb ="no es bisiesto";
    if(_anio%100==0){
        if(_anio%400==0){return _b;}
        else{return _nb;}

    }
    else{
        if(_anio%4==0){return _b;}
        else{return _nb;}
    }
}

void lista_primos(int n_l){
    vector <int> primos;
    int c_p=0;
    for(int i=1;i<=n_l;i++){
        for(int j=i;j>0;j--){
            if(c_p>2){break;}
            else{
                if(i%j==0){c_p++;}
            }
        }
        if(c_p==2){primos.emplace_back(i);}
        c_p=0;
    }
    cout<<"Los numeros primos encontrados entre el 1 y el "<<n_l<<" es : ";
     for(auto it=primos.begin();it!=primos.end();it++){
         cout<<*it<<" ";
     }
}

void funcion(){
    int n_5;
    int x=0;
    int ac_5=0;
    cout<<"Opciones "<<endl;
    cout<<"1.- Introducir un valor x entero comprendido entre 0 y 100."<<endl;
    cout<<"2.- Validar que sea un valor par."<<endl;
    cout<<"3.- Sumar todos los números impares desde el 0 hasta el valor de x"<<endl;
    do{
        cout<<"Ingrese un numero del 1 al 3 : ";cin>>n_5;
    }while(not(n_5>0&&n_5<4)==true);
    
    switch (n_5)
    {
    case 1:
    do{
        cout<<"Ingrese una numero entre el 1 y el 100 : ";cin>>x;
    }while(not(x>0&&x<101)==true);
    cout<<"El numero ha sido aceptado.. "<<endl;
        break;
    case 2:
    do{
        cout<<"Introdusca un numero par : ";cin>>x;
    }while(not(x%2==0)==true);
    cout<<"El numero es par ..."<<endl;
    break;

    case 3 :
    cout<<"Introduce un numero : ";cin>>x;
    for(int i=1;i<x;i++){
        if(i%2==0){continue;}
        else{ac_5+=i;}
    }
    break;
    cout<<"La suma acumulada de los numeros impares del 0 al "<<x<<" es : "<<ac_5<<endl;
    default:
        break;
    }
    
}

//5.1
// int suma_impares(){
//     int n_5=0;
//     int al_5=0;
//     do{
//         cout<<"Ingrese un numero entre el 1 y el 100 : ";cin>>n_5;

//     }while((n_5%2==0&&(n_5>0&&n_5<101))==false);
//     for(int i=1;i<=n_5;i++){
//         if(i%2==1){al_5+=i;}
//     }
//     cout<<"La suma de los numeros impares del 0 al "<<n_5<<" es : "<<al_5<<endl;
//     return 0;
    
// }

int main(){/*


    //1
     int a_1,b_1;
     cout<<"Ejercicio 1"<<endl;
     cout<<"Ingrese 2 numeros para ejecutar la potencia : ";cin>>a_1;cin>>b_1;
     int c_1=potencia(a_1,b_1);
     cout<<"El resultado de la potencia es : "<<c_1<<endl;
    //2
     cout<<"Ejercicio 2"<<endl;
     int anio=0;
     cout<<"Ingrese un anio : ";cin>>anio;
     cout<<"El anio ingresado "<<bisiesto(anio)<<endl;


    //3
    //aun no puedo resolverla


    //4
    cout<<"Ejercicio 4"<<endl;
    int n_4;
    cout<<"Ingrese un numero limite para su lista de primos : ";cin>>n_4;
    lista_primos(n_4);
    */
    //5
   cout<<"\nEjercicio 5 "<<endl;
  funcion();

   return 0;
   
}