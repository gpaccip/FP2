//Generador de numeros aleatorios
#include<iostream>
#include<time.h>
#include<stdlib.h>

 using namespace std;
 int main(){
 	int n,vmax,dato;
 		cout<<"\tGenerador de numeros aleatorios"<<endl;
 		cout<<"\nDigite la cantidad de numeros que desea generar: ";cin>>n;
 		cout<<"Digite el valor maximo permitido: ";cin>>vmax;
 		cout<<endl;
 		
 		srand(time(NULL));
 		
 		for(int i=1;i<=n;i++){
 				dato=0+rand()%(vmax+1);
 			
 				cout<<"El numero aleatorio "<<i<<" es: "<<dato<<endl;
 		}
 			
 	system("pause");
	return 0;
 }
 