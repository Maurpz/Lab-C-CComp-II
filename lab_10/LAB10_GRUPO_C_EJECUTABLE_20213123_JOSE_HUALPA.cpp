#include<iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};
//1
Nodo* ingresar_final(Nodo *&inicio,int n){
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

//2
Nodo* ingresar_inicio(Nodo *inicio,int n){
    Nodo *nuevo_nodo=new Nodo;
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=nullptr;

    if(inicio==nullptr){
        inicio=nuevo_nodo;
    }
    else{
        nuevo_nodo->siguiente=inicio;
    }
    return nuevo_nodo;
}


//3
void insertar(Nodo *&inicio,int n,int pos){
    int tam;
    if((tam=n_elementos(inicio))<2){
        cout<<"La lista enlazada debe de tener un minimo de 2 elementos para poder insertar..."<<endl;
    }
    else{
        Nodo*aux1=inicio;
        Nodo *aux2;
        for(int i=0;i<pos;i++){
            aux2=aux1;
            aux1=aux1->siguiente;
        }
        Nodo *nuevo_nodo=new Nodo;
        nuevo_nodo->dato=n;
        nuevo_nodo->siguiente=aux1;
        aux2->siguiente=nuevo_nodo;
    }

}

//4
void elimniar_ultimo_elemento(Nodo *&inicio){
    Nodo *aux=inicio;
    Nodo *aux2;
    while(aux->siguiente!=nullptr){
        aux2=aux;
        aux=aux->siguiente;
    }
    delete aux;
    aux2->siguiente=nullptr;
}

//5
Nodo* eliminar_primer_elemento(Nodo*inicio){
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
//6
void eliminar_pos(Nodo *&inicio,int pos){
    int n=n_elementos(inicio),i;
    if(pos>n||pos<0){
        cout<<"Ingrese una posicion valida para eliminar (0....n+)"<<endl;
    }
    else if(pos==0){
        inicio=eliminar_primer_elemento(inicio);
    }
    else if(pos==(n-1)){
        elimniar_ultimo_elemento(inicio);
    }
    else{
        Nodo *aux=inicio;
        Nodo *aux2;
        for(i=0;i<(pos-1);i++){
            aux=aux->siguiente;
        }
        aux2=aux->siguiente->siguiente;
        delete aux->siguiente;
        aux->siguiente=aux2;
    }
}

//7
void agregar_ordenado(Nodo *&inicio,int n){
    Nodo *nuevo_nodo=new Nodo;
    nuevo_nodo->dato=n;
    
    Nodo *aux1=inicio;
    Nodo *aux2;
    while((aux1!=nullptr)&&(aux1->dato>n)){
        aux2=aux1;
        aux1=aux1->siguiente;
    }

    if(aux1==inicio){
        inicio=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}




int main(){
//1
    cout<<" .:Ejercicio 1:. "<<endl;
    Nodo *inicio=nullptr;
    int n;
    cout<<"INGRESE un numero a la cola (ingrese 0 para salir): ";cin>>n;
    while(n!=0){
        inicio=ingresar_final(inicio,n);
        cin>>n;
    }
    mostrar(inicio);

//2
    //Nodo *pila_i=nullptr;
    cout<<"Ingrese un numero ala pila (ingrese 0 para salir): ";cin>>n;
    while(n!=0){
        //pila_i=ingresar_inicio(pila_i,n);
        inicio=ingresar_inicio(inicio,n);
        cin>>n;
    }
    mostrar(inicio);

//3
    cout<<"Ingresando un numero en la posicion 1"<<endl;
    insertar(inicio,1000,1);
    mostrar(inicio);
    cout<<"Ingresando un numero en la posicion 2"<<endl;
    insertar(inicio,99,2);
    mostrar(inicio);


//4


    //elimnar ultimo elemento
    cout<<"Eliminando el ultimo elemento"<<endl;
    elimniar_ultimo_elemento(inicio);
    mostrar(inicio);
//5

    cout<<"Eliminando el primer elemento"<<endl;
    inicio=eliminar_primer_elemento(inicio);
    mostrar(inicio);
    cout<<"Volvemos a elimnar otro primer elemento"<<endl;
    inicio=eliminar_primer_elemento(inicio);
    mostrar(inicio);
//6
    cout<<"Eliminar una posicion"<<endl;
    cout<<"Eliminamos la posicion 3 de la lista"<<endl;
    eliminar_pos(inicio,3);
    mostrar(inicio);

    return 0;
}