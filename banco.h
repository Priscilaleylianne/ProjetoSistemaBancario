#ifndef BANCO_H
#define BANCO_H

#include <vector>
#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
using namespace std;

class Banco {
private:
    vector<Conta*> contas;

public:
    void criarContaCorrente(int numero, Cliente c, double limite) {
        contas.push_back(new ContaCorrente(numero, c, limite));
    }

    Conta* buscarConta(int numero) {
        for (auto* conta : contas) {
            if (conta->getNumero() == numero)
                return conta;
        }
        return nullptr;
    }

    void listarContas() {
        cout << "\n=== LISTA DE CONTAS ===\n";
        for (auto* conta : contas) {
            cout << "Conta Nº: " << conta->getNumero()
                 << " | Titular: " << conta->getTitular().getNome()
                 << " | Saldo: R$ " << conta->getSaldo() << endl;
        }
    }
};

#endif
