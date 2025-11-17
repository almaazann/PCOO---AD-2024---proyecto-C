#include <iostream>
#include "biblioteca_proy.cpp"
using namespace std;


int main() {
    Libro l;
    Estudiante e;
    Profesor p;

    //De momento no usaré "cin" ni nada, solo mostraré que funcionan los metodos
    
    l.setTitulo("El Principito");
    l.setAutor("Saint-Exupéry");

    e.setNombre("Miguel");
    e.setMatricula("12345");

    p.setNombre("Dr. Lopez");
    p.setDepartamento("Literatura");

    l.mostrarInfo();
    e.mostrarInfo();
    p.mostrarInfo();

    return 0;
}