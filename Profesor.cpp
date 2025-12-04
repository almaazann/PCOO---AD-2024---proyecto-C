#include <iostream>
#include "Usuario.cpp"
using namespace std;

class Profesor: public Usuario{
    private:
    string departamento;

    public:
    Profesor(string _nombre, string _departamento): Usuario(_nombre){
        departamento = _departamento;   
    }

    Profesor(): Usuario(){
        departamento = "";
        nombre = "Desconocido";
    }

    void setDepartamento(string _departamento){
        departamento = _departamento;
    }

    string getDepartamento(){
        return departamento;
    }

    void mostrarInfo(){
        cout << "Su nombre es: " << nombre << endl;
        cout << "Su departamento es: " << departamento << endl;
    }
};

