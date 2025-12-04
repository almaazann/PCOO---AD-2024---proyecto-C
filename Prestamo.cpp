#include <iostream>
#include "Libro.cpp"
#include "Usuario.cpp"
#include "Fecha.cpp"
using namespace std;

class Prestamo{
private:
    Fecha fechaInicio;
    Fecha fechaLimite;
    Libro libro;
    Usuario* usuario;

public:

    // Constructor por omisión
    Prestamo() {
        fechaInicio = Fecha();
        fechaLimite = Fecha();
        libro = Libro();
        usuario = nullptr;
    }

    // Constructor correcto
    Prestamo(Fecha _fechaInicio, Libro _libro, Usuario* _usuario) {
        fechaInicio = _fechaInicio;
        libro = _libro;
        usuario = _usuario;

        // La fecha límite SIEMPRE son dos semanas después
        fechaLimite = fechaInicio;
        fechaLimite.sumar2semanas();
    }

    // SETTERS
    void setFechaInicio(Fecha _fechaInicio) {
        fechaInicio = _fechaInicio;
        fechaLimite = fechaInicio;
        fechaLimite.sumar2semanas();
    }

    void setLibro(Libro _libro) {
        libro = _libro;
    }

    void setUsuario(Usuario* _usuario) {   // ← CORREGIDO
        usuario = _usuario;
    }

    // GETTERS
    Fecha getFechaInicio() {
        return fechaInicio;
    }

    Fecha getFechaLimite() {
        return fechaLimite;
    }

    Libro getLibro() {
        return libro;
    }

    Usuario* getUsuario() {
        return usuario;
    }

    // Mostrar información del préstamo
    void mostrarInfoPrestamo() {
        cout << "\n=== INFORMACION DEL PRESTAMO ===\n";
        cout << "Libro: " << libro.getTitulo() << " | Autor: " << libro.getAutor() << endl;

        cout << "Usuario: ";
        usuario->mostrarInfo();  

        cout << "Fecha de inicio: ";
        cout << fechaInicio.getDia() << "/" 
             << fechaInicio.getMes() << "/" 
             << fechaInicio.getAño() << endl;

        cout << "Fecha limite: ";
        cout << fechaLimite.getDia() << "/" 
             << fechaLimite.getMes() << "/" 
             << fechaLimite.getAño() << endl;

        cout << "================================\n";
    }
};