#include <iostream>
using namespace std;

class Libro{
    private:
        string titulo;
        string autor;

    public:
        //Setters para el libro
        void setTitulo(string t) {
            titulo = t;
        }
        void setAutor(string a) {
            autor = a;
        }
        void mostrarInfo(){
            cout << "Libro: " << titulo << " | Autor: " << autor << endl;
        }
};

class Estudiante{
    private:
        string nombre;
        string matricula;
    public:
        //Setters de estudiante
        void setNombre(string n){
            nombre = n;
        }
        void setMatricula(string m){
            matricula = m;
        }
        void mostrarInfo(){
            cout << "Nombre " << nombre << " | Matricula: " << matricula << endl;
        }
};
class Profesor {
    private: 
        string nombre;
        string departamento;
    public:
        //Setters del profesor
        void setNombre(string n){
            nombre = n;
        }
        void setDepartamento(string d){
            departamento = d;
        }
        void mostrarInfo(){
            cout << "Nombre " << nombre << " | Departamento: " << departamento << endl;
        }
};