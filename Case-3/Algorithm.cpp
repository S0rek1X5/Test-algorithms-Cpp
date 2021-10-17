#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char letra;
	int cont,i,n,numeros[100],suma=0,multiplicacion,hel;	/*hel variable que ayudara a completar la multiplicacion*/
	cout<<"\tBienvenido"<<endl;
	cout<<"Digite cuantos numeros utilizara: "<<endl;cin>>n;
	i=0,cont=1,hel=1;
	while(i < n){
		cout<<"Digite el numero "<<cont<<": "<<endl;cin>>numeros[i];
		i+=1,cont++;
	}
	cout<<"Digite A para realizar SUMA - Digite B para realizar MULTIPLICACION: "<<endl;cin>>letra;
	if((letra=='a')||(letra=='A')){
		for(int cont2=0;cont2<=n;cont2++){
			suma+=numeros[cont2];
		}
		cout<<"La suma de sus numeros es: "<<suma;
	}
	else if((letra=='b')||(letra=='B')){
		for(int cont2=0;cont<=n;cont2++){
			multiplicacion=numeros[cont2]*numeros[hel];
			hel=multiplicacion;
		}
		cout<<"La multiplicacion de sus numeros es: "<<multiplicacion;
	}
	else{
		cout<<"Usted ha digitado un numero NO REGISTRADO, vuelva a intentarlo";
	}
	return 0;
}
