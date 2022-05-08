#include<iostream>
#include<time.h>
#include<cstdlib>
#include<vector>
using namespace std;



void ejercicio1(){
    string datos[3][4];
    for(int i=0;i<3;i++){
        cout<<"Persona "<<i+1<<endl;
        cout<<"Ingrese su nombre : ";cin>>datos[i][0];
        cout<<"Ingrese el apellido : ";cin>>datos[i][1];
        cout<<"Ingrese la edad : ";cin>>datos[i][2];
        cout<<"Ingrese su DNI : ";cin>>datos[i][3];  
    }
    cout<<"\n.: Mostrando datos :."<<endl;
    for(int i=0;i<3;i++){
        cout<<"Datos de la persona "<<i+1<<" ..."<<endl;
        cout<<"Nombre : "<<datos[i][0]<<endl;
        cout<<"Apellido : "<<datos[i][1]<<endl;
        cout<<"Edad : "<<datos[i][2]<<endl;
        cout<<"DNI : "<<datos[i][3]<<endl;
    }
}

void ejercicio2(){
    int n_2;
    bool v_2=false;
    srand(time(NULL));
    int array[8];
    for(int i=0;i<8;i++){
        array[i]=rand()%100;
    }
    cout<<"Ingrese un numero para buscarlo en el array : ";cin>>n_2;
    for (int i=0;i<8;i++){
        if(array[i]==n_2){v_2=true;}
    }

    if(v_2==true){
        cout<<"Se encontro su numero en el array ..."<<endl;
    }
    else{cout<<"Nose se encontro su numero en el array ..."<<endl;}
    
    cout<<"El array es : ";
    for (int i=0;i<8;i++){
        cout<<array[i]<<" ";
    }
}
void ejercicio3(){
    int array_3 [5][3];
    for(int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            cout<<"Ingrese un numero : ";cin>>array_3[i][j];
        }
    }
    int aux_3=0;
     for(int i=0;i<5;i++){
         if((i+1)%2==0){
            for (int j=0;j<3;j++){
                aux_3+=array_3[i][j];
            }
            cout<<"La suma de la fila "<<i+1<<" es : "<<aux_3<<endl;
            aux_3=0;
         }
    }
}

void ejercicio4(){
    int cont_4=0;
    vector <int> array_4;
    for(int i=2;i<101;i++){
        for(int j=i;j>0;j--){
            if(i%j==0){cont_4++;}
            if(cont_4>2){break;} 
        }
        if(cont_4==2){array_4.emplace_back(i);}
        cont_4=0;
    }
    cout<<"Lista de numeros primos del 1 al 100 : ";
    for(auto it=array_4.end()-1;it!=array_4.begin();it--){
        cout<<*it<<" ";
    }
}
void ejercicio5(){
    string array_5 [10][3];
    for(int i=0;i<2;i++){
        cout<<".: Producto "<<i+1<<" :."<<endl;
        cout<<"Ingresa el nombre del producto : ";cin>>array_5[i][0];
        cout<<"Ingrese el precio del producto : ";cin>>array_5[i][1];
        cout<<"Ingrese el stock del producto : ";cin>>array_5[i][2];
        cout<<"El producto a sido dado de alta ..."<<endl;
    }
    int op_5=0;
    bool s=false;
    string pro_5;
    int p_m=0;
    do{
        cout<<".:Opciones:.\n1)Buscar un producto por su nombre.\n2)Modificar el stock y precio de un producto dado.\n3)Salir"<<endl;
        cout<<"Ingrese su opcion : ";cin>>op_5;
        if (op_5==1){
        cout<<"Ingrese el nombre del producto de su interez : ";cin>>pro_5;
        for(int i=0;i<10;i++){
            if(array_5[i][0]==pro_5){cout<<"Se encontro el producto\nPrecio : "<<array_5[i][1]<<"\nStock : "<<array_5[i][2]<<endl;break;}
        } }  
        else if(op_5==2){
            for (int i=0;i<10;i++){cout<<i+1<<") "<<array_5[i][0]<<endl;}
            do{
                cout<<"Elija el numero del producto a modificar : ";cin>>p_m;
            }while(not(p_m>0&&p_m<11)==true);
            
            cout<<"Ingrese el nuevo precio para "<<array_5[p_m-1][0]<<" : ";cin>>array_5[p_m-1][1];
            cout<<"Ingrese el nuevo stock para "<<array_5[p_m-1][0]<<" : ";cin>>array_5[p_m-1][2];
            cout<<"El producto ha sido modificado correctamente..."<<endl;
        } 
        else if(op_5==3){s=true;}
    }while(s==false);

}

void ejercicio6(){
    int fila,f_aux=0;
    int fil_mx=0;
    int array_6[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<"Ingrese un numero : ";cin>>array_6[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            fila+=array_6[i][j];
        }
        
        if(fila>f_aux){f_aux=fila;fil_mx=i;}
        fila=0;
    }

    cout<<"La fila "<<fil_mx+1<<" tiene la mayor suma con : "<<f_aux<<endl;
}





int main(){
    //ejercicio1();
    //ejercicio2();
    //ejercicio3();
    //ejercicio4();
    //ejercicio5();
    ejercicio6();
    return 0;
}