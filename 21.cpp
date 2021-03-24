#include<iostream>
using namespace std;

int main(){
    int carta1=0;
    int carta2=0;
    int carta3=0;
    int mano=0;
    
    cout<<"Este programa calcula el valor total de tu mano"<<endl;
    
    cout<<"Ingresa el valor de tu primer carta"<<endl;
    cin>>carta1;
    cout<<"Ingresa el valor de tu segunda carta"<<endl;
    cin>>carta2;
    cout<<"Ingresa el valor de tu tercer carta"<<endl;
    cin>>carta3;
    mano=(carta1+carta2+carta3);
    int resultado=(21-mano);
    cout<<"El valor de tus cartas respectivamente es: "<<carta1<<", "<<carta2<<", "<<carta3<<endl;
    
    cout<<"El valor total de tu mano es " <<mano<<endl;
    cout<<"Fallaste por "<<resultado<<" de 21"<<endl;
    
    return 0;
}