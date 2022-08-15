#include <iostream>
#include<memory>

using namespace std;
class Point{
    private:
        double x;
        double y;
    public:
        Point(double x1,double y1):x(x1),y(y1){};
        ~Point(){};
        void X(double n){
            this->x=n;
        }
        void Y(double n){
            this->y=n;
        }
};


class C1{
    private:
        shared_ptr<double> d1;
    public:
        C1(shared_ptr<double> value) : d1(value) {}
        virtual ~C1() { cout << "C1 destructor\n"; }
        void print() const { cout << "Valor " << *d1<<endl; }
};

class C2{
    private:
        shared_ptr<double> d2;
    public:
        C2(shared_ptr<double> valor): d2(valor){};
        virtual ~C2(){cout<<"C2 Destructor"<<endl;}
        void print() const{cout<<"Valor "<<*d2<<endl;}
};




int main()
{
    //------------------------------1-------------------------------

    //aqui asigan memoria e inicializa los los punteros de tipo double y Point
    double* d = new double(1.0);
    Point* pt = new Point(1.0, 2.0);

    //aqui les asigna un valor diferente a su inicializacion de los objetos 
    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);

    //aqui vuelve a asignarle el valor de 3 al punto pero como punteros
    pt->X(3.0);
    pt->Y(3.0);

    //aqui livera memoria
    delete d;
    delete pt;


    //------------------------------2-------------------------------
    //creamos los punteros inteligentes 
    
    unique_ptr<double> d {new double(1.0)};
    unique_ptr<Point> pt {new Point(1.0, 2.0)};

    //aqui les asigna un valor diferente a su inicializacion de los objetos 
    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);

    //aqui vuelve a asignarle el valor de 3 al punto pero como punteros
    pt->X(3.0);
    pt->Y(3.0);

    //------------------------------3-------------------------------

    shared_ptr <double> compartido =make_shared<double>(1.0);
    C1 obj1(compartido);
    obj1.print();
    C2 obj2(compartido);
    obj2.print();

    //-----------------------------4---------------------------------
    //convertir a shared_ptr  ........Point* pt = new Point(1.0, 2.0);
    shared_ptr<double> p=make_shared<double>(1.0);
    shared_ptr<Point> pt=make_shared<Point>(1.0,2.0);
    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);

    pt->X(3.0);
    pt->Y(3.0);

    //-----------------------------5----------------------------------
    shared_ptr<double> p=make_shared<double>(1.0);
    weak_ptr<double> d2 = p;


}