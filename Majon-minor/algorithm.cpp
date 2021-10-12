#include<iostream>
using namespace std;
int main (){
	float a, b, c, d, e, max, min;
	cout<<"----------BIENVENIDO----------"<<endl;
	cout<<"Introduzca el valor a\n: ";cin>>a;
	cout<<"Introduzca el valor b\n: ";cin>>b;
	cout<<"Introduzca el valor c\n: ";cin>>c;
	cout<<"Introduzca el valor d\n: ";cin>>d;
	cout<<"Introduzca el valor e\n: ";cin>>e;
	max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	if(e>max){
		max=e;
	}
	cout<<"El numero mayor es\n-> "<<max;
	min=a;
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	if(d<min){
		min=d;
	}
	if(e<min){
		min=e;
	}
	cout<<"\nEl numero menor es\n-> "<<min;
	return 0;
}
