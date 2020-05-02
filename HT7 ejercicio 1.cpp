/*Una empresa necesita llevar el control de los datos personales de sus 10 
empleados contratados, por la motivo la empresa lo ha contratado para la implementacion
de este proyecto, los datos a almacenar son:
Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento,
Salario.
Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion. 
El programa debera de desplegar la lista de empleados almacenados y el total de la planilla.
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Inventario{
	int codempleado, n=10;
	char nempleado[30];
	 char puesto[23];
	char departamento[30];
	float salario;
}inventario['n'], *puntero_inventario = inventario;

void pedirdatos();
//void planilla(Inventario *);
int main(){
	pedirdatos();
	//planilla(puntero_inventario);
	
	return 0;
}

void pedirdatos(){
	int n, i;
	cout<<"ingrese la cantidad de empleado a ingresar"<<endl;
	cin>>n;
	for(int i=0; i<=n;i++){
		fflush(stdin);
		cout<<"Digite el Codigo del Empleado: "<<endl;
		cin>>(puntero_inventario+i)->codempleado;
		fflush(stdin);
		cout<<"Digite el Nombre del Empleado: "<<endl;
		cin.getline((puntero_inventario+i)->nempleado,30,'\n');
			fflush(stdin);
		cout<<"Digite el Puesto del Empleado: "<<endl;
		cin.getline((puntero_inventario+i)->puesto,23,'\n');
		
		cout<<"A que departemnto pertenece Dpto.  Gerencia Admin Produccion"<<endl;
		cin>>(puntero_inventario+i)->departamento,30,'\n';
		cout<<"Ingrese el Salario "<<endl;
		cin>>(puntero_inventario+i)->salario;
		cout<<"\n";
	
		
		cout<<"Codigo  Empleado: "<<(puntero_inventario)->codempleado<<endl;
		cout<<"Nombre del Empleado: "<<(puntero_inventario)->nempleado<<endl;
		cout<<"Puesto del Empleado: "<<(puntero_inventario)->puesto<<endl;
		cout<<"Departamneto al que pertenece"<<(puntero_inventario)->departamento<<endl;
		cout<<"Ingrese el Salario "<<(puntero_inventario)->salario<<endl;
	}
}

/*void planilla(Inventario *puntero_inventario){
	float mayor=0.0;
	int pos=0;
	
	for (int i=0;i<=1;i++){
			fflush(stdin);
		if((puntero_inventario+i)->salario>mayor){
			mayor = (puntero_inventario+i)->salario;
			pos = i;
		}
	}
	
	cout<<"\n ";
		cout<<"Codigo  Empleado: "<<(puntero_inventario+pos)->codempleado<<endl;
		cout<<"Nombre del Empleado: "<<(puntero_inventario+pos)->nempleado<<endl;
		cout<<"Puesto del Empleado: "<<(puntero_inventario+pos)->puesto<<endl;
		cout<<"Departamneto al que pertenece"<<(puntero_inventario+pos)->departamento<<endl;
		cout<<"Ingrese el Salario "<<(puntero_inventario+pos)->salario<<endl;
}*/







