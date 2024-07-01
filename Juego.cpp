//juego de piedra,papel o tijera
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int h,m,ch=0,cm=0,c1=1,c2=1;
	
	cout<<"Bienvenido al juego: "<<endl;
	cout<<"1.-piedra"<<endl;
	cout<<"2.-papel"<<endl;
	cout<<"3.-tijera"<<endl;
	cout<<"El que tenga 3 victorias gana el juego"<<endl;
	
	do{
 	cout<<"\nDigite el numero del objeto que eligira ";cin>>h;
 	
 	if(h==1){
 		
		 cout<<"Humano: piedra\n";
	 }
 	if(h==2){
 		
		 cout<<"Humano: papel\n";
	 }
 	if(h==3){
 		
		 cout<<"Humano: tijera\n";
	 }
 	
	m=(rand()%3)+1;
	
		if(m==1){
 		
			 cout<<"Maquina: piedra\n";
	 }
 		if(m==2){
 		
			 cout<<"Maquina: papel\n";
	 }
 		if(m==3){
 		
			 cout<<"Maquina: tijera\n";
	 }
	
			if(h==m){
				cout<<"Empate\n";
	}
	
			if((h==1&&m==3)||(h==2&&m==1)||(h==3&&m==2)){
				
				cout<<"Gana humano\n";
				ch++;
				c1++;
			}
				if((m==1&&h==3)||(m==2&&h==1)||(m==3&&h==2)){
				
					cout<<"Gana maquina\n";
					cm++;
					c2++;
			}
		cout<<"Humano: "<<ch<<",  Maquina: "<<cm<<"\n";
		
		}while(c1<=3&&c2<=3);
		
		if(ch==3){
			cout<<"\nGano el humano"<<endl;
			cout<<"Gracias por jugar!";
			return 0;
		}
		else if(cm==3){
			cout<<"\nGano la maquina"<<endl;
			cout<<"Gracias por jugar!";
		}
			return 0;
}