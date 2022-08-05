#include <iostream>
#include <stdlib.h>

using namespace std;

template <typename T>
class Calculadora {

    private:
        T num1;
        T num2;
        
    public:

        Calculadora(T num1,T num2);
        ~Calculadora() {};

        T suma();
        T resta();
        T multiplicacion();
        T division();
        void menu();
        void perdirdatos();
};

template<typename T>

Calculadora<T>::Calculadora(T num1, T num2) {
    this->num1 = num1;
    this->num2 = num2;

}

template<typename T>
T Calculadora<T>:: suma() { 
    return num1 + num2;
}
template<typename T>
T Calculadora<T>::resta() {
    return num1 - num2;
}
template<typename T>
T Calculadora<T>::multiplicacion() {
    return num1 * num2;
}

template<typename T>
T Calculadora<T>::division() {
    return num1 / num2;
}

template<typename T>
void Calculadora<T>::menu(){



    cout << "La suma es: "<<suma()<<endl;
    cout << "La resta es: "<<resta() <<endl;
    cout << "La multiplicacion es: "<<multiplicacion()<<endl;
    cout << "La division es: " <<division()<<endl;
}

template<typename T>
void Calculadora<T>::perdirdatos(){

    cout << "Digite dato 1: "; cin<<num1;
    cout << "digite dato 2: "; cin<<num2;
}
int main() {
    int op,x,y;
    float x1,y1;
    char x2,y2;
    
    do{
        cout <<"\n---------.:CALCULADORA:.--------" <<endl;

        cout<<"Digite el tipo de valores a  ingresar"<<endl;
        cout<<"1. Enteros."<<endl;
        cout<<"2. Decimales."<<endl;
        cout<<"3. Letras."<<endl;
        cout<<"4. Salir."<<endl;
        cout<<"Seleciione un opción: "; cin>>op;

        switch (op) {

            case 1 : {

                cout << "Digite el primer numero: "; cin>>x;
                cout << "Digite el segundo numero "; cin>>y;

                Calculadora<int>* calc1 = new Calculadora<int>(x,y);
                calc1->menu();
            }
                break;

            case 2 : {

                cout << "Digite el primer numero: "; cin>>x1;
                cout << "Digite el segundo numero: "; cin>>y1;

                Calculadora<float>* calc2 = new Calculadora<float>(x1,y1);
                calc2->menu();
            }
                break;

            case 3 : {

                cout << "Digite el primer numero: "; cin>>x2;
                cout << "Digite el segundo numero: "; cin>>y2;        

                Calculadora<char>* calc3 = new Calculadora<char>(x2,y2);
                calc3->menu();
            }
                break;
            
            default:
                cout<<"\nDigite una opción valida"<<endl;

        }
    }while(op!=4);

    return 0;
    system("pause");
}