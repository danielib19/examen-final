/*
 * principal.cpp
 *
 *  Created on: 5 dic. 2018
 *      Author: Estudiante
 */


#include "funciones.h"
int main(){
	char usuario[20];
		int i=0,valida=1234,clave;
			do{
			cout<<"******TIENDA VIRTUAL DE VENTA DE CONSOLAS******"<<endl;
			cout<<"Num. de Cuenta: ";cin>>usuario;
			cout<<"CLAVE: ";cin>>clave;
				if(clave!=valida){
					cout<<"No valida"<<endl;
					i++;
				}
			}
				while (clave!=valida and i!=3);
				if(clave==valida){
					cout<<"Clave aceptada"<<endl;
					menu();
				}
				else
					cout<<"Se bloqueo"<<endl;
		return 0;
}
