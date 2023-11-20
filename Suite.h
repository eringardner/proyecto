#ifndef SUITE_
#define SUITE_
#include "HabitacionHUB.h"

class Suite:public HabitacionHUB
{
private:
bool CamaDos;
bool CamaTres;
bool Terraza;
bool Cocina;
bool AccesoAlberca;
bool AccesoGym;

public:
Suite();
Suite(bool CamaDos, bool Camatres, bool Terraza, bool Cocina, bool AccesoAlberca, bool AccesoGym);
string getAccesoAlberca();
string getAccesoGym();
};
#endif
