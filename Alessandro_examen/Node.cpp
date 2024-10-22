#include "Node.h"
Node::Node(Estudiante* student, Node* next) {
	this->theStudent = student; 
	this->next = next;
}
Node::~Node() {
	delete theStudent;
 }
void Node::setTheStudent(Estudiante* student) { this->theStudent = student; }
void Node::setNext(Node* next) { this->next = next; }
Estudiante* Node::getStudent() { return this->theStudent; }
Node* Node::getNext() { return this->next; }
string Node::toStringNode() {
	return theStudent->toString();
}