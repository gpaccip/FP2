//Calculando la hipotenusa de un triangulo
#include<iostream>
#include<math.h>
#include<stdlib.h>

 using namespace std;
 int main(){
 	double c1,c2,hipo,suma;
 		cout<<"\tCalculando la hipotenusa de un triangulo"<<endl;
 		cout<<"\nDigite la medida del primer cateto: ";cin>>c1;
 		cout<<"\nDigite la medida del segundo cateto: ";cin>>c2;
 		cout<<endl;
 		
 			suma=pow(c1,2)+pow(c2,2);
 			hipo=sqrt(suma);
 	
	 	cout<<"La hipotenusa es: "<<hipo<<endl;
	
 	system("pause");
	return 0;
 }