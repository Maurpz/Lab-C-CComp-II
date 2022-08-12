#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Regresion{
    private:
        float sum_x=0;
        float sum_y=0;
        float sum_xy=0;
        float sum_x2=0;
    public:
        void operator()(int vex [],int vey [],int tam){
            for(int i=0;i<tam;i++){
                sum_x+=vex[i];
                sum_y+=vey[i];
                sum_xy+=vex[i]*vey[i];
                sum_x2+=vex[i]*vex[i];
            }
            float m=((tam*sum_xy)-(sum_x*sum_y))/((tam*sum_x2)-(sum_x*sum_x));
            cout<<".    .:y = a + bx:."<<endl;
            cout<<"a = "<<(sum_x/tam)<<endl;
            cout<<"b = "<<(sum_y/tam)<<endl;
            cout<<"m = "<<m<<endl;
        }

};


class Find{
    private:
        vector<int> lista;
        vector<int> indices;
    public:
        Find(vector<int> list){
            this->lista=list;
        }
        vector<int> operator()(int inicio,int final,int valor){
            for(int i=inicio;i<final;i++){
                if(lista[i]==valor)indices.push_back(i);
            }
            return indices;
        } 

};

class Elemento{
    private:
        int a;
        int b;
    public:

        Elemento(int x,int y){
            this->a=x;
            this->b=y;
        }
        vector<int> operator()(vector<int>list,int tam){
            vector<int>lista=list;

        }

};

int main(){

    int vector_x [8]={1,2,2,3,4,4,5,6};
    int vector_y [8]={2,3,4,4,4,6,5,7};

    Regresion p;
    p(vector_x,vector_y,8);

    vector<int>lista={2,4,6,7,1,9,4,6,1,2,6,3,7};
    Find p2(lista);
    vector<int> indices=p2(0,9,1);
    cout<<"Los indices en los que se encontro el valor son :";
    for(int i=0;i<indices.size();i++){
        cout<<indices[i]<<" ";
    }
    cout<<endl;
    return 0;
}