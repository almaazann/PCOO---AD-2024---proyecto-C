#include <iostream>
using namespace std;

class Libro{
    private:
        string titulo;
        string autor;
        bool disponible;

    public:
        Libro (){
            autor = "Desconocido";
            titulo = "Desconocido";
            disponible = true;
        }

        Libro(string _titulo, string _autor, bool _disponible = true){
            titulo = _titulo;
            autor = _autor;
            disponible = _disponible;
        }

        void setTitulo(string _titulo) {
            titulo = _titulo;
        }

        void setAutor(string _autor) {
            autor = _autor;
        }

        string getAutor(){
            return autor;
        }

        string getTitulo(){
            return titulo;
        }

        void setDisponible(){
            disponible = true;
        }

        void setNoDisponible(){
            disponible = false;
        }

        bool getDisponibilidad(){
            return disponible;
        }

        void mostrarInfo(){
            cout << "Libro: " << titulo << " | Autor: " << autor << endl;
            if (disponible){
                cout << "Este libro esta disponible sin problemas" << endl;
            }
            else{
                cout << "Por el momento este libro no esta disponible" << endl;
            }
        }
};
