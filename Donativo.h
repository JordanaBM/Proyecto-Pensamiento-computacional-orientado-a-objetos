/*
 * Clase Donativo:
*Permite administrar los donativos del albergue
 */
 
#include <iostream>
#include <string>
using namespace std;


class Donativo{
	private: //Atributos
		string tipo;
		float cantidad;
		string utilidad;
		Donativo *sig;
		
	public: //Métodos
		//Constructores
		Donativo(): tipo(""),cantidad(),utilidad(""){};//Por default
		Donativo(string tip,float cant,string uti) : tipo(tip),cantidad(cant),utilidad(uti){};

		void print_d(); //Imprime todos los datos de la nueva donación
		
		string get_tipo	();//Funciones get
		float get_cantidad();
		string get_utilidad();
		Donativo* get_sig();  //Función para apuntar a el objeto siguiente
		
		void set_tipo(string);//Funciones set
		void set_cantidad(float);
		void set_utilidad(string);
		
		//Cambio de posición apuntador
		void setSig(Donativo *sig);
		
};

//getters
string Donativo::get_tipo(){
	return tipo;
}
float Donativo::get_cantidad(){
	return cantidad;
}
 string Donativo ::get_utilidad(){
	return utilidad;
}

Donativo* Donativo :: get_sig(){
	return sig;
}

//setters
void Donativo::set_tipo(string tip){
	tipo = tip;
}
void Donativo::set_cantidad(float cant){
	cantidad = cant;
}
void Donativo:: set_utilidad(string uti){
	utilidad = uti;
}
	
void Donativo:: print_d(){
	cout<<"Donativo: "<<tipo<<endl;
	cout<<"Cantidad: "<<cantidad<<endl;
	cout<<"Utilidad: "<<utilidad<<endl;
}

void Donativo :: setSig(Donativo * sig){
	this -> sig = sig;
}

class Lista_a{
	
	private:
	Donativo *principio;
	public:
	void agregar(void);
	void mostrar(void);
	
	Lista_a(); //Constructor 
};

Lista_a :: Lista_a(){
	principio = NULL; 
}

void Lista_a :: agregar(void){
	
	string tipo;
	float cantidad;
	string utilidad;
	
	cout<<"¿Es comida, vestimenta, artículos de limpieza o juguetes? ";
	cin>>tipo;
	cout<<"¿Qué cantidad donará? ";
	cin>>cantidad;
	cout<<"¿A qué animales va dirigida su donación? ";
	cin>>utilidad;
	
	Donativo *nuevo = new Donativo(tipo,cantidad,utilidad);
	
	if (principio == NULL)
		principio = nuevo;
	else
	{
		nuevo -> setSig( principio );
		principio = nuevo;
	}
	
	
}

void Lista_a :: mostrar(void){
	for (Donativo *aux= principio; aux != NULL; aux = aux -> get_sig()){
		cout<<"Tipo: "<< aux -> get_tipo()<<endl;
		cout<<"Cantidad: "<< aux -> get_cantidad()<<endl;
		cout<<"Utilidad: "<< aux -> get_utilidad()<<endl;
	}
}

