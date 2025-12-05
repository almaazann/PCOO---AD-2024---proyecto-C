#pragma once
#include <iostream>
using namespace std;

class Usuario{
    protected:
    string nombre;

    public:
    Usuario(){
        nombre = "Usuario no encontrado";
    }
    Usuario(string _nombre){
        nombre = _nombre;
    }

    void setNombre(string _nombre){
        nombre = _nombre;
    }

    string getNombre(){
        return nombre;
    }
    
    virtual void mostrarInfo(){
        cout << "Usuario: " << nombre << endl;
    }

};