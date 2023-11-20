#ifndef HABITACIONHUB_H
#define HABITACIONHUB_H
#include <sstream>
#include <string>
using namespace std;



#include "Restaurante.cpp"
#include "Cliente.cpp"

class HabitacionHUB
{
    private: // atributos
        int huespedes;
        int cama;
        bool tv;
        bool bano;
        int fechas; 

    public:  // métodos
        HabitacionHUB::HabitacionHUB(){}

        HabitacionHUB::HabitacionHUB(int personas, int cam, bool tv_, bool wc, int dias){
            huespedes = personas;
            cama = cam;
            tv = tv_;
            bano = wc;
            fechas = dias;
    }; //huespedes, cama, tv, baño, fechas, restaurante si o no, cliente
        string getNombre(); // quitar los puntos que hay después de los string
        string getHuespedes();
        int getFechas();
        void setTV(bool);
        void setBano(bool);
        string getTipoCuarto();
        string getReserva(string,int,int,string);

};

string HabitacionHUB::getHuespedes(){
    return huespedes;
};

int HabitacionHUB::getFechas(){
    return fechas;
};


string HabitacionHUB::getReserva(string,int,int,string){
    cout<< "Reserva para" << huespedes << "por" << fechas << "días";
    cout<<"El cuarto" << tv << "y" << bano;

};
#endif // HABITACIONHUB_H