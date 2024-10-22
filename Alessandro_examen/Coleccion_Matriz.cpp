#include "Coleccion_Matriz.h"

Coleccion_Matriz::Coleccion_Matriz() {
    tam = 4;
    m = new Reservacion**[tam];
    for (int i = 0; i < tam; i++) {
        m[i] = new Reservacion*[tam];
        for (int j = 0; j < tam; j++) {
            m[i][j] = NULL ;
        }
    }
}

Coleccion_Matriz::~Coleccion_Matriz() {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void Coleccion_Matriz::reservaIndividual(int fila, int columna, Cliente* cliente) {
    if (fila < 0 || fila >= tam || columna < 0 || columna >= tam) {
        return;
    }
    if (m[fila][columna] == nullptr) {
        m[fila][columna] = new Reservacion(1000, fila, columna, cliente);
    }
}

bool Coleccion_Matriz::disponibleFila(int fila, int nEspaciosConsecutivos) {
    if (fila < 0 || fila >= tam) {
        return false;
    }
    int contador = 0;
    for (int j = 0; j < tam; j++) {
        if (m[fila][j] == nullptr) {
            contador++;
        } else {
            contador = 0;
        }
        if (contador == nEspaciosConsecutivos) {
            return true;
        }
    }
    return false;
}

void Coleccion_Matriz::reservaMultiple(Cliente* cliente, int n) {
    for (int i = 0; i < tam; i++) {
        if (disponibleFila(i, n)) {
            int contador = 0;
            for (int j = 0; j < tam; j++) {
                if (m[i][j] == nullptr) {
                    reservaIndividual(i, j, cliente);
                    contador++;
                    if (contador == n) {
                        return;
                    }
                }
            }
        }
    }
}

int Coleccion_Matriz::ingresoTaquilla() {
    int total = 0;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (m[i][j] != nullptr) {
                total += m[i][j]->calcularMontoDescuento();
            }
        }
    }
    return total;
}

void Coleccion_Matriz::corrimientoFila(int f) {
    if (f < 0 || f >= tam) {
        return;
    }

    int ultimo = tam - 1;
    for (int j = tam - 1; j >= 0; j--) {
        if (m[j][f] != nullptr) {
            m[ultimo][f] = m[j][f];
            if (ultimo != j) {
                m[j][f] = nullptr;
            }
            ultimo--;
        }
    }
}
string Coleccion_Matriz::toString() {
    stringstream s;
    string cine[] = { "0", "1" , "2", "3" };
    int ancho_columnas = 0;
    int longitud_total = (ancho_columnas + 4) * tam + 15; // Ajuste de longitud total
    s << "Grade  |  " << setw(ancho_columnas) << left << cine[0]
        << "|   " << setw(ancho_columnas) << left << cine[1]
        << "|   " << setw(ancho_columnas) << left << cine[2]
        << "|   " << setw(ancho_columnas) << left << cine[3] << "|\n";
    s << string(longitud_total, '-') << endl;

    for (int i = 0; i < tam; i++) {
        s << "Piso |";
        for (int j = 0; j < tam; j++) {
            if (m[j][i] != nullptr && m[j][i]->getCliente() != nullptr) {
                s << " " << setw(ancho_columnas) << left << m[j][i]->getCliente()->getNombre() << "|";
            } else {
                s << " " << setw(ancho_columnas) << left << "N/A" << "|";
            }
        }
        s << endl;
        s << string(longitud_total, '-') << endl;
    }
    return s.str();
}
