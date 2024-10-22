#include "Coleccion_Matriz.h"
#include "Cliente.h"
#include "Reservacion.h"
#include "lista.h"
#include "poligonoRegular.h"
#include "Triangulo_equilatero.h"
int main() {
    //// Crear una instancia de Coleccion_Matriz
    //Coleccion_Matriz * coleccion = new Coleccion_Matriz();

    //// Crear algunos clientes
    //Cliente* cliente1 = new Cliente("Juan", false, true);
    //Cliente* cliente2 = new Cliente("Maria", false, false);
    //Cliente* cliente3 = new Cliente("Alessandro", false, true);
    //Cliente* cliente4 = new Cliente("Kenneth", true, false); 
    //// Realizar una reserva múltiple para el cliente1
    //coleccion->reservaIndividual(2, 2, cliente4);
    //coleccion->reservaMultiple(cliente1, 2);
    //coleccion->reservaIndividual(3, 0, cliente1);
    //coleccion->reservaIndividual(2, 0, cliente3); 
    //// Realizar una reserva múltiple para el cliente2
    //coleccion->reservaMultiple(cliente2, 4);
    //cout << "Coleccion antes de el corrimiento en la fila :" << endl;
    //cout << coleccion->toString() << endl;
    //coleccion->corrimientoFila(1); 
    //cout << "Luego del recorrimiento de la la matriz " << endl; 
    //cout << coleccion->toString() << endl;
    //cout << "Total de ventas de entradas : " << endl;
    //cout << coleccion->ingresoTaquilla() << endl;
    

        // Crear algunos estudiantes
      // Crear algunos estudiantes
 /*   Estudiante* estudiante1 = new Estudiante("Juan", "123", "2020", true, true);
    Estudiante* estudiante2 = new Estudiante("Maria", "456", "2021", true, true);
    Estudiante* estudiante3 = new Estudiante("Ana", "789", "2022", false, true);
    Estudiante* estudiante4 = new Estudiante("Luis", "101", "2023", true, false);

    lista estudiantesLista;
    estudiantesLista.insertarAlFinal(estudiante1);
    estudiantesLista.insertarAlFinal(estudiante2);
    estudiantesLista.insertarAlFinal(estudiante3);
    estudiantesLista.insertarAlFinal(estudiante4);

    std::cout << estudiantesLista.toStringList() << std::endl;
    lista otraLista;
    otraLista.copiaLista(estudiantesLista);

    estudiantesLista.eliminaNoActivos();

    std::cout << "Estudiante con ID 123 en otra lista: " << (otraLista.buscarEstudiante("123") ? "Encontrado" : "No encontrado") << std::endl;
    std::cout << "Estudiante con ID 456 en otra lista: " << (otraLista.buscarEstudiante("456") ? "Encontrado" : "No encontrado") << std::endl;
    std::cout << "Estudiante con ID 789 en otra lista: " << (otraLista.buscarEstudiante("789") ? "Encontrado" : "No encontrado") << std::endl;
    std::cout << "Estudiante con ID 101 en otra lista: " << (otraLista.buscarEstudiante("101") ? "Encontrado" : "No encontrado") << std::endl;

    std::cout << "Estudiante con ID 789 en lista original: " << (estudiantesLista.buscarEstudiante("789") ? "Encontrado" : "No encontrado") << std::endl;


    delete estudiante1;
    delete estudiante2;
    delete estudiante3;
    delete estudiante4;*/

    // Ni idea de que  es lo que le paso con ese error pero igual complila.

    Triangulo_equilatero triangulo("Triángulo Equilatero", 5.0, 4.33, 3);

    // Imprimir los detalles del triángulo
    std::cout << triangulo.toString() << std::endl;
    std::cout << "Perimetro: " << triangulo.perimetro() << std::endl;
    std::cout << "Area: " << triangulo.area() << std::endl;
    return 0;
}
