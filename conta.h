#ifndef CONTA_H
#define CONTA_H

#include "Cliente.h"

class Conta {
protected:
    int numero;
    double saldo;
    Cliente titular;

public:
    Conta(int num, Cliente t) : numero(num), titular(t), saldo(0.0) {}

    virtual void depositar(double valor) {
        saldo += valor;
    }

    virtual bool sacar(double valor) {
        if (valor > saldo) return false;
        saldo -= valor;
        return true;
    }

    double getSaldo() const { return saldo; }
    int getNumero() const { return numero; }
    Cliente getTitular() const { return titular; }
};

#endif
