#include<iostream>
using namespace std;
int main(){
	char idiom [1];

	cout<<"------Bienvenido------\n";
	cout<<"\nSeleccione idioma/Choose lenguage\nSpanish = A --- English = B\n: ";cin>>idiom;
	if(idiom[0]=='a' || idiom[0]=='A'){
	//Contenido en español
	}
	else if(idiom[0]=='b' || idiom[0]=='B'){
	//English content
	}
	else{
	cout<<"El idioma marcado no esta registrado/The lenguage selected si nota registered";
	}
	return 0;	
}
