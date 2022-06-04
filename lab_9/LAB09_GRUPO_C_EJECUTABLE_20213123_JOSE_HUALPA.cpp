#include<iostream>
using namespace std;
//1
template <class tipo>
void min_max(tipo n1,tipo n2,tipo n3){
    tipo array[]={n1,n2,n3};
    tipo min,max;
    int c;
    for (int i=0;i<3;i++){
        c=0;
        for(int j=0;j<3;j++){
            if(i==j){continue;}
            else if(array[i]>=array[j]){c++;}
        }
        if(c>=1){max=array[i];}
        else if(c==0){min=array[i];}
    }
    cout<<"El mayor es : "<<max<<" y el menor es :"<<min<<endl;
}



//2
template <class t1,class t2>
void cuatro_operaciones(t1 n1,t2 n2){
    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
    cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
    cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
    cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
}


//3
template<class  T1,class T2>
void correo(T1 d1,T2 d2){
    cout<<"El correo generado es : "<<d1<<d2<<"@unsa.edu.pe"<<endl;

}

//4
template <class e4,class e_4>
e4 menor(e4 arr[],e_4 tam){
    e4 menor=arr[0];
    for (int i=1;i<tam;i++){
        if(menor>=arr[i]){menor=arr[i];}
    }
    return menor;
}

template <class e4,class e_4>
e4 mayor(e4 arr[],e_4 tam){
    e4 mayor=arr[0];
    for (int i=1;i<tam;i++){
        if(mayor<=arr[i]){mayor=arr[i];}
    }
    return mayor;

 }

//5

template<class e5,class e_5>
void ordenar(e5 *arr,e_5 i1,e_5 f){
    e_5 i;
    e_5 pos;
    e5 aux;
    for(i=0;i<(f+1);i++){
        pos=i;
        aux=arr[i];
        while((pos>0) && (arr[pos-1]>aux)){
            arr[pos]=arr[pos-1];
            pos--;
        }
        arr[pos]=aux;
    }
    cout<<"La lista ordenada asendentemente es : ";
    for(i=0;i<f+1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nLa lista ordenada invertida es : ";
    for(i=f;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main(){
    //1
    
    cout<<"Ejercicio 1"<<endl;
    min_max(3,11,16);

    //2
    cout<<"Ejercicio 2"<<endl;
    cuatro_operaciones(5,2.5);


    //3
    cout<<"Ejercicio 3"<<endl;
    char p1[]={'j','r','w','l','o'};
    string p2 []={"perez","lopez","postigo","quispe","cari"};
    for (int i=0;i<5;i++){
        correo(p1[i],p2[i]);
    }


    //4
    cout<<"Ejercicio 4"<<endl;
    int n1[]={6,2,4,5,1};
    float n2[]={1.2,5.6,4.3,7.1,0.9};
    cout<<"Menor : "<<menor(n1,5)<<endl;
    cout<<"Mayor : "<<mayor(n1,5)<<endl;

    cout<<"Con numeros flotantes"<<endl;
    cout<<"Menor : "<<menor(n2,5)<<endl;
    cout<<"Mayor : "<<mayor(n2,5)<<endl;

    //5
    cout<<"Ejercicio 5"<<endl;
    int p5[6]={9,5,3,2,6,8};
    float p4 [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
    
    ordenar(& p5[0],0,5);
    ordenar(&p4[0],0,4);

    
    return 0;
}

