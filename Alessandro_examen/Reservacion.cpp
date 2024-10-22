#include "Reservacion.h"
Reservacion::Reservacion() {
	this->precio = 0; 
	this->numFila = 0; 
	this->numColumna = 0; 
	this->elCliente = nullptr;
}
Reservacion::Reservacion(int precio, int num, int numColumnas, Cliente* Elcliente){
	this->precio = precio; 
	this->numFila = num; 
	this->numColumna = numColumnas;
	this->elCliente = Elcliente;
}
void Reservacion::setPrecio(int precio) { this->precio = precio; }
void Reservacion::setNumFila(int numFila) { this->numFila = numFila; }
void Reservacion::setNumColumna(int numColumna) { this->numColumna = numColumna; }
void Reservacion::setCliente(Cliente* cliente) { this->elCliente = cliente; }
int Reservacion::getPrice() { return this->precio; }
int Reservacion::getNumFila() { return this->numFila; }
int Reservacion::getNumColumna() { return this->numColumna; }
Cliente* Reservacion::getCliente() { return this->elCliente; }
float Reservacion::calcularMontoDescuento() {
	if (elCliente->getAdultoMayor() == true) {
		return precio * 0.50;
	}
	return precio;
}
string Reservacion::toString() {
	stringstream s; 
	s <<" \t\t\t Reservacion \t\t\t " << endl;
	s << "Precio de la reservacion : " << precio << endl; 
	s << "Num de fila de la reservacion : " << numFila << endl; 
	s << "Num de columna de la reservacion :" << numColumna << endl;
	s << "Descuento para personas adultas mayores : " << calcularMontoDescuento() << endl;
	return s.str(); 
}