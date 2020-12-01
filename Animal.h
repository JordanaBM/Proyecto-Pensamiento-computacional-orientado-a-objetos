/*
 * Clase Animal
 *Permite la creación de objetos tipo animal
 * que ingresan al albergue, es abstracta, debido a que realmente
 * no se manda a llamar
 */
 
#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
#include <string>
using namespace std;


class Animal{
    private: //Atributos
		string tipo;
		string nombre;
		string raza;
		string genero;
		string color;
		int edad; //Edad en meses
		string fecha_e; //Fecha de entrada al albergue
		
		
	public: //Métodos
		/*
		* Constructor por default
		*
		* @param
		* return Objeto Animal
		*/
		Animal(): tipo(""),nombre(""), raza(""),genero(""),color(""),edad(), 
        fecha_e(){}; 
		/*
		* Constructor 
		*
		* @param string tip: tipo de animal, string nom: nombre, string raz:
        * raza del animal, string gen : genero del animal, string col: color
        * animal, int ed: edad, string fecha_e: fecha de entrada al albergue
		*
		* @return Objeto Animal
		*/
		Animal(string tip,string nom, string raz,string gen,string col,int ed, 
        string f_e): 
		tipo(tip),nombre(nom),raza(raz),genero(gen),color(col),edad(ed),
        fecha_e(f_e){};
		
		
		//Funciones
		virtual void printDatos(); // Imprime los datos del animal, 
                                   //Usa polimorfismo
		
		string get_tipo();//Funciones get
		string get_nombre(); 
		string get_raza();
		string get_genero();
		string get_color();
		int get_edad();
		string get_fecha_e();
		
		
		void set_tipo(string); //Funciones set
		void set_nombre(string); 
		void set_raza(string);
		void set_genero(string);
		void set_color(string);
		void set_edad(int);
		void set_fecha_e(string);	
		
};

/*
 * getter tipo
 *
 * @param
 * @return string: tipo de animal
*/
string Animal::get_tipo(){
	return tipo;
}
/*
 * getter nombre
 *
 * @param
 * @return string: nombre del animal
*/
string Animal::get_nombre(){
	return nombre;
}
/*
 * getter raza
 *
 * @param
 * @return string: raza del animal
*/
 string Animal ::get_raza(){
	return raza;
}
/*
 * getter genero
 *
 * @param
 * @return string: género del animal
*/
string Animal ::get_genero(){
	return genero;
}
/*
 * getter color
 *
 * @param
 * @return string: color del animal
*/
string Animal ::get_color(){
	return color;
}
/*
 * getter edad
 *
 * @param
 * @return int: edad del animal
*/
int Animal:: get_edad(){
	return edad;
}
/*
 * getter fecha entrada
 *
 * @param
 * @return string: fecha de entrada al albergue
*/
string Animal:: get_fecha_e(){
	return fecha_e;
}


//setters

/*
 * setter tipo
 *
 * @param string: tipo animal
 * @return 
*/
void Animal ::set_tipo(	string tip){
	tipo = tip;
}
/*
 * setter nombre
 *
 * @param string: nombre del animal
 * @return 
*/
void Animal::set_nombre(string nom){
	nombre = nom;
}
/*
 * setter raza
 *
 * @param string: raza del animal
 * @return 
*/
void Animal:: set_raza(string raz){
	raza = raz;
}
/*
 * setter género
 *
 * @param string: genero del animal
 * @return 
*/
void Animal:: set_genero(string gen){
	genero = gen;
}
/*
 * setter color
 *
 * @param string: color del animal
 * @return 
*/
void Animal:: set_color(string col){
	color = col;

}
/*
 * setter edad
 *
 * @param int: edad del animal en meses
 * @return 
*/
void Animal:: set_edad(int ed){
	edad = ed;
}
/*
 * setter fecha entrada
 *
 * @param string: fecha entrada del animal
 * @return 
*/
void Animal :: set_fecha_e(string f_e){
	fecha_e = f_e;
}

//Funciones

/*
 * printDatos
 *
 * @param 
 * @return 
*/
void Animal :: printDatos(){
	cout<<"\nTipo: "<<get_tipo()<<endl;
	cout<<"Nombre: "<<get_nombre()<<endl;
	cout<<"Raza:"<<get_raza()<<endl;
	cout<<"Genero: "<<get_genero()<<endl;
	cout<<"Color: "<<get_color()<<endl;
	cout<<"Edad: "<<get_edad()<<endl;
}


/*
 * Clase Mamifero
 * Hereda métodos de la clase Animal
 * Permite la creación de objetos tipo Mamifero
 * que ingresan al albergue 
 */


class Mamifero : public Animal{ //HERENCIA CLASE ANIMAL
	private:
		string pelo;
		string hijos;
	
	public:
		/*
		* Constructor 
		*
		* @param string tip: tipo de animal, string nom: nombre, string raz: 
        * raza del animal, string gen : genero del animal, string col: color
        * animal, int ed: edad, string fecha_e: fecha de entrada al albergue
        * (Ya definidos en en constructor de Animal) string pel: tamaño del 
        * pelo, string hij: Si ha tenido hijos o no
		*
		* @return Objeto Animal
		*/
		Mamifero(string tip,string nom, string raz,string gen,string col,int ed,
        string f_e, string pel,string hij): 
		Animal(tip,nom,raz,gen,col,ed,f_e),pelo(pel),hijos(hij){};
		
		void printDatos(); //Funciones
		
		string get_pelo();//Funciones get
		string get_hijos(); 
				
		void set_pelo(string); //Funciones set
		void set_hijos(string); 
	
};


//getters

/*
 * getter pelo
 *
 * @param
 * @return string: largo del pelo
*/
string Mamifero::get_pelo(){
	return pelo;
}
/*
 * getter hijos
 *
 * @param
 * @return string: Si ha tenido hijos o no
*/
string Mamifero::get_hijos(){
	return hijos;
}

//setters

/*
 * setter pelo
 *
 * @param string: largo del pelo
 * @return 
*/
void Mamifero ::set_pelo(string pel){
	pelo = pel;
}
/*
 * setter hijos
 *
 * @param string: Si ha tenido hijos o no
 * @return 
*/
void Mamifero ::set_hijos(string hij){
	hijos = hij;
}

//Funciones

/*
 * printDatos
 *
 * @param 
 * @return 
*/
void Mamifero :: printDatos(){
	Animal :: printDatos();
	cout<<"Pelo: "<<get_pelo()<<endl;
	cout<<"Puede tener hijo o ha tenido: "<<get_hijos()<<endl;
	if (get_edad()>84) //Si su edad es mayor a 7 años 
		cout<<"Estado: No adoptable\n"; // No se puede adoptar
	else
		cout<<"Estado: Adoptable\n"; // Si es menor a los 7 años
	cout<<"Fecha de entrada: "<<get_fecha_e()<<endl;
}


/*
 * Clase Oviparo
 * Hereda métodos de la clase Animal
 * Permite la creación de objetos tipo Oviparo
 * que ingresan al albergue 
 */
 

class Oviparo : public Animal{ //HERENCIA CLASE ANIMAL
	private:
		string piel;
		string huevos;
	
	public:
		/*
		* Constructor 
		*
		* @param string tip: tipo de animal, string nom: nombre, string raz:
        * raza del animal, string gen : genero del animal, string col: color 
        * animal, int ed: edad, string fecha_e: fecha de entrada al albergue 
        * (Ya definidos en en constructor de Animal) string pie: tipo de piel,
        * string huev: Si puede poner huevos
		*
		* @return Objeto Animal
		*/
		Oviparo(string tip,string nom, string raz,string gen,string col,int ed,
        string f_e, string pie, string huev):
		Animal(tip,nom,raz,gen,col,ed,f_e),piel(pie),huevos(huev){};
		
		void printDatos(); //Funciones
		
		string get_piel();//Funciones get
		string get_huevos(); 
				
		
		void set_piel(string); //Funciones set
		void set_huevos(string); 
	
};

//getters

/*
 * getter piel
 *
 * @param
 * @return string: Tipo de piel
*/
string Oviparo::get_piel(){
	return piel;
}
/*
 * getter huevos
 *
 * @param
 * @return string: Si puede poner huevos
*/
string Oviparo:: get_huevos(){
	return huevos;
}

//setters

/*
 * setter piel
 *
 * @param string: tipo de piel
 * @return 
*/
void Oviparo ::set_piel(string pie){
	piel = pie;
}
/*
 * setter huevos
 *
 * @param string: si puede poner huevos
 * @return 
*/
void Oviparo::set_huevos (string huev){
	huevos = huev;
}

//Funciones
/*
 * printDatos
 *
 * @param 
 * @return 
*/
void Oviparo :: printDatos(){
	Animal :: printDatos();
	cout<<"Pelo: "<<get_piel()<<endl;
	cout<<"Puede poner huevos (Si/No): "<<get_huevos()<<endl;
	if (get_edad()>60) //Si su edad es mayor a 5 años 
		cout<<"Estado: No adoptable\n"; // No se puede adoptar
	else
		cout<<"Estado: Adoptable\n"; // Si es menor a los 5 años
	    cout<<"Fecha de entrada: "<<get_fecha_e()<<endl;
}


#endif // ANIMAL_H_
