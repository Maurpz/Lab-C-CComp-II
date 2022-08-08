
#include <iostream>
using namespace std;

//-----------------Ejercicio1------------------------
template<int n1>
struct suma_digitos {
    enum{value=(n1%10)+ suma_digitos<n1/10>::value};
};
template<>
struct suma_digitos<0>{
    enum{value=0};
};

//-----------------Ejercicio2------------------------
template<int n2>
struct fibona {
    enum {value = fibona<n2-1>::value + fibona<n2-2>::value};
};
template<>
struct fibona<1> {
    enum{value=1};
};
template<>
struct fibona<0> {
    enum{value=0};
};

//-----------------Ejercicio3------------------------

template<int n3,int n_3>
struct potencia {
    enum{value = n3*potencia<n3,n_3-1>::value};
};
template<int n3>
struct potencia<n3,0> {
    enum{value=1};
};
//-----------------Ejercicio3------------------------


//-----------------Ejercicio5------------------------


template<int n5>
struct bin{
    enum{value = n5%2+bin<n5/2>::value*10,
};
};
template <>
struct bin<1>{
    enum{ value = 1};
};
template <>
struct bin<0>{
    enum{ value = 0};
    };


int main(){
    //-----------------Ejercicio1------------------------

    int num;
    num=suma_digitos <456348>::value;
    cout<<"La suma de los digitos del numero 456348 es : "<<num<<endl;


    //-----------------Ejercicio2------------------------

    int fibo = fibona<7>::value;
    cout<<"El numero de la posicion 7 es : "<<fibo<<endl;


    //-----------------Ejercicio3------------------------

    int poten = potencia<2,5>::value;
    cout<<"La portencia de 2 elevado a la 5 es : "<<poten<<endl;


    //-----------------Ejercicio5------------------------

    int num_bin = bin<13>::value;
    cout<<"El numero 13 en bianrio es : "<<num_bin<<endl;


    return 0;
}



