#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;



//Ejercicio 2
void millon(){
    int tam;
    float p_punto=0;
    srand(time(NULL));

    cout<<"Ingrese de que tamaño desea los vectores : ";cin>>tam;

    for(int j=0;j<100000;j++){
        
        float *vect_1,*vect_2;
        vect_1 = new float[tam];
        vect_2 = new float[tam];
        for(int i=0;i<tam;i++){
            vect_1[i]=(float)(1 +rand()%(501-1))/100;
            vect_2[i]=(float)(1 +rand()%(501-1))/100;
        }
        
        for(int i=0;i<tam;i++){
            p_punto+=(vect_1[i]*vect_2[i]);
        }
        cout<<j+1<<" = "<<p_punto<<endl;
        delete[] vect_1;
        delete[] vect_2;
        p_punto=0;
    }
}

int main(){
    //Ejercicio 1 
    int n_1=4;
    int n_1_2=8;
    cout<<"El contenido del primer numero es : "<<n_1<<endl;
    cout<<"El contenido del segundo numero es : "<<n_1_2<<endl;
    cout<<"Intercambiando valores con punteros..."<<endl;
    int *p1 =&n_1;
    int*p2 =&n_1_2;
    n_1=*p2;
    n_1_2=*p1;
    cout<<"El contenido del primer numero es : "<<n_1<<endl;
    cout<<"El contenido del segundo numero es : "<<n_1_2<<endl;

    //Ejercicio 2
    millon();
    return 0;
}