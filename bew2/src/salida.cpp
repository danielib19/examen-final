/*
 * salida.cpp
 *
 *  Created on: 5 dic. 2018
 *      Author: Estudiante
 */


#include "funciones.h"
string nombre,apellido, DNI,fecha;
int cuenta=25000,s=30,s1=25,s2=14,s3=40,s4=80,s5=65,s6=83,s7=28,s8=25,s9=50,ps1=0,n3ds=0,xbox=0,psp=0,nin64=0,wii=0,ps4=0,gb=0,dsi=0,ps2=0;
double nuevoc,subTotal,impuesto,total_a_pagar,wp;
double playst1=0,nin3ds=0,xt=0,pspt=0,t64=0,wiit=0,ps4t=0,gbt=0,dsit=0,pst=0;
#define MAX 100
void encriptar(char msj[],char c){
	int n=strlen(msj);
	for(int i=0;i<n;i++){
		msj[i]=msj[i]^c;
	}

}
void encriptar2(){
	char mensaje[MAX],caracter;
	cout<<"Su Clave: ";cin>>mensaje;
	cout<<"Caracter con el que se encriptara: ";cin>>caracter;
	encriptar(mensaje,caracter);
	cout<<"El encriptado es: "<<mensaje<<endl;
}
void datos(){
	cout<<"\nSE REGISTRARAN SUS DATOS PERSONALES:.................."<<endl;
	cout<<"-Ingrese su Nombre: ";cin>>nombre;
	cout<<"-Ingrese su Apellido: ";cin>>apellido;
	cout<<"-Ingrese el N° de DNI: ";cin>>DNI;
	cout<<"*Como Adicional* La fecha de hoy: ";cin>>fecha;
	cout<<"El saldo que tiene en cuenta es de: "<<cuenta;
	cout<<endl;
}
void alvaro()
{	cout<<"\n**********!BIENVENIDOS A LA TIENDA DE LOS MAKERS-VENDEDOR ALVARO!***************"<<endl;
	cout<<"************!!!!!SELECCIONE LOS APARATOS QUE PEDIRA O COMPRARA!!!****************"<<endl;
	cout<<"****************(USE LA LETRA 'a' PARA SALIR DE ESTE *MENU*)]********************"<<endl;
	cout<<endl;
	cout<<"---------------!!!Selcciones las consolas Disponibles!!!-------------------$Precio"<<endl;
	cout<<"__________________________________________________________________________________"<<endl;
	cout<<"[11] PlayStation 1(30).....................................................$200.00"<<endl;
	cout<<endl;
	cout<<"[12] Nintendo 3DS(25)......................................................$450.00"<<endl;
	cout<<endl;
	cout<<"[13] Xbox 360(14)..........................................................$800.00"<<endl;
	cout<<endl;
	cout<<"[14] Playstation Portable(PSP)(40).........................................$700.00"<<endl;
	cout<<endl;
	cout<<"[15] Nintendo 64(80).......................................................$150.00"<<endl;
	cout<<endl;
	cout<<"[16] Nintendo Wii(65)......................................................$380.00"<<endl;
	cout<<endl;
	cout<<"[17] PlayStation 4(83).....................................................$1600.00"<<endl;
	cout<<endl;
	cout<<"[18] GameBoy(28)...........................................................$200.00"<<endl;
	cout<<endl;
	cout<<"[19] Nintendo DSi XL(25)...................................................$760.00"<<endl;
	cout<<endl;
	cout<<"[20] PlayStation 2(50).....................................................$550.00"<<endl;
	cout<<"Digite sus pedidos: "<<endl;
	bool done = false;
	while(!done)
	{
		char eleccion;
		string subeleccion ="";
		getline(cin,subeleccion);
		if(subeleccion=="11"){
			eleccion='1';}
		if(subeleccion=="12"){
			eleccion='2';}
		if(subeleccion=="13"){
			eleccion='3';}
		if(subeleccion=="14"){
			eleccion='4';}
		if(subeleccion=="15"){
			eleccion='5';}
	    if(subeleccion=="16"){
		    eleccion='6';}
		if(subeleccion=="17"){
		    eleccion='7';}
		if(subeleccion=="18"){
		    eleccion='8';}
		if(subeleccion=="19"){
		    eleccion='9';}
	    if(subeleccion=="20"){
		    eleccion='0';}
		if(subeleccion=="a"){
			eleccion='a';}
	switch(eleccion)
    {
	case '1':
		ps1=ps1+1;
		s=s-ps1;
		playst1=ps1*200.00;
		break;
	case '2':
		n3ds=n3ds+1;
		s1=s1-n3ds;
		nin3ds=n3ds*450.00;
		break;
	case '3':
		xbox=xbox+1;
		s2=s2-xbox;
		xt=xbox*800.00;
		break;
	case '4':
		psp=psp+1;
		s3=s3-psp;
		pspt=psp*700.00;
		break;
	case '5':
		nin64=nin64+1;
		s4=s4-nin64;
		t64=nin64*150.00;
		break;
	case '6':
		wii=wii+1;
		s5=s5-wii;
		wiit=wii*380.00;
		break;
	case '7':
		ps4=ps4+1;
		s6=s6-ps4;
		ps4t=ps4*1600.00;
		break;
	case '8':
		gb=gb+1;
		s7=s7-gb;
		gbt=gb*200.00;
		break;
	case '9':
		dsi=dsi+1;
		s8=s8-dsi;
		dsit=dsi*760.00;
		break;
	case '0':
		ps2=ps2+1;
		s9=s9-ps2;
		pst=ps2*550.00;
		break;
	case 'a':
		done = true;
		break;
	default:
		cout << " \n";
		break;
    }
}
}
void fernando()
{	cout<<"\n**********!BIENVENIDOS A LA TIENDA DE LOS MAKERS-VENDEDOR FERNANDO!*************"<<endl;
	cout<<"************!!!!!SELECCIONE LOS APARATOS QUE PEDIRA O COMPRARA!!!****************"<<endl;
	cout<<"****************(USE LA LETRA 'a' PARA SALIR DE ESTE *MENU*)]********************"<<endl;
	cout<<endl;
	cout<<"---------------!!!Selcciones las consolas Disponibles!!!-------------------$Precio"<<endl;
	cout<<"__________________________________________________________________________________"<<endl;
	cout<<"[11] PlayStation 1(30).....................................................$220.00"<<endl;
	cout<<endl;
	cout<<"[12] Nintendo 3DS(25)......................................................$550.00"<<endl;
	cout<<endl;
	cout<<"[13] Xbox 360(14)..........................................................$700.00"<<endl;
	cout<<endl;
	cout<<"[14] Playstation Portable(PSP)(40).........................................$600.00"<<endl;
	cout<<endl;
	cout<<"[15] Nintendo 64(80).......................................................$175.00"<<endl;
	cout<<endl;
	cout<<"[16] Nintendo Wii(65)......................................................$390.00"<<endl;
	cout<<endl;
	cout<<"[17] PlayStation 4(83).....................................................$1500.00"<<endl;
	cout<<endl;
	cout<<"[18] GameBoy(28)...........................................................$190.00"<<endl;
	cout<<endl;
	cout<<"[19] Nintendo DSi XL(25)...................................................$790.00"<<endl;
	cout<<endl;
	cout<<"[20] PlayStation 2(50).....................................................$500.00"<<endl;
	cout<<"Digite sus pedidos: "<<endl;
	bool done = false;
	while(!done)
	{
		char eleccion;
		string subeleccion ="";
		getline(cin,subeleccion);
		if(subeleccion=="11"){
			eleccion='1';}
		if(subeleccion=="12"){
			eleccion='2';}
		if(subeleccion=="13"){
			eleccion='3';}
		if(subeleccion=="14"){
			eleccion='4';}
		if(subeleccion=="15"){
			eleccion='5';}
	    if(subeleccion=="16"){
		    eleccion='6';}
		if(subeleccion=="17"){
		    eleccion='7';}
		if(subeleccion=="18"){
		    eleccion='8';}
		if(subeleccion=="19"){
		    eleccion='9';}
	    if(subeleccion=="20"){
		    eleccion='0';}
		if(subeleccion=="a"){
			eleccion='a';}
	switch(eleccion)
    {
	case '1':
		ps1=ps1+1;
		s=s-ps1;
		playst1=ps1*220.00;
		break;
	case '2':
		n3ds=n3ds+1;
		s1=s1-n3ds;
		nin3ds=n3ds*550.00;
		break;
	case '3':
		xbox=xbox+1;
		s2=s2-xbox;
		xt=xbox*700.00;
		break;
	case '4':
		psp=psp+1;
		s3=s3-psp;
		pspt=psp*600.00;
		break;
	case '5':
		nin64=nin64+1;
		s4=s4-nin64;
		t64=nin64*175.00;
		break;
	case '6':
		wii=wii+1;
		s5=s5-wii;
		wiit=wii*390.00;
		break;
	case '7':
		ps4=ps4+1;
		s6=s6-ps4;
		ps4t=ps4*1500.00;
		break;
	case '8':
		gb=gb+1;
		s7=s7-gb;
		gbt=gb*190.00;
		break;
	case '9':
		dsi=dsi+1;
		s8=s8-dsi;
		dsit=dsi*790.00;
		break;
	case '0':
		ps2=ps2+1;
		s9=s9-ps2;
		pst=ps2*500.00;
		break;
	case 'a':
		done = true;
		break;
	default:
		cout << " \n";
		break;
    }
}
}
void daniel()
{	cout<<"\n**********!BIENVENIDOS A LA TIENDA DE LOS MAKERS-VENDEDOR DANIEL!***************"<<endl;
	cout<<"************!!!!!SELECCIONE LOS APARATOS QUE PEDIRA O COMPRARA!!!****************"<<endl;
	cout<<"****************(USE LA LETRA 'a' PARA SALIR DE ESTE *MENU*)]********************"<<endl;
	cout<<endl;
	cout<<"---------------!!!Selcciones las consolas Disponibles!!!-------------------$Precio"<<endl;
	cout<<"__________________________________________________________________________________"<<endl;
	cout<<"[11] PlayStation 1(30).....................................................$260.00"<<endl;
	cout<<endl;
	cout<<"[12] Nintendo 3DS(25)......................................................$500.00"<<endl;
	cout<<endl;
	cout<<"[13] Xbox 360(14)..........................................................$850.00"<<endl;
	cout<<endl;
	cout<<"[14] Playstation Portable(PSP)(40).........................................$675.00"<<endl;
	cout<<endl;
	cout<<"[15] Nintendo 64(80).......................................................$190.00"<<endl;
	cout<<endl;
	cout<<"[16] Nintendo Wii(65)......................................................$400.00"<<endl;
	cout<<endl;
	cout<<"[17] PlayStation 4(83).....................................................$1800.00"<<endl;
	cout<<endl;
	cout<<"[18] GameBoy(28)...........................................................$200.00"<<endl;
	cout<<endl;
	cout<<"[19] Nintendo DSi XL(25)...................................................$800.00"<<endl;
	cout<<endl;
	cout<<"[20] PlayStation 2(50).....................................................$580.00"<<endl;
	cout<<"Digite sus pedidos: "<<endl;
	bool done = false;
	while(!done)
	{
		char eleccion;
		string subeleccion ="";
		getline(cin,subeleccion);
		if(subeleccion=="11"){
			eleccion='1';}
		if(subeleccion=="12"){
			eleccion='2';}
		if(subeleccion=="13"){
			eleccion='3';}
		if(subeleccion=="14"){
			eleccion='4';}
		if(subeleccion=="15"){
			eleccion='5';}
	    if(subeleccion=="16"){
		    eleccion='6';}
		if(subeleccion=="17"){
		    eleccion='7';}
		if(subeleccion=="18"){
		    eleccion='8';}
		if(subeleccion=="19"){
		    eleccion='9';}
	    if(subeleccion=="20"){
		    eleccion='0';}
		if(subeleccion=="a"){
			eleccion='a';}
	switch(eleccion)
    {
	case '1':
		ps1=ps1+1;
		s=s-ps1;
		playst1=ps1*260.00;
		break;
	case '2':
		n3ds=n3ds+1;
		s1=s1-n3ds;
		nin3ds=n3ds*500.00;
		break;
	case '3':
		xbox=xbox+1;
		s2=s2-xbox;
		xt=xbox*850.00;
		break;
	case '4':
		psp=psp+1;
		s3=s3-psp;
		pspt=psp*675.00;
		break;
	case '5':
		nin64=nin64+1;
		s4=s4-nin64;
		t64=nin64*190.00;
		break;
	case '6':
		wii=wii+1;
		s5=s5-wii;
		wiit=wii*400.00;
		break;
	case '7':
		ps4=ps4+1;
		s6=s6-ps4;
		ps4t=ps4*1800.00;
		break;
	case '8':
		gb=gb+1;
		s7=s7-gb;
		gbt=gb*200.00;
		break;
	case '9':
		dsi=dsi+1;
		s8=s8-dsi;
		dsit=dsi*800.00;
		break;
	case '0':
		ps2=ps2+1;
		s9=s9-ps2;
		pst=ps2*580.00;
		break;
	case 'a':
		done = true;
		break;
	default:
		cout << "-\n";
		break;
    }
}
}
void vendedores3(){
		bool logica=false;
		char opc1;
		cout<<"Vendedores: "<<endl;
		cout<<"b.-Alvaro"<<endl;
		cout<<"c.-Fernando"<<endl;
		cout<<"d.-Daniel"<<endl;
					while(!logica){

						cout<<"Elija la letra: ";cin>>opc1;
						switch(opc1){
						case 'b': alvaro();
								  logica=true;
								  break;
						case 'c': fernando();
								  logica=true;
								  break;
						case 'd': daniel();
								  logica=true;
								  break;
						default: cout<<"Letra invalida"<<endl;break;
						}
					}
}
float pagarmonto(float a, float b, float c, float d, float e, float f,float g,float h,float i,float j){
	wp=a+b+c+d+e+f+g+h+i+j;
	return wp;
}
void recibo(){
	cout<<endl;
	cout<<endl;
	cout<<"FECHA DE HOY:"<<fecha<<endl;
	cout<<"...............!!!!USTED ORDENO LOS SIGUIENTES APARATOS!!!!:............."<<endl;
	cout<<"SU SALDO EN CUENTA ES DE: "<<cuenta<<endl;
	cout<<"Cntd\t\tOrden\t\tA Pagar\t\tA nombre de:\t\tNuevo Stock"<<endl;
	cout<<"__________________________________________________________________________________"<<endl;
	if(ps1!=0){
		cout<<ps1<<"\t\t#11\t\t$"<<playst1<<"\t\t\t\t\t"<<s<<endl;
	}
	if(n3ds!=0){
		cout<<n3ds<<"\t\t#12\t\t$"<<nin3ds<<"\t\t\t\t\t"<<s1<<endl;
	}
	if(xbox!=0){
		cout<<xbox<<"\t\t#13\t\t$"<<xt<<"\t\t\t\t\t"<<s2<<endl;
	}
	if(psp!=0){
		cout<<psp<<"\t\t#14\t\t$"<<pspt<<"\t\t\t\t\t"<<s3<<endl;
	}
	if(nin64!=0){
		cout<<nin64<<"\t\t#15\t\t$"<<t64<<"\t\t\t\t\t"<<s4<<endl;
	}
	if(wii!=0){
	    cout<<wii<<"\t\t#16\t\t$"<<wiit<<"\t\t\t\t\t"<<s5<<endl;
	}
	if(ps4!=0){
	    cout<<ps4<<"\t\t#17\t\t$"<<ps4t<<"\t\t\t\t\t"<<s6<<endl;
	}
	if(gb!=0){
		cout<<gb<<"\t\t#18\t\t$"<<gbt<<"\t\t\t\t\t"<<s7<<endl;
	}
	if(dsi!=0){
		cout<<dsi<<"\t\t#19\t\t$"<<dsit<<"\t\t\t\t\t"<<s8<<endl;
	}
	if(ps2!=0){
		cout<<ps2<<"\t\t#20\t\t$"<<pst<<"\t\t\t\t\t"<<s9<<endl;;
	}
	cout<<"-----------------------------------------------"<<nombre<<" "<<apellido<<"("<<DNI<<")"<<endl;
	cout<<"__________________________________________________________________________________"<<endl;
	subTotal=pagarmonto(playst1,nin3ds,xt,pspt,t64,wiit,ps4t,gbt,dsit,pst);
	impuesto=(subTotal*.16);
	total_a_pagar=(subTotal+impuesto);
	if(total_a_pagar>cuenta)
		cout<<"COMPRA NO VALIDA-SUPERO SUS LIMITES XXXXXXXXXXX"<<endl;
	else{
	cout<<"Subtotal       $"<<subTotal<<endl;
	cout<<"impuesto       $"<<impuesto<<endl;
	cout<<"__________________________________________________________________________________"<<endl;
	cout<<"Total a pagar  $"<<total_a_pagar<<endl;
	cout<<"__________________________________________________________________________________"<<endl;
	nuevoc=cuenta-total_a_pagar;
	cout<<"Nuevo saldo en cuenta: "<<nuevoc<<endl;
	cout<<("\n\t\t!!!GRACIAS POR SU COMPRA. REGRESE PRONTO!!!\n");
	}
}


void preciosv(){
		cout<<"\n                  Alvaro         Fernando        Daniel"<<endl;
		cout<<"_________________________________________________________"<<endl;
		cout<<"-PlayStation 1    $200.00        $220.00         $260.00          "<<endl;
		cout<<"-Nintendo 3DS     $450.00        $550.00         $500.00          "<<endl;
		cout<<"-Xbox 360(14)     $800.00        $700.00         $850.00          "<<endl;
		cout<<"-(PSP)            $700.00        $600.00         $675.00          "<<endl;
		cout<<"-Nintendo 64      $150.00        $175.00         $190.00          "<<endl;
		cout<<"-Nintendo Wii     $380.00        $390.00         $400.00          "<<endl;
		cout<<"-PlayStation 4    $1600.00       $1500.00        $1800.00          "<<endl;
		cout<<"-GameBoy          $200.00        $190.00         $200.00          "<<endl;
		cout<<"-Nintendo DSi XL  $760.00        $790.00         $800.00          "<<endl;
		cout<<"-PlayStation 2    $550.00        $500.00         $580.00          "<<endl;
}
void menu(){
	int opc;
	cout<<"\nSe le presentaran las siguientes opciones: "<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"1.-Registrar datos."<<endl;
	cout<<"2.-Ver los precios de los distintos vendedores existentes."<<endl;
	cout<<"3.-Elegir al comprador. "<<endl;
	cout<<"4.-Ver mi recibo de compra. "<<endl;
	cout<<"5.-Encriptar contraseña."<<endl;
	cout<<"6.-Salir"<<endl;
	do{
		cout<<"\nInserte su opcion: ";cin>>opc;
		switch (opc){
		case 1: datos();break;
		case 2: preciosv();break;
		case 3: vendedores3();break;
		case 4: recibo();break;
		case 5: encriptar2();break;
		default: cout<<"-"<<endl;break;
		}
	}while(opc!=6);
	cout<<"SALIO DE LA PAGINA"<<endl;
}
