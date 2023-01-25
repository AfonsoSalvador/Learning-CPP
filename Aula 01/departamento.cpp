#include "departamento.h"

Departamento::Departamento(Empresa &e)
{
    this->empresa=&e;
}

void Departamento::setNome(const string &nome)
{
    this->nome=nome;
}

string Departamento::getNome() const
{
    return this->nome;
}
