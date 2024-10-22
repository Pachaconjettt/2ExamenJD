#include "lista.h"
lista::lista() {
	this->first = nullptr;
}
lista::~lista() {
	Node* aux; 
	while (first != nullptr) {
		aux = first; 
		first = first->getNext();
		delete aux;
	}
}
bool lista::buscarEstudiante(string id) {
	Node* aux = first; 
	while (aux != nullptr) {
		if (aux->getStudent()->getId() == id) {
			return true;
		}
	aux = aux->getNext();
}
	return false;
}
void lista::insertarAlFinal(Estudiante* student) {
	if (buscarEstudiante(student->getId())) {
		return; // no lo inserta por que ya existeeee
	}

	if (first == nullptr) {
		first = new Node(student, first);
	}
	else {
		Node* aux = first;
		while (aux->getNext() != nullptr) {
			aux = aux->getNext();
		}
		aux->setNext(new Node(student, nullptr));
	}
}
void lista::copiaLista(lista& otraLista) {
	Node* aux = otraLista.first;
	while (aux != nullptr) {
		insertarAlFinal(aux->getStudent()); 
		aux = aux->getNext(); 
	}
}
void lista::eliminaNoActivos() {
	Node* aux = first;
	Node* prev = nullptr;

	while (aux != nullptr) {
		if (!aux->getStudent()->getActivo()) {
			Node* toDelete = aux;
			if (prev == nullptr) {
				first = aux->getNext();
			}
			else {
				prev->setNext(aux->getNext());
			}
			aux = aux->getNext();
			delete toDelete;
		}
		else {
			prev = aux;
			aux = aux->getNext();
		}
	}
}
string lista::toStringList() {
	stringstream s;
	Node* aux = first;
	int so = 1;
		while (aux != nullptr) {
			s << "\t\t\t - - - - - - - " << so << "- - - - - - - - - - \n";
			s << "\t" << "\n" << aux->toStringNode() << endl;
			so++;
			aux = aux->getNext();
	}
	return s.str();
}