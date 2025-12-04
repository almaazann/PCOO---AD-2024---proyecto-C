#include <iostream>
#include "Usuario.cpp"
using namespace std;

class Estudiante: public Usuario{
    private:
    int matricula;

    public:
    Estudiante(string _nombre, int _matricula): Usuario(_nombre){
        matricula = _matricula;
    }

    Estudiante(): Usuario(){
        nombre = "Desconocido";
        matricula = 0;
    }

    void setMatricula(int _matricula){
        matricula = _matricula;
    }

    int getMatricula(){
        return matricula;
    }

    void mostrarInfo(){
        cout << "Su nombre es: " << nombre << endl;
        cout << "Su matricula es: " << matricula << endl;
    }
};