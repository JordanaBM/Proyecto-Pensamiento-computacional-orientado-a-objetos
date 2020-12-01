/*
 * Clase Grupos
 *Permite el almacenamiento,muestra y actualiación de los datos 
 * de los animales en el albergue
 */
 
#ifndef GRUPOS_H_
#define GRUPOS_H_

#include "animal_f.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Grupos{
	private: //Atributos
	
	vector <Mamifero> mamiferos; //Vector que almacena animales de tipo Mamífero
	vector <Oviparo> oviparos; //Vector que almacena animales de tipo Ovíparo
	
	public: //Métodos
	// Constructor
	Grupos();
	//Funciones
	void ejemplosM();
	void ejemplosO();
	void agregarM(string tip,string nom, string raz,string gen,string col,int ed, string f_e, string pel,string hij);
	void agregarO(string tip,string nom, string raz,string gen,string col,int ed, string f_e, string pie,string huev);
	void mostrarM();
	void mostrarO();
	void actualizarM(string nombre);
	void actualizarO(string nombre);
	void encontrarM();
	void encontrarO();
	 
};
//Constructor

/*
* Constructor por default
*
* @param
* return Objeto Animal
*/
Grupos :: Grupos(){
	mamiferos ={};
	oviparos = {};
}

//Funciones

/*
 * ejemplosM()
 *
 * Utliza el vector de tipo Mamifero
 * Llena el vector con 4 ejemplos. 
 *
 * @param
 * @return
*/
void Grupos ::ejemplosM(){
	Mamifero perro("Perro","Scooby","Gran Danes","Macho","Cafe",23,"18/11/2020","Corto","No");
	mamiferos.push_back (perro);
	Mamifero gato("Gato","Garfield","Americano","Macho","Naranja",12,"24/11/2020","Corto","No");
	mamiferos.push_back (gato);
	Mamifero perro2("Perro","Firulais","Sabueso","Macho","Cafe",10,"24/11/2020","Corto","No");
	mamiferos.push_back (perro2);
	Mamifero conejo("Conejo","Bugs Bunny","Jersey Woooly","Macho","Gris",30,"26/11/2020","Corto","No");
	mamiferos.push_back (conejo);
}
/*
 * ejemplosO()
 *
 * Utliza el vector de tipo Oviparo
 * Llena el vector con 4 ejemplos. 
 *
 * @param
 * @return
*/
void Grupos ::ejemplosO(){
	Oviparo ave("Pajaro","Piolin","Canario","Hembra","Amarillo",3,"19/11/2020","Plumas","Si");
	oviparos.push_back (ave);
	Oviparo blu("Pajaro","Blue","Guacamayo Azul","Macho","Azul",7,"18/11/2020","Plumas","No");
	oviparos.push_back (blu);
	Oviparo loco("Pajaro","Loco","Carpintero","Macho","Varios",12,"20/11/2020","Plumas","No");
	oviparos.push_back (loco);
	Oviparo tortuga("Tortuga","Donatello","Tortuga Verde","Macho","Verde",25,"18/11/2020","Cuero","No");
	oviparos.push_back (tortuga);
}
/*
 * agregarM()
 * Utiliza vector de mamiferos 
 * Recibe el tipo,nombre,raza,genero,color, edad, fecha de entrada, pelo e hijos
 * El metodo crea el objeto Mamifero y lo agrega al vector
 * @param
 * @return
 */
void Grupos::agregarM(string tip,string nom, string raz,string gen,string col,int ed, string f_e, string pel,string hij){

  	Mamifero auxM(tip,nom,raz,gen,col,ed,f_e,pel,hij);
  	mamiferos.push_back (auxM);
}
/*
 * agregarO()
 * Utiliza vector de oviparos 
 * Recibe el tipo,nombre,raza,genero,color, edad, fecha de entrada, piel y huevos
 * El metodo crea el objeto Oviparo y lo agrega al vector
 * @param
 * @return
 */
void Grupos::agregarO(string tip,string nom, string raz,string gen,string col,int ed, string f_e, string pie,string huev){

  	Oviparo auxO(tip,nom,raz,gen,col,ed,f_e,pie,huev);
  	oviparos.push_back (auxO);

}
/*}
 * mostrarM()
 * Utiliza el vector mamiferos 
 * Recorre todo el vector, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
 *
 * @param
 * @return
*/
void Grupos :: mostrarM(){
	for ( int i = 0; i< mamiferos.size(); i++)
	{
		mamiferos[i].printDatos();
	}
}
/*
 * MostrarO()
 * Utiliza el vector oviparos
 * Recorre todo el vector, imprimiendo cada uno de los objetos que
 * pertenecen al mismo.
 *
 * @param
 * @return
*/
void Grupos :: mostrarO(){
	for ( int i = 0; i< oviparos.size(); i++)
	{
		oviparos[i].printDatos();
	}
}
/*
 * actualizarM()
 * Utiliza el vector mamiferos
 * Recibe el nombre del animal al que se le desea cambiar datos
 * Recorre  el vector, hasta encontrar ese nombre
 * Permite cambiar todos los atributos de ese objeto Mamifero
 *
 * @param string: nombre
 * @return
*/
void Grupos :: actualizarM(string nombre){
	for ( int i = 0; i< mamiferos.size(); i++)
	{
		if( nombre == mamiferos[i].get_nombre())
		{
			int opcion, edad;
			string tip;
			cout<<"\nCambio de datos de "<<nombre<<endl;
			cout<<"1.Cambiar tipo de animal \n";
			cout<<"2.Cambiar nombre\n";
			cout<<"3.Cambiar raza \n";
			cout<<"4.Cambiar genero \n";
			cout<<"5.Cambiar color \n";
			cout<<"6.Cambiar edad \n";
			cout<<"7.Cambiar fecha de entrada \n";
			cout<<"8.Cambiar largo del pelo \n";
			cout<<"9.Cambiar capacidad de tener hijos \n";
			cout<<"10.Salir\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion;
			switch (opcion)
			{
			case 1: //Para cambiar el tipo de animal
			cout<<"\nRegistre el nuevo tipo de animal: ";
			cin>>tip;
			mamiferos[i].set_tipo(tip);
			break;
			
			case 2: //Para cambiar el nombre del animal
			cout<<"\nRegistre el nuevo nombre del animal: ";
			cin>>tip;
			mamiferos[i].set_nombre(tip);
			break;
			
			case 3: //Para cambiar la raza del animal
			cout<<"\nRegistre la nueva raza del animal: ";
			cin>>tip;
			mamiferos[i].set_raza(tip);
			break;
			
			case 4: //Para cambiar el genero del animal
			cout<<"\nRegistre el nuevo genero del animal: ";
			cin>>tip;
			mamiferos[i].set_genero(tip);
			break;
			
			case 5: //Para cambiar el color del animal
			cout<<"\nRegistre el nuevo color del animal: ";
			cin>>tip;
			mamiferos[i].set_color(tip);
			break;
			
			case 6: //Para cambiar la edad del animal
			cout<<"\nRegistre la nueva edad del animal: ";
			cin>>edad;
			mamiferos[i].set_edad(edad);
			break;
			
			case 7: //Para cambiar la fecha de entrada del animal
			cout<<"\nRegistre la nueva fecha de entrada del animal: ";
			cin>>tip;
			mamiferos[i].set_fecha_e(tip);
			break;
			
			case 8: //Para cambiar el pelaje del animal
			cout<<"\nRegistre el nuevo tamaño de pelo del animal: ";
			cin>>tip;
			mamiferos[i].set_pelo(tip);
			break;
			
			case 9: //Para cambiar la posibilidad de tenr hijos del animal
			cout<<"\nRegistre nuevamente si puede tener hijos: ";
			cin>>tip;
			mamiferos[i].set_hijos(tip);
			break;
			
			case 10: //Para salir de la opción
			break;
			}
		}
		else
		{
		 cout<<"No se ha encontrado ese nombre \n";
		}
		
	}
	
	
}

/*
 * actualizarO()
 * Utiliza el vector oviparos
 * Recibe el nombre del animal al que se le desea cambiar datos
 * Recorre  el vector, hasta encontrar ese nombre
 * Permite cambiar todos los atributos de ese objeto Oviparo
 *
 * @param string: nombre
 * @return
*/
void Grupos :: actualizarO(string nombre){
	for ( int i = 0; i< oviparos.size(); i++)
	{
		if( nombre == oviparos[i].get_nombre())
		{
			int opcion, edad;
			string tip;
			cout<<"\nCambio de datos de "<<nombre<<endl;
			cout<<"1.Cambiar tipo de animal \n";
			cout<<"2.Cambiar nombre\n";
			cout<<"3.Cambiar raza \n";
			cout<<"4.Cambiar genero \n";
			cout<<"5.Cambiar color \n";
			cout<<"6.Cambiar edad \n";
			cout<<"7.Cambiar fecha de entrada \n";
			cout<<"8.Cambiar tipo de piel \n";
			cout<<"9.Cambiar capacidad de poner huevos \n";
			cout<<"10.Salir\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion;
			switch (opcion)
			{
			case 1: //Para cambiar el tipo de animal
			cout<<"\nRegistre el nuevo tipo de animal: ";
			cin>>tip;
			oviparos[i].set_tipo(tip);
			break;
			
			case 2: //Para cambiar el nombre del animal
			cout<<"\nRegistre el nuevo nombre del animal: ";
			cin>>tip;
			oviparos[i].set_nombre(tip);
			break;
			
			case 3: //Para cambiar la raza del animal
			cout<<"\nRegistre la nueva raza del animal: ";
			cin>>tip;
			oviparos[i].set_raza(tip);
			break;
			
			case 4: //Para cambiar el genero del animal
			cout<<"\nRegistre el nuevo genero del animal: ";
			cin>>tip;
			oviparos[i].set_genero(tip);
			break;
			
			case 5: //Para cambiar el color del animal
			cout<<"\nRegistre el nuevo color del animal: ";
			cin>>tip;
			oviparos[i].set_color(tip);
			break;
			
			case 6: //Para cambiar la edad del animal
			cout<<"\nRegistre la nueva edad del animal: ";
			cin>>edad;
			oviparos[i].set_edad(edad);
			break;
			
			case 7: //Para cambiar la fecha de entrada del animal
			cout<<"\nRegistre la nueva fecha de entrada del animal: ";
			cin>>tip;
			oviparos[i].set_fecha_e(tip);
			break;
			
			case 8: //Para cambiar la piel del animal
			cout<<"\nRegistre el nuevo tipo de piel: ";
			cin>>tip;
			oviparos[i].set_piel(tip);
			break;
			
			case 9: //Para cambiar la posibilidad de poner huevos del animal
			cout<<"\nRegistre nuevamente si puede poner huevos: ";
			cin>>tip;
			oviparos[i].set_huevos(tip);
			break;
			
			case 10: //Para salir de la opción
			break;
			}
		}
		else
		{
		 cout<<"No se ha encontrado ese nombre \n";
		}
		
	}
	
	
}
void Grupos:: encontrarM(){
	int opcion;
	string tip;
	cout<<"1.Encuentra por tipo \n";
	cout<<"2.Encuentra por genero \n";
	cout<<"3.Encuentra por color \n";
	cout<<"4.Salir\n";
	cout<<"\n Digite la opcion que desee: ";
	cin>>opcion;
	switch (opcion)
	{
		case 1: //Para buscar por tipo de animal
		cout<<"\nEscriba el tipo de animal que desee (Ej: Perro): ";
		cin>>tip;
		for ( int i = 0; i< mamiferos.size(); i++)
		{
			if( tip == mamiferos[i].get_tipo())
			{
				mamiferos[i].printDatos();
			}
			else
				cout<<"No se ha encontrado ese tipo en "<<mamiferos[i].get_nombre()<<"\n";
			
		}
		break;
		
		case 2: //Para buscar por genero de animal
		cout<<"\nEscriba el genero de animal que desee (Macho/Hembra): ";
		cin>>tip;
		for ( int i = 0; i< mamiferos.size(); i++)
		{
			if( tip == mamiferos[i].get_genero())
			{
				mamiferos[i].printDatos();
			}
			else
				cout<<"No se ha encontrado ese genero en "<<mamiferos[i].get_nombre()<<"\n";
			
		}
		break;
		
		case 3: //Para buscar por color de animal
		cout<<"\nEscriba el color de animal que desee (Ej: Azul) ";
		cin>>tip;
		for ( int i = 0; i< mamiferos.size(); i++)
		{
			if( tip == mamiferos[i].get_color())
			{
				mamiferos[i].printDatos();
			}
			else
				cout<<"No se ha encontrado ese color en "<<mamiferos[i].get_nombre()<<"\n";
		}
		break;
	}
	
	
}

void Grupos:: encontrarO(){
	int opcion;
	string tip;
	cout<<"1.Encuentra por tipo \n";
	cout<<"2.Encuentra por genero \n";
	cout<<"3.Encuentra por color \n";
	cout<<"4.Salir\n";
	cout<<"\n Digite la opcion que desee: ";
	cin>>opcion;
	switch (opcion)
	{
		case 1: //Para buscar por tipo de animal
		cout<<"\nEscriba el tipo de animal que desee (Ej: Pajaro): ";
		cin>>tip;
		for ( int i = 0; i< oviparos.size(); i++)
		{
			if( tip == oviparos[i].get_tipo())
			{
				oviparos[i].printDatos();
			}
			else
				cout<<"No se ha encontrado ese tipo en "<<oviparos[i].get_nombre()<<"\n";
			
		}
		break;
		
		case 2: //Para buscar por genero de animal
		cout<<"\nEscriba el genero de animal que desee (Macho/Hembra): ";
		cin>>tip;
		for ( int i = 0; i< oviparos.size(); i++)
		{
			if( tip == oviparos[i].get_genero())
			{
				oviparos[i].printDatos();
			}
			else
				cout<<"No se ha encontrado ese genero en "<<oviparos[i].get_nombre()<<"\n";
			
		}
		break;
		
		case 3: //Para buscar por color de animal
		cout<<"\nEscriba el color de animal que desee (Ej: Azul) ";
		cin>>tip;
		for ( int i = 0; i< oviparos.size(); i++)
		{
			if( tip == oviparos[i].get_color())
			{
				oviparos[i].printDatos();
			}
			else
				cout<<"No se ha encontrado ese color en "<<oviparos[i].get_nombre()<<"\n";	
		}
		break;
	}
	
	
}
#endif // GRUPOS_H_
