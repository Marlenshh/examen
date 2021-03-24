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
    
    switch(resultado){
            case 1:cout<<"Tu mano es de 20"<<endl;
            break;
            case 2:cout<<"Tu mano es de 19"<<endl;
            break;
            case 3:cout<<"Tu mano es de 18"<<endl;
            break;
            case 4:cout<<"Tu mano es de 17"<<endl;
            break;
            case 5:cout<<"Tu mano es de 16"<<endl;
            break;
            case 6:cout<<"Tu mano es de 15"<<endl;
            break;
            case 7:cout<<"Tu mano es de 14"<<endl;
            break;
            case 8:cout<<"Tu mano es de 13"<<endl;
            break;
            case 9:cout<<"Tu mano es de 12"<<endl;
            break;
            case 10:cout<<"Tu mano es de 11"<<endl;
            break;
            case 11:cout<<"Tu mano es de 10"<<endl;
            break;
            case 12:cout<<"Tu mano es de 9"<<endl;
            break;
            case 13:cout<<"Tu mano es de 8"<<endl;
            break;
            case 14:cout<<"Tu mano es de 7"<<endl;
            break;
            case 15:cout<<"Tu mano es de 6"<<endl;
            break;
            case 16:cout<<"Tu mano es de 5"<<endl;
            break;
            case 17:cout<<"Tu mano es de 4"<<endl;
            break;
            case 18:cout<<"Tu mano es de 3"<<endl;
            break;
            case 19:cout<<"Tu mano es de 2"<<endl;
            break;
            case 20:cout<<"Tu mano es de 1"<<endl;
            break;
          
    }
    return 0;
}