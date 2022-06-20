#include<iostream>

using namespace std;

class Nodo{
    public:
        int dato;
        Nodo* siguiente;
} 
*primero, *ultimo;

Nodo* ingresar(Nodo *&inicio,int n){
    Nodo *nuevo_nodo =new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=nullptr;

    if(inicio==nullptr){
        inicio=nuevo_nodo;
    }
    else{
        Nodo *aux=inicio;
        while(aux->siguiente!=nullptr){
            aux=aux->siguiente;
        }
        aux->siguiente=nuevo_nodo;
    }
    return inicio;
};

void mostrar(Nodo *inicio){
    if(inicio==nullptr){
        cout<<"La lista esta vacia"<<endl;
    }
    else{
        Nodo *aux=inicio;
        while(aux->siguiente!=nullptr){
            cout<<aux->dato<<" ";
            aux=aux->siguiente;
        }
        cout<<aux->dato;
    }
    cout<<endl;
}

int n_elementos(Nodo *inicio){
    int cont=0;
    if(inicio==nullptr){
        return cont;
    }
    else{
        
        Nodo* aux=inicio;
        while(aux->siguiente!=nullptr){
            aux=aux->siguiente;
            cont++;
        }
        cont++;
    }
    return cont;
}
/*
Nodo * buscar(Nodo*incio,int n){
    while()

}

*/
//2
Nodo* eliminar(Nodo*inicio){
    if(inicio==nullptr){
        cout<<"El la lista no tiene elementos que eliminar..."<<endl;
        return inicio;
    }
    else{
        Nodo *aux=inicio->siguiente;
        delete inicio;
        return aux;
    }

}


int main(){
//1
    cout<<" .:Ejercicio 1:. "<<endl;
    Nodo *inicio=nullptr;
    int n;
    cout<<"INGRESE un numero a la cola (ingrese 0 para salir): ";cin>>n;
    while(n!=0){
        inicio=ingresar(inicio,n);
        cin>>n;
    }
    cout<<"La cola creada es : ";
    mostrar(inicio);


//2
    cout<<"Elimnando elementos de la cola"<<endl;
    inicio=eliminar(inicio);
    cout<<"La cola resultante es : ";
    return 0;
}
