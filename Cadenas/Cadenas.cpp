#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char texto[100],texto2[100],nombre[100];
	int tamanho;
	cout<<"Digite su nombre y apellido: ";cin.getline(texto,100);
	cout<<"Digite su otro nombre y apellido: ";cin.getline(nombre,100);
	strcpy(texto2,texto);  //Funcion strCPY  =  Copiar texto a otro
	strcat(texto,nombre);  //Funcion Para juntar cadenas 
	tamanho=strlen(texto);  //Funcion strLEN  =  Determinar la cantidad de letras
	strupr(texto);			//Funcion strUPR  =  Transforma una cadena minuscula a MAYUSCULA
	strlwr(nombre); 			//funcion strLWR  =  Tranforma una cadena de mayuscula a MINUSCULA
	cout<<texto<<endl;
	/*
	if(strcmp(texto,nombre) == 0){     //Funcion strCMP  =  Hace comparaciones entre cadenas
		cout<<"Ambos son iguales"<<endl;
	}
	else if(strcmp(texto,nombre)!=0){
		cout<<"Los nombres no son iguales"<<endl;
	}
	
	if(strcmp(texto,nombre)>0){
		cout<<texto<<" Es mayor alfabeticamente que "<<nombre<<endl;
	}
	else if(strcmp(texto,nombre)==0){
	    cout<<nombre<<" Y "<<texto<<" Tienen el mismo Tamanho alfabeticamente"<<endl;
	}
	else if(strcmp(nombre,texto)>0){
		cout<<nombre<<" Es mayor alfabeticamente que "<<texto<<endl;
	}
	*/
	/*
	//Tamanho
	if(tamanho>10){
		cout<<texto2<<" Supera los 10 digitos";
	}
	else{
		cout<<"ERROR";
	}
	*/
	return 0;
}
