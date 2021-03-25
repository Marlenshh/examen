int main(){
float a=0;
float b=0;
float c=0;
float resultado1=0;
float resultado2=0;

cout<<"Inserte los valores de sus variables a, b y c respectivamente"<<endl;
cin>>a;
cin>>b;
cin>>c;

float root=pow(b,2)-(4*a*c);
if(a>0){
    if(root>0){
        resultado1=(((-1)*b)-(sqrt(root))/(2*a));
        resultado2=(((-1)*b)+(sqrt(root))/(2*a));
        cout<<"El resultado de la ecuación es "<<resultado1<<endl;
        cout<<"El resultado de la ecuación es "<<resultado2<<endl;
    }else cout<<"Tu operación tiene una raiz imaginaria"<<endl;
}else cout<<"Tu operacion tiene una division sobre 0"<<endl;


}


