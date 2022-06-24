#include<iostream>
using namespace std;
//1
struct persona{
    int dia;
    int mes;
    int anio;
    string nombre;
};

//2
struct notas{
    string nombre;
    char grupo;
    float n_pf;
    float n_sf;
    float n_tf;
    float p_f;
    float nota_final;
};

//3
struct jugadores{
    string nombre;
    int edad;
    float talla;
};

//4
struct empleados{
    string nombre;
    string sexo;
    int sueldo;
};
int main(){
    
    
    int n;
    cout<<"Ingrese el numero de personas : ";cin>>n;

    persona *array=new persona[n];
    for(int i=0;i<n;i++){
        cout<<".:Registrando alumno:."<<endl;
        cout<<"Cual es su nombre : ";cin>>array[i].nombre;
        cout<<"Que dia nacio : ";cin>>array[i].dia;
        cout<<"Que mes nacio : ";cin>>array[i].mes;
        cout<<"Que anio nacio : ";cin>>array[i].anio;
        
    }
    cout<<"Personas que cumplen anios este mes "<<endl;

    for(int i=0;i<n;i++){
        if(array[i].mes==6){
            cout<<array[i].nombre<<" cumple anios este mes "<<endl;
        }
    }

    int n_2;
    cout<<"ingrese l numero de alumnos: ";cin>>n_2;
    notas *alumnos=new notas[n_2];
    for(int i=0;i<n_2;i++){
        cout<<"Alumno "<<i+1<<endl;
        cout<<"Cual es su nombre : ";cin>>alumnos[i].nombre;
        cout<<"Cual es su grupo : ";cin>>alumnos[i].grupo;
        cout<<"Cual es su nota en la primera fase : ";cin>>alumnos[i].n_pf;
        cout<<"Cual es su nota en la segunda fase : ";cin>>alumnos[i].n_sf;
        cout<<"Cual es su nota en la tercera fase : ";cin>>alumnos[i].n_tf;
        cout<<"Cual es su nota en el proyecto final : ";cin>>alumnos[i].p_f;
        
        alumnos[i].nota_final=((alumnos[i].n_pf*0.15)+(alumnos[i].n_sf*0.2)+(alumnos[i].n_tf*0.25)+(alumnos[i].p_f*0.4));
    }   
    
    cout<<"Mostrando las notas finales : "<<endl;
    for (int i=0;i<n_2;i++){
        cout<<"El alumno "<<alumnos[i].nombre<<" obtuvo : "<<alumnos[i].nota_final<<endl;
    }

    jugadores *arr_jg=new jugadores[10];
    for(int i=0;i<10;i++){
        cout<<"Jugador "<<i+1<<endl;
        cout<<"Cual es su nombre : ";cin>>arr_jg[i].nombre;
        cout<<"Cual es su edad : ";cin>>arr_jg[i].edad;
        cout<<"Cual es su estatura en metros : ";cin>>arr_jg[i].talla;
    }

    cout<<"Mostrando los jugadores que sean menores de 20 anios y una estatura mayor a 1.70"<<endl;
    for (int i=0;i<10;i++){
        if(arr_jg[i].edad<20&&arr_jg[i].talla>1.70){
            cout<<"El jugador "<<arr_jg[i].nombre<<" cumple los requisitos solicitados "<<endl;
        }
    }



    int n_4;
    cout<<"Cuantos empleados son :";cin>>n_4;
    empleados *lista=new empleados[n_4];
    for (int i=0;i<n_4;i++){
        cout<<"Empleado "<<i+1<<endl;
        cout<<"Cual es su nombre : ";cin>>lista[i].nombre;
        cout<<"Cual es su sexo : ";cin>>lista[i].sexo;
        cout<<"Cual es su sueldo : ";cin>>lista[i].sueldo;
    }
    int min=lista[0].sueldo;
    string n_mi;
    int max=lista[0].sueldo;
    string n_mx;

    for (int i=0;i<n_4;i++){
        if(lista[i].sueldo<min){
            min=lista[i].sueldo;
            n_mi=lista[i].nombre;
        }
        else if(lista[i].sueldo>max){
            max=lista[i].sueldo;
            n_mx=lista[i].nombre;
        }
    }
    cout<<"El empleado con el sueldo minimo es "<<n_mi<<" con "<<min<<endl;
    cout<<"El empleado que gana mas es "<<n_mx<<" con "<<max<<endl;
    return 0;
}