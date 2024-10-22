#include "Triangulo_equilatero.h"
Triangulo_equilatero::Triangulo_equilatero(string nombre, float lado, float apotema, int numPuntas ): poligonoRegular(nombre,lado,apotema){
	this->numDePuntas = numPuntas; 
}
Triangulo_equilatero::~Triangulo_equilatero(){}
float Triangulo_equilatero::perimetro() {
	return getLado() * 3;
}
string Triangulo_equilatero::toString() {
	stringstream s; 
	s << "Nombre : " << getNombre() << endl; 
	s << "Tamano lado : " << getLado() << endl; 
	s << "Apotema : " << getApotema() << endl; 
	s << "Num de puntas del triangulo " << numDePuntas << endl; 
	return s.str();
}