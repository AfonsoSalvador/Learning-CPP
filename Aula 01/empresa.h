#ifndef EMPRESA_H
#define EMPRESA_H

#include "departamento.h"

#include <string>
#include <list>
using namespace std;

class Empresa{
    string nome;
    list<Departamento*> departamentos;
    public:
    void setNome(const string& nome);
    string getNome() const;

    void adicionaDepartamento(Departamento &d);
    list<Departamento*> getDepartamentos() const;

};



#endif