#include "Cliente.h"
Cliente::Cliente() {
	this->nombre = "Disponible";
	this->adultoMayor = 0; 
	this->estudiante = 0;
}
Cliente::Cliente(string nombre, bool adulto, bool estudiante) {
	this->nombre = nombre; 
	this->adultoMayor = adulto; 
	this->estudiante = estudiante;
}
Cliente::~Cliente(){}
void Cliente::setNombre(string nombre) { this->nombre = nombre; }
void Cliente::setAdultoMayor(bool adultoMayor) { this->adultoMayor = adultoMayor; }
void Cliente::setEstudiante(bool estudiante) { this->estudiante = estudiante; }
string Cliente::getNombre() { return this->nombre; }
bool Cliente::getAdultoMayor() { return this->adultoMayor; }
bool Cliente::getEstudiante() { return this->estudiante; }
string Cliente::toString(){
	stringstream s; 
	s << "Nombre : " << nombre << endl; 
	s << "Adulto mayor ? " << (adultoMayor ? "si" : "no") << endl; 
	s << "Estudiante ? " << (estudiante ? "si" : "no") << endl; 
	return s.str();
}