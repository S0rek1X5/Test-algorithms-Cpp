#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	int matriz[50][50],matriz1[50][50],colum,filas,valor=0;
	cout<<"\tBienvenido"<<endl;
	cout<<"Digite el numero de filas: ";cin>>filas;
	cout<<"Digite el numero de columnas: ";cin>>colum;
	srand(time(NULL));
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
			valor= 1+rand()%(100);
			matriz[i][j]=valor;
		}
	}
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
			matriz1[i][j]=matriz[i][j];
		}
	}
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
			cout<<matriz1[i][j]<<"   ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
