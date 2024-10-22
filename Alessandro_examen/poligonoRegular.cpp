#include "poligonoRegular.h"

poligonoRegular::poligonoRegular(string nombre, float lado, float apotema) {
	this->nombre = nombre;
	this->lado = lado;
	this->apotema = apotema;
}
poligonoRegular::~poligonoRegular() {}

string poligonoRegular::getNombre() {
	return nombre;
}
float poligonoRegular::getLado() {
	return lado;
}
float poligonoRegular::getApotema() {
	return lado;
}
void poligonoRegular::setNombre(string nombre) {
	this->nombre = nombre;
}
void poligonoRegular::setLado(float lado) {
	this->lado = lado;
}
void poligonoRegular::setApotema(float apotema) {
	this->apotema = apotema;
}
float poligonoRegular::area() {
	return (perimetro() * apotema) / 2;
}
