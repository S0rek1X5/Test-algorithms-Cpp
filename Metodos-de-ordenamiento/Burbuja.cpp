#include<iostream>
using namespace std;
int main(){
	int numeros[]={5,4,9,7,2,6,1};
	int aux;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			if(numeros[j]>numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	for(int i=0;i<7;i++){
		cout<<numeros[i]<<endl;
	}
	return 0;
}
