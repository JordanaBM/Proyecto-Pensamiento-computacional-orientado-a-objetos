/*
 * Clase Persona:
*Permite la creación de base de datos con
* personas que quieren adoptar o han adoptado
 */
 
#include <iostream>
#include <string>

using namespace std;

class Persona{
	private: //Atributos
		string interes;
		string nombre;
		string telefono;
		Persona *sig;
				
	public: //Métodos
		//Constructores
		Persona(): interes(""),nombre(""),telefono(""){};//Por default
		Persona(string inte,string nom, string tel):interes(inte),nombre(nom),telefono(tel){};
		
		void datos_p(); //Imprime todos los datos de la persona
		
		string get_interes();//Funciones get
		string get_nombre();
		string get_telefono();
		Persona* get_sig(); //Función para obtener la posición siguiente del apuntador
		
		void set_interes(string);//Funciones set
		void set_nombre(string);
		void set_telefono(string);
		
		//Cambio de posición apuntador
		void setSig(Persona *sig);
		
};

//getters
string Persona::get_interes(){
	return interes;
}
string Persona::get_nombre(){
	return nombre;
}
 string Persona::get_telefono(){
	return telefono;
}
Persona* Persona:: get_sig(){
	return sig;
}

//setters
void Persona::set_interes(string inte){
	interes = inte;
}
void Persona::set_nombre(string nom){
	nombre = nom;
}
void Persona:: set_telefono(string tel){
	telefono = tel;
}
	
void Persona :: datos_p(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Interés: "<<interes<<endl;
	cout<<"Teléfono: "<<telefono<<endl;
	
}

void Persona :: setSig(Persona* sig){
	this -> sig = sig; // El this -> sig es mi atributo de clase persona y toma el valor siguiente (parametro) del apuntador
}

class Lista_b{
	
	private:
	Persona *principio; //Apuntador principio
	public:
	void agregar(void); //Método agregar
	void mostrar(void); //Método mostrar
	
	Lista_b(); //Constructor 
};

Lista_b :: Lista_b(){ //No hay nada al principio del constructor
	principio = NULL; 
}

void Lista_b :: agregar(void){
	
	string interes;
	string nombre;
	string telefono;
	
	cout<<"¿En que tipo de animal tiene interés? ";
	cin>>interes;
	cout<<"¿Cual es su nombre completo? ";
	cin>>nombre;
	cout<<"¿Cual es su telefono? ";
	cin>>telefono;
	
	Persona *nuevo = new Persona(interes,nombre,telefono); //Cambia al apuntador a una posición nueva sin datos
	
	if (principio == NULL)
		principio = nuevo;
	else
	{
		nuevo -> setSig( principio );
		principio = nuevo; 
	}
	
	
}

void Lista_b :: mostrar(void){
	for (Persona *aux= principio; aux != NULL; aux = aux -> get_sig()){
		cout<<"Interes: "<< aux -> get_interes()<<endl; //El auxiliar de mi apuntador toma los get de la clase Persona
		cout<<"Nombre: "<< aux -> get_nombre()<<endl;
		cout<<"Telefono: "<< aux -> get_telefono()<<endl;
	}
}