#include "empresa.h"

void Empresa::setNome(const string &nome)
{
    this->nome=nome;
}

string Empresa::getNome() const
{
    return this->nome;
}

void Empresa::adicionaDepartamento(Departamento &d)
{
    this->departamentos.push_back(&d);
}

list<Departamento *> Empresa::getDepartamentos() const
{
    return this->departamentos;
}
