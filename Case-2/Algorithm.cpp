/*Suponiendo que para aprobar el examen se necesita un puntaje de +60*/
#include<iostream>
using namespace std;
int main(){
	int examen1,examen2,examen3;
	int aprobaron_todos=0,aprobo1=0,aprobaron_el_ultimo=0,i=1;
	while(i<=5){
		cout<<"Estudiante "<<i<<" Digite la nota del primer examen: "<<endl;cin>>examen1;
		cout<<"Estudiante "<<i<<" Digite la nota del segundo examen: "<<endl;cin>>examen2;
		cout<<"Estudiante "<<i<<" Digite la nota del tercer examen: "<<endl;cin>>examen3;
		if((examen1>=60)&&(examen2>=60)&&(examen3>=60)){
			aprobaron_todos++;
		}
		if((examen1>=60) || (examen2>=60) || (examen3>=60)){
			aprobo1++;
		}
		if((examen1<60)&&(examen2<60)&&(examen3>=60)){
			aprobaron_el_ultimo++;
		}
		i++;
	}
	cout<<aprobaron_todos<<" Aprobaron todos los examenes"<<endl;
	cout<<aprobo1<<" Aprobaron al menos un examen"<<endl;
	cout<<aprobaron_el_ultimo<<" Aprobaron solo el ultimo examen"<<endl;
	return 0;
}
