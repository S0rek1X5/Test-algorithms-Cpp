#include<iostream>
using namespace std;
int main(){
	int matriz1[3][3]={{1,2,3},{4,5,6},{3,5,2}},matriz2[3][3]={{5,4,3},{2,1,0},{3,1,4}};
	int matriz3[3][3];
	cout<<"Sus matrices son:"<<endl;
	cout<<"Matriz 1"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz1[i][j];
		}
		cout<<endl;
	}
	cout<<"Matriz 2"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz2[i][j];
		}
		cout<<endl;
	}
	cout<<"\nLa multiplicacion de sus matrices es: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz3[i][j]=matriz1[i][j]*matriz2[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz3[i][j];
		}
		cout<<endl;
	}
	return 0;
}
