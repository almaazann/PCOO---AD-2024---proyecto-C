#include <iostream>
#include "Prestamo.cpp"
#include "Profesor.cpp"
#include "Estudiante.cpp"
using namespace std;

int main() {

    Usuario* usuario;   // Se usa polimorfismo de acuerdo a lo visto en clase
    int opcion;

    cout << "Eres profesor (1) o estudiante (2)? ";
    cin >> opcion;

    if (opcion == 1){
        string nombre, departamento;
        cout << "Nombre del profesor: ";
        cin.ignore();
        getline(cin, nombre);
        cout << "Departamento: ";
        cin.ignore();
        getline(cin, departamento);

        usuario = new Profesor(nombre, departamento);
    }
    else {
        string nombre;
        int matricula;
        cout << "Nombre del estudiante: ";
        cin.ignore();
        getline(cin, nombre);
        cout << "Matricula (Solo numeros): ";
        cin >> matricula;

        usuario = new Estudiante(nombre, matricula);
    }

    // Libro
    string titulo, autor;
    cout << "\nTitulo del libro: ";
    cin.ignore();
    getline(cin, titulo);
    cout << "Autor: ";
    cin.ignore();
    getline(cin, autor);

    Libro libro(titulo, autor);

    // Fecha
    Fecha fechaHoy;
    fechaHoy.solicitarFecha();

    // Crear préstamo
    Prestamo prestamo(fechaHoy, libro, usuario);

    // Mostrar información
    prestamo.mostrarInfoPrestamo();

    return 0;
}