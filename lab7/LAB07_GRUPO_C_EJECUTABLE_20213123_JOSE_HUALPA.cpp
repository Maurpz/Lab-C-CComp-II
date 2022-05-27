#include<iostream>
using namespace std;
//1
class Persona{
    protected:
        int edad=0;string nombre="NN";
    public:
        Persona()=default;
        ~Persona();
        void a_nombre(string);
        void a_edad(int);
};
void Persona::a_edad(int edad){
    this->edad=edad;
}
void Persona::a_nombre(string nombre){
    this->nombre=nombre;
}

class Alumno:public Persona{
    public:
        Alumno()=default;
        ~Alumno();
        void mostrar();
};
void Alumno::mostrar(){
    cout<<"su nombre es "<<nombre<<" su edad es "<<edad<<endl;
}



//2
class RGB{
    protected:
        int cr;
        int cg;
        int cb;
    public:
        RGB()=default;
        ~RGB();
        void color(int,int,int);
};
void RGB::color(int a,int b,int c){
    cr=a;cg=b;cb=c;
}

class Material{
    protected:
        string material;
    public:
        Material()=default;
        ~Material();
        void d_material(string);
};
void Material::d_material(string a){
    material=a;
}

class Objeto :public RGB ,public Material{
    private:
        string objeto;
    public:
        Objeto()=default;
        ~Objeto();
        void d_objeto(string);
        void mostar();
};
void Objeto::d_objeto(string a){
    objeto=a;
}
void Objeto::mostar(){
    cout<<"El objeto "<<objeto<<" es de color rgb( "<<cr<<" "<<cg<<" "<<cb<<" )"<<
    "\n El objeto "<<objeto<<" es de "<<material<<endl;
}


//4
class Multimedia{
    protected:
        string autor;
        string genero;
    public:
        Multimedia()=default;
        ~Multimedia();
        void autor_y_genero(string,string);
};
void Multimedia::autor_y_genero(string _a,string _g){
    autor=_a;genero=_g;
}

class Disco:public Multimedia{
    private:
        int canciones;
        int duracion;
    public:
        Disco()=default;
        ~Disco();
        void canciones_y_duracion(int,int);
        void mostrar();
};
void Disco::canciones_y_duracion(int _a,int _b){
    canciones=_a,duracion=_b;
}
void Disco::mostrar(){
    cout<<"El disco es de "<<autor<<" del genero "<<genero<<" tiene "<<canciones<<" canciones "
    <<"con una duracion de "<<duracion<<" horas en total"<<endl;
}


//6
class Ave{
    protected:
        string tipo;
    public:
        Ave()=default;
        void mostrar();
};
void Ave::mostrar(){
    cout<<"Soy un "<<tipo<<" de la especie ave "<<endl;
}

class Ganzo:public Ave{
    public:
        Ganzo(){tipo="ganzo";};
        ~Ganzo();
};
class Pato:public Ave{
    public:
        Pato(){tipo="pato";};
        ~Pato();
};
class Gallina:public Ave{
    public:
        Gallina(){tipo="gallina";};
        ~Gallina();
};


int main(){
    //1
    
    Alumno *a1 =new Alumno();
    a1->mostrar();
    a1->a_nombre("Jose");
    a1->a_edad(21);
    a1->mostrar();

    //2
    Objeto *o1=new Objeto();
    o1->color(23,14,120);
    o1->d_material("madera");
    o1->d_objeto("mesa");
    o1->mostar();
    
   //4
   Disco *d1=new Disco();
   d1->autor_y_genero("Avicii","EDM");
   d1->canciones_y_duracion(13,3);
   d1->mostrar();
   


   //6
   Ganzo *gnz=new Ganzo();
   Pato *pt =new Pato();
   Gallina *gll=new Gallina();
   gnz->mostrar();
   pt->mostrar();
   gll->mostrar();





    return 0;
}