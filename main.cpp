#include <iostream>
#include "Banco.h"
using namespace std;

int main() {
    Banco banco;

    Cliente c1("Ana Maria", "123.456.789-00");
    Cliente c2("João Pedro", "987.654.321-00");

    banco.criarContaCorrente(1001, c1, 500.0);
    banco.criarContaCorrente(1002, c2, 1000.0);

    Conta* conta = banco.buscarConta(1001);
    if (conta) {
        conta->depositar(300);
        conta->sacar(100);
    }

    banco.listarContas();

    return 0;
}
