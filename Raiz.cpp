#include<iostream>
#include <math.h>
using namespace std;

int main(){
float a=0;
float b=0;
float c=0;
float resultado=0;

cout<<"Inserte los valores de sus variables a, b y c respectivamente"<<endl;
cin>>a;
cin>>b;
cin>>c;

float root=pow(b,2)-(4*a*c);
if(a>0){
    if(root>0){
        resultado=(((-1)*b)-(sqrt(root))/(2*a));
        cout<<"El resultado de la raiz es "<<resultado<<endl;
    }else cout<<"Tu operación tiene una raiz imaginaria"<<endl;
}else cout<<"Tu operacion tiene una division sobre 0"<<endl;



}
