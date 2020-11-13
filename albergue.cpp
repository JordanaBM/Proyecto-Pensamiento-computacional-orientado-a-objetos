/*
 * Proyecto Pensamiento
 * Computacional Orientado a Objetos
 * Jordana Betancourt Menchaca
 * A01707434
 */

/**
 * Programa "Albergue de Animales" permite el registro y muestra
 * de información sobre animales que lleguen a un albergue 
 * Incluye clase animales, personas y donativos
 * Devueleve el carnet de los animales y permite o no darlo en adopción
 * Permite generar donaciones para el cuidado de los animales
 * Resgistra datos de personas con interés de adoptar
 */ 

//Bibliotecas
#include <iostream>   //Para imprimir
#include "Animal.h" //Clase Animal
#include "Persona.h" // Clase persona
#include "Donativo.h" //Clase donativo

using namespace std;

int main()
{
	// Objeto tipo Animal
	
	cout<<"Ingresa 2 animales\n";
	Lista_c Animales;
	
	for ( int i=0; i<2; i++){
		Animales.agregar();
	}
	Animales.mostrar();
	
	
	// Objeto tipo Persona
	
	cout<<"Ingresa 2 donaciones\n";
	Lista_b Person;
	
	for ( int i=0; i<2; i++){
		Person.agregar();
	}
	Person.mostrar();
	
	
	// Objeto tipo Donación
	
	cout<<"Ingresa 2 donaciones\n";
	Lista_a Donar;
	
	for ( int i=0; i<2; i++){
		Donar.agregar();
	}
	Donar.mostrar();
	
	
	
	
}