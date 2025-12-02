#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta {
private:
    double limite;

public:
    ContaCorrente(int num, Cliente t, double lim)
        : Conta(num, t), limite(lim) {}

    bool sacar(double valor) override {
        if (valor > saldo + limite) return false;
        saldo -= valor;
        return true;
    }

    double getLimite() const { return limite; }
};

#endif
