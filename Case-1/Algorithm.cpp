#include<iostream>
using namespace std;
int main(){
	float temp,may=0,min=999,suma=0,media;
	int i,cant=0;
	cout<<"\tBienvenido\n";
	for(i=0;i<=24;i=i+4){
		cout<<"Digite la temperatura de las "<<i<<" horas: "<<endl;cin>>temp;
		suma+=temp;
		cant+=1;
		if(temp>may){
			may=temp;
		}
		else if(temp<min){
			min=temp;
		}
	}
	media=suma/cant;
	cout<<"La media de temperatura es: "<<media<<endl;
	cout<<"La temperatura mas alta fue: "<<may<<endl;
	cout<<"La temperatura mas baja fue: "<<min<<endl;
	return 0;
}
