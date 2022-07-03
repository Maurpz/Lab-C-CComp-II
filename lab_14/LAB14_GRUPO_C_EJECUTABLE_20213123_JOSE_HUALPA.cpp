#include<iostream>
using namespace std;

void baja(int **matri,int tam,string nom[10]){
    for(int i=0;i<tam;i++){
        cout<<matri[i][0]<<") "<<nom[i]<<endl;
    }
    int op;
    cout<<"Que producto desea dar de baja ingrese su numero de opcion : ";cin>>op;
    matri[op-1][4]=0;
    matri[op-1][3]=0;
    cout<<"El producto ha sido dado de baja ..."<<endl;
    cout<<"\n\n";
}
void alta(int **matri,int tam,string nom[10]){
    cout<<"------------.: Producto "<<tam+1<<":.------------"<<endl;
    matri[tam]=new int[5];
    cout<<"Codigo del producto : ";cin>>matri[tam][0];
    cout<<"Nombre del producto : ";cin>>nom[tam];
    matri[tam][1]=tam;
    cout<<"Precio del producto : ";cin>>matri[tam][2];
    cout<<"Stock del prducto : ";cin>>matri[tam][3];
    //estado del producto por defecto esta activo
    matri[tam][4]=1;
    cout<<"Producto "<<tam+1<<"dado de alta..."<<endl;
    cout<<endl;
    cout<<"\n\n";
}
void buscar(int **matri,int tam,string nom[10]){
    int op4;
    int res=-1;
    cout<<"Ingresara el nombre (1) o codigo (2) \nIngrese su opcion : ";cin>>op4;
    if(op4==2){
        int op;
        cout<<"Ingrese el codigo del producto :";cin>>op;
        for(int i=0;i<tam;i++){
            if(op==matri[i][0]){
            cout<<"Producto encontrado"<<endl;
            res=i;
            break;
        }
    }
    }
    else if(op4==1){
        string _op;
        cout<<"Ingrese el nombre dle producto :";cin>>_op;
        for(int i=0;i<tam;i++){
            if(_op==nom[i]){
                cout<<"Producto encontrado"<<endl;
                res=i;
                break;
            }
    }
    }
    if(res!=-1){
        cout<<"Codigo del producto : "<<matri[res][0]<<endl;
        cout<<"Nombre del producto : "<<nom[res]<<endl;
        cout<<"Precio del producto : "<<matri[res][2]<<endl;
        cout<<"Stock del prducto : "<<matri[res][3]<<endl;
    }
    else{
        cout<<"El producto no ha sido encontrado"<<endl;
    }
    cout<<"\n\n";
}
void mod(int**matri,int tam,string nom[10]){
    for(int i=0;i<tam;i++){
        cout<<matri[i][0]<<") "<<nom[i]<<endl;
    }
    int op;
    cout<<"Que producto desea modificar ingrese su numero de opcion : ";cin>>op;
    cout<<"Que desea modificar ...\n1)Nombre\n2)Precio\n3)Stock\n";
    int op2;
    while(!(op2==1||op2==2||op2==3)){
        cout<<"Ingrese su opcion :";cin>>op2;
    }
    if(op2==1){
        cout<<"Nombre del producto : ";cin>>nom[op-1];
        matri[op-1][1]=op-1;

    }
    else if(op2==2){
        cout<<"Precio del producto : ";cin>>matri[op-1][2];
    }
    else{
        cout<<"Stock del prducto : ";cin>>matri[op-1][3];
    }
    cout<<"El producto ha sido modificado ..."<<endl;
    cout<<"\n\n";
}

int main(){
    int tam;
    cout<<"Cuantos productos introducira ahora :";cin>>tam;
    int **matriz;
    matriz=new int *[10];
    string nombre[10];
    for(int i=0;i<tam;i++){
    matriz[i]=new int[5];
    cout<<"------------.: Producto "<<i+1<<":.------------"<<endl;
    cout<<"Codigo del producto : ";cin>>matriz[i][0];
    cout<<"Nombre del producto : ";cin>>nombre[i];
    matriz[i][1]=i;
    cout<<"Precio del producto : ";cin>>matriz[i][2];
    cout<<"Stock del prducto : ";cin>>matriz[i][3];
    //estado del producto por defecto esta activo
    matriz[i][4]=1;
    cout<<"Producto "<<i+1<<"dado de alta..."<<endl;
    cout<<endl;
   }
   bool s=false;
   while(s==false){
    int op3;
    cout<<".: Opciones :. "<<endl;
    cout<<"1.-Nuevo producto\n2.-Dar de baja un producto\n3.-Buscar producto\n4.-Modificar producto\n5.-Salir\n\n\n";
    cout<<"Ingrese su opcion : ";cin>>op3;
    switch (op3){
    case 1:
        alta(matriz,tam,nombre);
        tam++;
        break;
    case 2:
        baja(matriz,tam,nombre);
        break;
    case 3:
        buscar(matriz,tam,nombre);
        break;
    case 4:
        mod(matriz,tam,nombre);
        break;
    case 5:
        s=true;
        break;
    default:
        break;
    }
   }
    return 0;
}
