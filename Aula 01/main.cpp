#include<iostream>

#include "empresa.h"
#include "departamento.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Empresa e;
    Departamento di(e);
    e.setNome("Ufes");
    di.setNome("Departamento de informática");

    e.adicionaDepartamento(di);

    cout << e.getNome() << endl;
    cout << di.getNome() << endl;

    return 0;
}

