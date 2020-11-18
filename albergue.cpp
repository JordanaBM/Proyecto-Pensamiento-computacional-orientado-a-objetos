/*
 * Proyecto Pensamiento
 * Computacional Orientado a Objetos
 * Jordana Betancourt Menchaca
 * A01707434
 */

/*
 * Programa "Albergue de Animales" permite el registro y muestra
 * de información sobre animales que lleguen a un albergue 
 * Incluye clase padre animal y herencia en clase mamifero y oviparo
 * Devueleve el carnet de los animales y permite o no darlo en adopción
 * Se pueden modificar los datos de los animales
 * Puede encontrar la mascota de tu preferencia
 */ 

//Bibliotecas
#include <iostream>   //Para imprimir
#include "Animal.h" //Clase Animal


using namespace std;

int main()
{
	int opcion,opcion_2;
	Mamifero perro("Perro","Scooby","Gran Danes","Macho","Cafe",23,"18/11/2020","Corto","No");
	Oviparo ave("Pajaro","Piolin","Canario","Hembra","Amarillo",3,"18/11/2020","Plumas","Si");
	
	do //Menú de opciones
	{
		cout<<"ALBERGUE DE ANIMALES\n";
		cout<<"1. Ingresar nuevos datos\n";
		cout<<"2. Ver datos\n";
		cout<<"3. Cambiar datos\n";
		cout<<"4. Encuentra tu mascota\n";
		cout<<"5. Salir\n";
		cout<<"\n Digite la opcion que desee: ";
		cin>>opcion;
		
		switch (opcion)
		{
			case 1: //Para el registro de nuevos datos
			cout<<"\nREGISTROS\n\n";
			cout<<"1. Nuevo registro mamifero\n";
			cout<<"2. Nuevo registro oviparo\n";
			cout<<"3. Salir al menu principal\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion_2;
			
				switch (opcion_2)
				{
				case 1:
				cout<<"Nuevo registro de mamifero\n";
				
				break;
				
				case 2: 
				cout<<"Nuevo registro de oviparo\n";
				
				break;
				
				case 3:
				cout<<"Volviendo al menu principal\n";
				break;
				}
				
			break;
					
			case 2: //Para visualizar los datos
			cout<<"\nDATOS\n\n";
			cout<<"1. Datos Mamiferos\n";
			cout<<"2. Datos Oviparos\n";
			cout<<"3. Salir al menu principal\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion_2;
			
				switch (opcion_2)
				{
				case 1:
				cout<<"Mamiferos registrados\n"<<endl;
				perro.print();
				cout<<endl;
				break;
				
				case 2: 
				cout<<"Oviparos registrados\n\n";
				ave.print();				
				cout<<endl;
				break;
				
				case 3:
				cout<<"Volviendo al menu principal\n";
				break;
				}
				
			break;
			
			case 3: //Para modificar los datos
			cout<<"\nMODIFICACION DE DATOS\n\n";
			cout<<"1. Cambiar Registro Mamiferos\n";
			cout<<"2. Cambiar Registro Oviparos\n";
			cout<<"3. Salir al menu principal\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion_2;
			
			switch (opcion_2)
				{
				case 1:
				cout<<"Cambiar registro de Mamiferos\n";
				break;
				
				case 2: 
				cout<<"Cambiar registro de Oviparos\n";
				break;
				
				case 3:
				cout<<"Volviendo al menu principal\n";
				break;
				}
			break;
			
			case 4:
			cout<<"Encuentra a tu mascota ideal \n\n";
			break;
			
			case 5:
			cout<<"Gracias\n";
			break;
		break;
		}
		
	}while (opcion != 5);
}
	
