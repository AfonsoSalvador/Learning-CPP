#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <string>
#include "empresa.h"
using namespace std;

class Departamento{
    string nome;
    Empresa *empresa;
    public:
    Departamento(Empresa& e);
    void setNome(const string& nome);
    string getNome() const;


};





#endif