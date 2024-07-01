//funcion calcular raices
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
void calcularRaices(double a, double b, double c) {
    double r1, r2;
    double discriminante=pow(b,2)-4*a*c;

    if(discriminante >= 0){
        r1 = (-b+sqrt(discriminante))/(2*a);
        r2 = (-b-sqrt(discriminante))/(2*a);
        cout<<"Las raices son: "<<r1<< ", "<<r2<<endl;
    } else {
        cout<<"Las raices son complejas, no se pueden calcular."<<endl;
    }
}

int main() {
    double a,b,c;

    cout<<"\tCalculando las raices de una ecuacion cuadratica"<<endl;
    cout<<"\nDigite el coeficiente a: ";cin>>a;
    cout<<"Digite el coeficiente b: ";cin>>b;
    cout<<"Digite el coeficiente c: ";cin>>c;

    calcularRaices(a,b,c);
    
    return 0;
}