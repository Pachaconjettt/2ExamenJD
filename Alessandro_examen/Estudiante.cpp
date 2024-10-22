#include "Estudiante.h"
Estudiante::Estudiante() {
	this->nombre = "indef";
	this->id = "indef";
	this->annioIngreso = "indef";
	this->activo = false; 
	this->promedio = false;
}
Estudiante::Estudiante(string nombre, string id, string annio, bool activo, bool promedio) {
	this->setNombre(nombre); 
	this->setId(id); 
	this->setAnnioIngreso(annio);
	this->setActivo(activo);
	this->setPromedio(promedio);
}
Estudiante::~Estudiante(){}
void Estudiante::setNombre(string nombre) { this->nombre = nombre; }
void Estudiante::setId(string ide) { this->id = ide; }
void Estudiante::setAnnioIngreso(string annio) { this->annioIngreso = annio; }
void Estudiante::setActivo(bool activo) { this->activo = activo; }
void Estudiante::setPromedio(bool promedio) { this->promedio = promedio; }
string Estudiante::getNombre() { return this->nombre; }
string Estudiante::getId() { return this->id; }
string Estudiante::getAnnio() { return this->annioIngreso; }
bool Estudiante::getActivo() { return this->activo; }
bool Estudiante::getPromedio() { return this->promedio;  }
string Estudiante::toString() {
	stringstream s;
	s << "Nombre " << nombre << endl; 
	s << "ID : " << id << endl; 
	s << "Annio ingreso " << annioIngreso << endl; 
	s << "Estudiante activo? " << (activo ? "si " : " no ") << endl; 
	s << "Promedio arriba de 7? " << (promedio ? "si" : " no ") << endl; 
	return s.str();
}