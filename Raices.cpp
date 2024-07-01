//Calculando las raices de una ecuacion cuadratica
#include<iostream>
#include<math.h>
#include<stdlib.h>

 using namespace std;
 int main(){
 	double a,b,c,r1,r2;
 		cout<<"\tCalculando las raices de una ecuacion cuadratica"<<endl;
 		cout<<"\nDigite el coeficiente a: ";cin>>a;
 		cout<<"Digite el coeficiente b: ";cin>>b;
 		cout<<"Digite el coeficiente c: ";cin>>c;
 	
 			r1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
 			r2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
 	
	 	cout<<"Las raices son: "<<r1<<", "<<r2<<endl;
	
 	system("pause");
	return 0;
 }