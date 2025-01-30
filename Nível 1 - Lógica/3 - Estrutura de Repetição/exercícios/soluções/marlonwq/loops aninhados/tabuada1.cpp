#include <iostream>
using namespace std;

int main() {
  for (int j = 1; j <= 10; j++) { //j começa a partir do 1, para quando for 10 (testa a condição), executa os comandos, incremento (j++), depois volta para o teste de condição e fica nesse loope até que a condição seja falsa
    cout << " 9 * " << j << " = " << 9 * j << endl; // imprime 9 * o valor de j, o sinal de igual e o resultado da multiplicação de 9 por j
  }
}

