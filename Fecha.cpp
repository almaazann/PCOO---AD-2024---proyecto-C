#include <iostream>
using namespace std;

class Fecha{
    private:
    int mes;
    int año;
    int dia;

    public:
    Fecha(int _mes, int _año, int _dia){
        año = _año;
        mes = _mes;
        dia = _dia;
    }

    Fecha(){
        mes = 1;
        año = 1;
        dia = 1;
    }

    void setAño (int _año){
        año = _año;
    }

    void setMes (int _mes){
        mes = _mes;
    }

    void setDia(int _dia){
        dia = _dia;
    }

    int getAño(){
        return año;
    }

    int getMes(){
        return mes;
    }

    int getDia(){
        return dia;
    }

    void mostrarFechaInicio(){
        cout << "La fecha del dia de hoy es (dd/mm/aaaa): " << dia << "/" << mes << "/" << año << endl;
    }

    void mostrarFechaFinal(){
        cout << "Fecha limite (dd/mm/aaaa): " << dia << "/" << mes << "/" << año << endl;
    }

    void sumarDias(int dias) {
        dia += dias;

        while (dia > 30) {
            dia -= 30;
            mes++;
            if (mes > 12) {
                mes = 1;
                año++;
            }
        }
    }

    void sumar2semanas(){
        sumarDias(14);
    }

    void solicitarFecha(){
        cout << "Digite que anio es (AAAA): ";
        cin >> año;
        cout << "\nDigite que mes es (MM): ";
        cin >> mes;
        cout <<"\nDigite que dia es (DD): ";
        cin >> dia; 
    }


};