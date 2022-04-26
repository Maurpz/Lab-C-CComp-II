
#include<iostream>
#include<vector>
using namespace std;
int main(){

    //Estan comentados para que no generen problemas a la hora de compilarlo

    //1
    cout<<"Ejercicio 1 "<<endl;
    int suma_1=0;
    for(int i=0;i<=50;i++){
        suma_1+=i*2;
    }
    cout<<"La suma de los enteros pares del 2 hasta el 100 es : "<<suma_1<<endl;
/*
    //2
    cout<<"Ejercicio 2 "<<endl;
    vector <int> n_primos;
    int numero_2=2;
    while(n_primos.size()<=50){
        for (int i=numero_2;i<0;i--){
            if (numero_2%i==0){}
        }
    }
    //3
    cout<<"Ejercicio 3 "<<endl;
    cout<<"Los numeros multiplos del5 del 1 al 100 : ";
    for(int i=1;i<=100;i++){
        cout<<i*5<<" ";
    }


   //4

    //5
   cout<<"Ejercicio 5 "<<endl;
   int numeros_5;
   vector <int> l_n_5;
   int aux_5=0;int n_5;int max_5;int min_5;int media_5=0;
   cout<<"Cuantos numeros introducira : ";cin>>numeros_5;
   for(int i=0;i<numeros_5;i++){
       cout<<"Introdusca un numero : ";cin>>n_5;
       l_n_5.emplace_back(n_5);
   }
   max_5=l_n_5[0];
   min_5=l_n_5[0];
   for ( auto it= l_n_5.begin( ) ; it != l_n_5.end() ; it++ ){
       if(max_5<=*it){max_5=*it;media_5+=*it;}
       else if(min_5>=*it){min_5=*it;media_5+=*it;}
       else{media_5+=*it;}
      }
      cout<<"El numero maximo introducido es : "<<max_5<<endl;
      cout<<"El numero minimo introducido es : "<<min_5<<endl;
      cout<<"La media de los numeros introducidos es : "<<media_5/numeros_5<<endl;
 

     //6


    //7
     cout<<"Ejercicio 7 "<<endl;
     int a_7=0;
     float n1_7,n2_7,n3_7,promedio_7;
     cout<<"ingrese para cuantos alumnos querra su promedio : ";cin>>a_7;
     for (int i=0;i<a_7;i++){
         cout<<"Alumno "<<i+1<<" : "<<endl;
         cout<<"Ingrese una la nota 1 : ";cin>>n1_7;
         cout<<"Ingrese una la nota 2 : ";cin>>n2_7;
         cout<<"Ingrese una la nota 3 : ";cin>>n3_7;
         cout<<"Su promedio de las 3 notas es : "<<((n1_7+n2_7+n3_7)/3)<<endl;
     }

    //8
    cout<<"Ejercicio 8 "<<endl;
    int n_8=0;
    cout<<"Introdusca un numero entero : ";cin>>n_8;
    for(int i=0;i<12;i++){
        cout<<n_8<<" x "<<i+1<<" = "<<(i+1)*n_8<<endl;
    }

    //9
    cout<<"Ejercicio 9 "<<endl;
    int n_9=0;
    cout<<"Introduzca un numero entero para su triangulo : ";cin>>n_9;
    for (int i=0;i<n_9;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";}
        cout<<endl;  
    }
    //10

    cout<<"Ejercicio 10 "<<endl;
    string v_10;
    cout<<"Introdusca una palabra : ";cin>>v_10;
    cout<<"La palabra desglasada letra por letra e invertida es : ";
    for (int i=v_10.size();i>=0;i--){
        cout<<v_10[i]<<" ";
    }


    */
    


    return 0;
    }


    

