/*
 * salida.cpp
 *
 *  Created on: 5 dic. 2018
 *      Author: Estudiante
 */

#include "funciones.h"
string producto[100][10],producto1[100][10],producto2[100][10];
float datos[100][10],datos1[100][10],datos2[100][10];
float ps1,ps2,ps4,xbox,wii;
float f,d,a,g;
int fi,co,nuevodato;

void fernando(){
		producto[0][0]= "PlayStation1";
		datos[0][0]= 14;
		datos[0][1]= 50;
		datos[0][2]= datos[0][0]*150;
		datos[0][3]= datos[0][2]*0.1;
		datos[0][4]= datos[0][3]+datos[0][2];
		datos[0][5]= datos[0][1]-datos[0][0]-datos1[0][0]-datos2[0][0];

		producto[1][0]= "PlayStation2";
		datos[1][0]= 4;
		datos[1][1]= 20;
		datos[1][2]= datos[1][0]*290;
		datos[1][3]= datos[1][2]*0.1;
		datos[1][4]= datos[1][3]+datos[1][2];
		datos[1][5]= datos[1][1]-datos[1][0]-datos1[1][0]-datos2[1][0];


		producto[2][0]= "PlayStation4";
		datos[2][0]= 3;
		datos[2][1]= 21;
		datos[2][2]= datos[2][0]*1500;
		datos[2][3]= datos[2][2]*0.1;
		datos[2][4]= datos[2][3]+datos[2][2];
		datos[2][5]= datos[2][1]-datos[2][0]-datos1[2][0]-datos2[2][0];


		producto[3][0]= "Xbox 360";
		datos[3][0]= 4;
		datos[3][1]= 81;
		datos[3][2]= datos[3][0]*600;
		datos[3][3]= datos[3][2]*0.1;
		datos[3][4]= datos[3][3]+datos[3][2];
		datos[3][5]= datos[3][1]-datos[3][0]-datos1[3][0]-datos2[3][0];


		producto[4][0]= "Nintento Wii";
		datos[4][0]= 6;
		datos[4][1]= 70;
		datos[4][2]= datos[4][0]*1000;
		datos[4][3]= datos[4][2]*0.1;
		datos[4][4]= datos[4][3]+datos[4][2];
		datos[4][5]= datos[4][1]-datos[4][0]-datos1[4][0]-datos2[4][0];

		cout << "Producto\tCntd\tStock\tPago\tImps.\tT.Pago \tN.Stock\n";
		cout << "--------\t----\t-----\tS/.-\tS/.1%\tS/.----\t-------\n";
		for (int i=0;i<5;i++){
				cout<<producto[i][0]<<"\t";
				cout<<datos[i][0]<<"\t";
				cout<<datos[i][1]<<"\t";
				cout<<datos[i][2]<<"\t";
				cout<<datos[i][3]<<"\t";
				cout<<datos[i][4]<<"\t";
				cout<<datos[i][5]<<"\n";
				}

}

void daniel(){
	producto1[0][0]= "PlayStation1";
	datos1[0][0]= 5;
	datos1[0][1]= 50;
	datos1[0][2]= datos1[0][0]*150;
	datos1[0][3]= datos1[0][2]*0.1;
	datos1[0][4]= datos1[0][3]+datos1[0][2];
	datos1[0][5]= datos1[0][1]-datos1[0][0]-datos[0][0]-datos2[0][0];

	producto1[1][0]= "PlayStation2";
	datos1[1][0]= 0;
	datos1[1][1]= 20;
	datos1[1][2]= datos1[1][0]*290;
	datos1[1][3]= datos1[1][2]*0.1;
	datos1[1][4]= datos1[1][3]+datos1[1][2];
	datos1[1][5]= datos1[1][1]-datos1[1][0]-datos[1][0]-datos2[1][0];


	producto1[2][0]= "PlayStation4";
	datos1[2][0]= 2;
	datos1[2][1]= 21;
	datos1[2][2]= datos1[2][0]*1500;
	datos1[2][3]= datos1[2][2]*0.1;
	datos1[2][4]= datos1[2][3]+datos1[2][2];
	datos1[2][5]= datos1[2][1]-datos1[2][0]-datos[2][0]-datos2[2][0];


	producto1[3][0]= "Xbox 360";
	datos1[3][0]= 7;
	datos1[3][1]= 81;
	datos1[3][2]= datos1[3][0]*600;
	datos1[3][3]= datos1[3][2]*0.1;
	datos1[3][4]= datos1[3][3]+datos1[3][2];
	datos1[3][5]= datos1[3][1]-datos1[3][0]-datos[3][0]-datos2[3][0];


	producto1[4][0]= "Nintento Wii";
	datos1[4][0]= 9;
	datos1[4][1]= 70;
	datos1[4][2]= datos1[4][0]*1000;
	datos1[4][3]= datos1[4][2]*0.1;
	datos1[4][4]= datos1[4][3]+datos1[4][2];
	datos1[4][5]= datos1[4][1]-datos1[4][0]-datos[4][0]-datos2[4][0];

	cout << "Producto\tCntd\tStock\tPago\tImps.\tT.Pago \tN.Stock\n";
	cout << "--------\t----\t-----\tS/.-\tS/.1%\tS/.----\t-------\n";
		for (int i=0;i<5;i++){
			cout<<producto1[i][0]<<"\t";
			cout<<datos1[i][0]<<"\t";
			cout<<datos1[i][1]<<"\t";
			cout<<datos1[i][2]<<"\t";
			cout<<datos1[i][3]<<"\t";
			cout<<datos1[i][4]<<"\t";
			cout<<datos1[i][5]<<"\n";
			}
}

void alvaro(){
	producto2[0][0]= "PlayStation1";
	datos2[0][0]= 6;
	datos2[0][1]= 50;
	datos2[0][2]= datos2[0][0]*150;
	datos2[0][3]= datos2[0][2]*0.1;
	datos2[0][4]= datos2[0][3]+datos2[0][2];
	datos2[0][5]= datos2[0][1]-datos2[0][0]-datos[0][0]-datos1[0][0];

	producto2[1][0]= "PlayStation2";
	datos2[1][0]= 2;
	datos2[1][1]= 20;
	datos2[1][2]= datos2[1][0]*290;
	datos2[1][3]= datos2[1][2]*0.1;
	datos2[1][4]= datos2[1][3]+datos2[1][2];
	datos2[1][5]= datos2[1][1]-datos2[1][0]-datos[1][0]-datos1[1][0];


	producto2[2][0]= "PlayStation4";
	datos2[2][0]= 9;
	datos2[2][1]= 21;
	datos2[2][2]= datos2[2][0]*1500;
	datos2[2][3]= datos2[2][2]*0.1;
	datos2[2][4]= datos2[2][3]+datos2[2][2];
	datos2[2][5]= datos2[2][1]-datos2[2][0]-datos[2][0]-datos1[2][0];


	producto2[3][0]= "Xbox 360";
	datos2[3][0]= 3;
	datos2[3][1]= 81;
	datos2[3][2]= datos2[3][0]*600;
	datos2[3][3]= datos2[3][2]*0.1;
	datos2[3][4]= datos2[3][3]+datos2[3][2];
	datos2[3][5]= datos2[3][1]-datos2[3][0]-datos[3][0]-datos1[3][0];


	producto2[4][0]= "Nintento Wii";
	datos2[4][0]= 1;
	datos2[4][1]= 70;
	datos2[4][2]= datos2[4][0]*1000;
	datos2[4][3]= datos2[4][2]*0.1;
	datos2[4][4]= datos2[4][3]+datos2[4][2];
	datos2[4][5]= datos2[4][1]-datos2[4][0]-datos[4][0]-datos1[4][0];

	cout << "Producto\tCntd\tStock\tPago\tImps.\tT.Pago \tN.Stock\n";
	cout << "--------\t----\t-----\tS/.-\tS/.1%\tS/.----\t-------\n";
		for (int i=0;i<5;i++){
			cout<<producto2[i][0]<<"\t";
			cout<<datos2[i][0]<<"\t";
			cout<<datos2[i][1]<<"\t";
			cout<<datos2[i][2]<<"\t";
			cout<<datos2[i][3]<<"\t";
			cout<<datos2[i][4]<<"\t";
			cout<<datos2[i][5]<<"\n";
					}
}


void vendedores(){
	bool logica=false;
	char opc1;
	cout<<"\nSus vendedores son: "<<endl;
	cout<<"a.FERNANDO"<<endl;
	cout<<"b.DANIEL"<<endl;
	cout<<"c.ALVARO"<<endl;
	cout<<"d.Salir"<<endl;
	while(!logica){
	cout<<"\nInserte opcion: ";cin>>opc1;
	switch(opc1){
	case 'a': cout<<"\nVentas de Fernando"<<endl;
			  fernando();break;
	case 'b': cout<<"\nVentas de Daniel"<<endl;
			  daniel();break;
	case 'c': cout<<"\nVentas de Alvaro"<<endl;
			  alvaro();break;
	case 'd': logica=true;break;
	default: cout<<"OPCION INVALIDA";break;
	}
	}

}

void ingresos(){
	f=datos[0][4]+datos[1][4]+datos[2][4]+datos[3][4]+datos[4][4];
	d=datos1[0][4]+datos1[1][4]+datos1[2][4]+datos1[3][4]+datos1[4][4];
	a=datos2[0][4]+datos2[1][4]+datos2[2][4]+datos2[3][4]+datos2[4][4];
	cout<<"\nFernando obtuvo un total de: "<<f<<" Soles."<<endl;
	cout<<"Daniel obtuvo un total de: "<<d<<" Soles."<<endl;
	cout<<"Alvaro obtuvo un total de: "<<a<<" Soles."<<endl;
}

float ingreso_tienda(float a,float b,float c){
	g=a+b+c;
	return g;
}

void mas_vendido(){
	ps1=datos[0][0]+datos1[0][0]+datos2[0][0];
	ps2=datos[1][0]+datos1[1][0]+datos2[1][0];
	ps4=datos[2][0]+datos1[2][0]+datos2[2][0];
	xbox=datos[3][0]+datos1[3][0]+datos2[3][0];
	wii=datos[4][0]+datos1[4][0]+datos2[4][0];
		if(ps1>ps2 and ps1>ps4 and ps1>xbox and ps1>wii){
			cout<<"\nLA CONSOLA MAS VENDIDA FUE PlayStation 1"<<endl;
		}
		else if (ps2>ps1 and ps2>ps4 and ps2>xbox and ps2>wii){
			cout<<"\nLA CONSOLA MAS VENDIDA FUE PlayStation 2"<<endl;
		}
		else if (ps4>ps1 and ps4>ps2 and ps4>xbox and ps4>wii){
			cout<<"\nLA CONSOLA MAS VENDIDA FUE PlayStation 4"<<endl;
		}
		else if (xbox>ps1 and xbox>ps2 and xbox>ps4 and xbox>wii){
			cout<<"\nLA CONSOLA MAS VENDIDA FUE Xbox 360"<<endl;
		}
		else if (wii>ps1 and wii>ps2 and wii>ps4 and wii>xbox){
			cout<<"\nLA CONSOLA MAS VENDIDA FUE Nintendo Wii"<<endl;
		}
	cout<<"El total de PlayStatio1 vendidos es de: "<<ps1<<endl;
	cout<<"El total de PlayStatio2 vendidos es de: "<<ps2<<endl;
	cout<<"El total de Xbox 360 vendidos es de: "<<xbox<<endl;
	cout<<"El total de Nintendo´s Wii es de: "<<wii<<endl;
}
void precios(){
	cout<<"\nConsolas__________"<<endl;
	cout<<"-PlayStation 1: S/.150"<<endl;
	cout<<"-PlayStation 2: S/.290"<<endl;
	cout<<"-PlayStation 4: S/.1500"<<endl;
	cout<<"-Xbox 360: S/.600"<<endl;
	cout<<"-Nintendo Wii: S/.1000"<<endl;

}
void ingreo(){

	cout<<"El ingreso total de la tienda es de: "<<ingreso_tienda(f,d,a)<<endl;
}
void menu(){
	int opc;
	cout<<"__________TIENE LAS SIGUIENTES OPCIONES________"<<endl;
	cout<<"1.Precios: "<<endl;
	cout<<"2.Vendedores y sus ventas: "<<endl;
	cout<<"3.Ingresos de cada vendedor: "<<endl;
	cout<<"4.Cantidad de consolas vendidas: "<<endl;
	cout<<"5.Ingreso total a la tienda: "<<endl;
	cout<<"6.Salir"<<endl;
	do{
		cout<<"\nInserte su opcion: ";cin>>opc;
		switch (opc){
		case 1: precios();break;
		case 2: vendedores();break;
		case 3: ingresos();break;
		case 4: mas_vendido();break;
		case 5: ingreo();break;
		}
	}while(opc!=6);
	cout<<"SALIO DEL PROGRAMA"<<endl;
}
