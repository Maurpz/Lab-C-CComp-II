
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <typename S>

class Ordenar {

    public:
        Ordenar() {}
        ~Ordenar(){}
        void Insertar(S lista[], int lon, S numero);
};

template <typename S>
void Ordenar<S>::Insertar(S lista[], int lon, S numero) {
    lista[lon] = numero;
}
template <typename S>

void InsertionSort(S arreglo[], int n) {

    for (int k = 1; k < n; k++) {
        
        S temp = arreglo[k];
        int j = k - 1;

        while (j >= 0 && temp <= arreglo[j]) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }

        arreglo[j + 1] = temp;
    }
}

int main() {
    int x;

    cout << "Cuantos datos desea ingresar en la lista : "; cin >> x;
    int* lista = new int[x];
    srand(time(NULL));

    for (int i = 0; i < x; i++) {

        int num;
        num = 1 + rand() % (50 - 1);
        Ordenar<int>* lista1= new Ordenar<int>;
        lista1->Insertar(lista, i, num);
        delete lista1;
    }

    InsertionSort(lista, x);
    cout << "Lista de elementos ordenada: "<<endl;

    for (int i = 0; i < x; i++) {

        cout << lista[i] << " ";
    }
}
