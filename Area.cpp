//Calculando el area de un circulo
#include<iostream>
#include<math.h>
#include<stdlib.h>

 using namespace std;
 int main(){
 	double r,area;
 		cout<<"\tCalculando el area de un circulo"<<endl;
 		cout<<"\nDigite el radio: ";cin>>r;
 	
 			area=M_PI*pow(r,2);
 	
	 	cout<<"El area es: "<<area<<endl;
	
 	system("pause");
	return 0;
 }
 