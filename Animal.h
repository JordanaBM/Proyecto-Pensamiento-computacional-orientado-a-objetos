/*
 * Clase Animal
 *Permite la creación de objetos tipo animal
 * que ingresan al albergue
 */
 
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
		//Constructores
		Animal(): tipo(""),nombre(""), raza(""),genero(""),color(""),edad(), fecha_e(){}; //Por default
		Animal(string tip,string nom, string raz,string gen,string col,int ed, string f_e): 
		tipo(tip),nombre(nom),raza(raz),genero(gen),color(col),edad(ed),fecha_e(f_e){};
		
		
		virtual void print(); // Imprime los datos del animal, usa polimorfismo
		
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

//getters
string Animal::get_tipo(){
	return tipo;
}
string Animal::get_nombre(){
	return nombre;
}
 string Animal ::get_raza(){
	return raza;
}
string Animal ::get_genero(){
	return genero;
}
string Animal ::get_color(){
	return color;
}
int Animal:: get_edad(){
	return edad;
}
string Animal:: get_fecha_e(){
	return fecha_e;
}


//setters
void Animal ::set_tipo(	string tip){
	tipo = tip;
}
void Animal::set_nombre(string nom){
	nombre = nom;
}
void Animal:: set_raza(string raz){
	raza = raz;
}
void Animal:: set_genero(string gen){
	genero = gen;
}
void Animal:: set_color(string col){
	color = col;
}
void Animal:: set_edad(int ed){
	edad = ed;
}
void Animal :: set_fecha_e(string f_e){
	fecha_e = f_e;
}

//Funciones
void Animal :: print(){
	cout<<"Tipo: "<<tipo<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
	cout<<"Genero: "<<genero<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Edad: "<<edad<<" meses"<<endl;
	cout<<"Fecha de entrada: "<<fecha_e<<endl;
	if (edad>84) //Si su edad es mayor a 7 años 
		cout<<"Estado: No adoptable\n"; // No se puede adoptar
	else
		cout<<"Estado: Adoptable\n"; // Si es menor a los 7 años
		
}

class Mamifero : public Animal{ //HERENCIA CLASE ANIMAL
	private:
	string pelo;
	string hijos;
	
	public:
	Mamifero(string tip,string nom, string raz,string gen,string col,int ed, string f_e, string pel,string hij): 
		Animal(tip,nom,raz,gen,col,ed,f_e),pelo(pel),hijos(hij){};
		
		void print();
		
		string get_pelo();//Funciones get
		string get_hijos(); 
				
		
		void set_pelo(string); //Funciones set
		void set_hijos(string); 
	
};


//getters
string Mamifero::get_pelo(){
	return pelo;
}
string Mamifero:: get_hijos(){
	return hijos;
}

//setters
void Mamifero ::set_pelo(string pel){
	pelo = pel;
}

void Mamifero ::set_hijos(string hij){
	hijos = hij;
}

//Funciones
void Mamifero :: print(){
	Animal :: print();
	cout<<"Su pelaje es: "<<pelo<<endl;
	cout<<"Puede tener hijos: "<<hijos<<endl;
}

class Oviparo : public Animal{ //HERENCIA CLASE ANIMAL
	private:
	string piel;
	string huevos;
	
	public:
	Oviparo(string tip,string nom, string raz,string gen,string col,int ed, string f_e, string pie, string huev):
		Animal(tip,nom,raz,gen,col,ed,f_e),piel(pie),huevos(huev){};
		
		void print();
		
		string get_piel();//Funciones get
		string get_huevos(); 
				
		
		void set_piel(string); //Funciones set
		void set_huevos(string); 
	
};

//getters
string Oviparo::get_piel(){
	return piel;
}
string Oviparo:: get_huevos(){
	return huevos;
}

//setters
void Oviparo ::set_piel(string pie){
	piel = pie;
}

void Oviparo::set_huevos (string huev){
	huevos = huev;
}

//Funciones
void Oviparo :: print(){
	Animal :: print();
	cout<<"Tipo de piel: "<<piel<<endl;
	cout<<"Puede poner huevos: "<<huevos<<endl;
}
