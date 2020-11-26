*
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
#include "Animal_f.h" //Clase Animal
#include "Grupos.h" //Clase Grupos que guarda toda la información de los animales
#include <string>


using namespace std;

int main()
{
	int opcion,opcion_2,ed;
	Grupos grupo;
	string tip, nom, raz, gen, col, f_e, pel, hij,pie, huev,nombre;
	grupo.ejemplosM();
	grupo.ejemplosO();
	
	//Ciclo do-while para que siga corriendo mientas no se elija la opción 5 "Salir"
	do //Menú de opciones
	{
		cout<<"\nALBERGUE DE ANIMALES\n";
		cout<<"1. Ingresar nuevos datos\n";
		cout<<"2. Ver datos\n";
		cout<<"3. Cambiar datos\n";
		cout<<"4. Encuentra tu mascota\n";
		cout<<"5. Salir\n";
		cout<<"\n Digite la opcion que desee: ";
		//Leer indice que selecciona la opcion del menu
		cin>>opcion;
		
		//Switch donde dependiendo la eleccion efectua un diferente procedimiento
		switch (opcion)
		{
			//Caso 1 despliega las opciones de registro
			case 1: //Para el registro de nuevos datos
			cout<<"\nREGISTROS\n\n";
			cout<<"1. Nuevo registro mamifero\n";
			cout<<"2. Nuevo registro oviparo\n";
			cout<<"3. Salir al menu principal\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion_2;
			//Leer indice que selecciona la opcion del submenu
			
				switch (opcion_2)
				{
				//Caso 1.1 Permite el registro de una animal de tipo Mamifero
				case 1:
				cout<<"Nuevo registro de mamifero\n\n";
				cout<<"Escriba el tipo de animal: ";
				cin>>tip;
				cout<<"Escriba el nombre del animal: ";
				cin>>nom;
				cout<<"Escriba la raza del animal: ";
				cin>>raz;
				cout<<"Escriba el genero del animal: ";
				cin>>gen;
				cout<<"Escriba el color del animal: ";
				cin>>col;
				cout<<"Escriba la edad del animal en meses: ";
				cin>>ed;
				cout<<"Escriba el largo de su pelo (Largo/Mediano/Corto): ";
				cin>>pel;
				cout<<"Escriba si ha tenido hijos o puede tenerlos (Si/No): ";
				cin>>hij;
				cout<<"Escriba la fecha de entrada al albergue: ";
				cin>>f_e;
				grupo.agregarM(tip,nom,raz,gen,col,ed,f_e,pel,hij);
				break;
				
				//Caso 1.2 Permite el registro de una animal de tipo Oviparo
				case 2: 
				cout<<"Nuevo registro de oviparo\n";
				cout<<"Escriba el tipo de animal: ";
				cin>>tip;
				cout<<"Escriba el nombre del animal: ";
				cin>>nom;
				cout<<"Escriba la raza del animal: ";
				cin>>raz;
				cout<<"Escriba el genero del animal: ";
				cin>>gen;
				cout<<"Escriba el color del animal: ";
				cin>>col;
				cout<<"Escriba la edad del animal en meses: ";
				cin>>ed;
				cout<<"Escriba su tipo de piel (Ej. Plumas, escamas): ";
				cin>>pie;
				cout<<"Escriba si puede poner huevos (Si/No): ";
				cin>>huev;
				cout<<"Escriba la fecha de entrada al albergue: ";
				cin>>f_e;
				grupo.agregarM(tip,nom,raz,gen,col,ed,f_e,pie,huev);
				break;
				
				//Caso 1.3 Regresa al menú principal
				case 3:
				cout<<"Volviendo al menu principal\n";
				break;
				}
				
			break;
			
			//Caso 2 despliega las opciones de ver datos	
			case 2: //Para visualizar los datos
			cout<<"\nDATOS\n\n";
			cout<<"1. Datos Mamiferos\n";
			cout<<"2. Datos Oviparos\n";
			cout<<"3. Salir al menu principal\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion_2;
			
				switch (opcion_2)
				{
				//Caso 2.1 Permite ver el registro de animales de tipo Mamifero
				case 1:
				cout<<"Mamiferos registrados\n"<<endl;
				grupo.mostrarM();
				cout<<endl;
				break;
				
				//Caso 2.2 Permite ver el registro de animales de tipo Oviparo
				case 2: 
				cout<<"Oviparos registrados\n\n";
				grupo.mostrarO();				
				cout<<endl;
				break;
				
				//Caso 2.3 Regresa al menú principal
				case 3:
				cout<<"Volviendo al menu principal\n";
				break;
				}
				
			break;
			
			//Caso 3 despliega las opciones de modificación de datos
			case 3: //Para modificar los datos
			cout<<"\nMODIFICACION DE DATOS\n\n";
			cout<<"1. Cambiar Registro Mamiferos\n";
			cout<<"2. Cambiar Registro Oviparos\n";
			cout<<"3. Salir al menu principal\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion_2;
			
			switch (opcion_2)
				{
				//Caso 3.1 Permite cambiar el registro de animales de tipo Mamifero
				case 1:
				cout<<"\nCambiar registro de Mamiferos\n\n";
				cout<<"Ingrese el nombre del animal del cual quiera cambiar los datos: ";
				cin>>nombre;
				grupo.actualizarM(nombre);
				break;
				
				//Caso 3.2 Permite cambiar el registro de animales de tipo Oviparo
				case 2: 
				cout<<"\nCambiar registro de Oviparos\n\n";
				cout<<"Ingrese el nombre del animal del cual quiera cambiar los datos: ";
				cin>>nombre;
				grupo.actualizarO(nombre);
				break;
				
				//Caso 3.3 Regresa al menú principal
				case 3:
				cout<<"Volviendo al menu principal\n";
				break;
				}
			break;
			
			//Caso 4 despliega las opciones de busca de mascotas
			case 4:
			cout<<"\nEncuentra a tu mascota ideal \n";
			cout<<"1.Encuentra a un mamifero\n";
			cout<<"2.Encuentra a un oviparo\n";
			cout<<"3.Salir\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion_2;
			switch (opcion_2)
				{
				//Caso 4.1 Permite buscar animales de tipo Mamifero
				case 1:
				cout<<"\nEncuentra a tu mascota mamifera\n\n";
				grupo.encontrarM();
				break;
				
				//Caso 4.2 Permite buscar animales de tipo Oviparo
				case 2:
				cout<<"\nEncuentra a tu mascota ovipara\n\n";
				grupo.encontrarO();
				break;
				
				//Caso 4.3 Regresa al menú principal
				case 3:
				break;
				}	
			break;
			
			//Caso 5 Concluye el programa
			case 5:
			cout<<"Gracias\n";
			break;
		break;
		}
		
	}while (opcion != 5);
}
		
