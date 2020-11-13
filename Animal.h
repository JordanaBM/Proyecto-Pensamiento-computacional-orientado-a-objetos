/*
 * Clase Animal
*Permite la creación de carnets de nuevos animales
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
		Animal *sig;
		
	public: //Métodos
		//Constructores
		Animal(): tipo(""),nombre(""), raza(""),genero(""),color(""),edad(), fecha_e(){}; //Por default
		Animal(string tip,string nom, string raz,string gen,string col,int ed, string f_e): tipo(tip),nombre(nom),raza(raz),genero(gen),color(col),edad(ed),fecha_e(f_e){};
		
		
		void print(); // Imprime los datos del  animal
		
		string get_tipo();//Funciones get
		string get_nombre(); 
		string get_raza();
		string get_genero();
		string get_color();
		int get_edad();
		string get_fecha_e();
		Animal* get_sig(); //Función para obtener la posición siguiente del apuntador
		
		void set_tipo(string); //Funciones set
		void set_nombre(string); 
		void set_raza(string);
		void set_genero(string);
		void set_color(string);
		void set_edad(int);
		void set_fecha_e(string);
		
		//Cambio de posición apuntador
		void setSig(Animal *sig);
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
Animal* Animal:: get_sig(){
	return sig;
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
	cout<<"Género: "<<genero<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Edad: "<<edad<<" meses"<<endl;
	cout<<"Fecha de entrada: "<<fecha_e<<endl;
	if (edad>84) //Si su edad es mayor a 7 años 
		cout<<"Estado: No adoptable\n"; // No se puede adoptar
	else
		cout<<"Estado: Adoptable\n"; // Si es menor a los 7 años
}
	
void Animal :: setSig(Animal* sig){
	this -> sig = sig; // El this -> sig es mi atributo de clase persona y toma el valor siguiente (parametro) del apuntador
}

class Lista_c{
	
	private:
	Animal *principio; //Apuntador principio
	public:
	void agregar(void); //Método agregar
	void mostrar(void); //Método mostrar
	
	Lista_c(); //Constructor 
};

Lista_c :: Lista_c(){ //No hay nada al principio del constructor
	principio = NULL; 
}

void Lista_c :: agregar(void){
	
	string tipo;
	string nombre;
	string raza;
	string genero;
	string color;
	int edad; //Edad en meses
	string fecha_e; //Fecha de entrada al albergue
	
	cout<<"¿Qúe tipo de animal es? ";
	cin>>tipo;
	cout<<"¿Cual es su nombre? ";
	cin>>nombre;
	cout<<"¿Cual es su raza? ";
	cin>>raza;
	cout<<"¿Cual es su genero? ";
	cin>>genero;
	cout<<"¿Cual es su edad en meses? ";
	cin>>edad;
	cout<<"¿Cual es su color? ";
	cin>>color;
	cout<<"¿Cual es su fecha de entrada? ";
	cin>>fecha_e;
	
	
	Animal *nuevo = new Animal(tipo,nombre,raza,genero,color,edad,fecha_e); //Cambia al apuntador a una posición nueva sin datos
	
	if (principio == NULL)
		principio = nuevo;
	else
	{
		nuevo -> setSig( principio );
		principio = nuevo; 
	}
	
	
}

void Lista_c :: mostrar(void){
	for (Animal *aux= principio; aux != NULL; aux = aux -> get_sig()){
		cout<<"Tipo: "<< aux -> get_tipo()<<endl; //El auxiliar de mi apuntador toma los get de la clase Animal
		cout<<"Nombre: "<< aux -> get_nombre()<<endl;
		cout<<"Raza: "<< aux -> get_raza()<<endl;
		cout<<"Genero: "<< aux -> get_genero()<<endl;
		cout<<"Edad: "<< aux -> get_edad()<<" meses"<<endl;
		cout<<"Color: "<<aux -> get_color()<<endl;
		cout<<"Fecha de entrada: "<<aux -> get_fecha_e()<<endl;
	}
}