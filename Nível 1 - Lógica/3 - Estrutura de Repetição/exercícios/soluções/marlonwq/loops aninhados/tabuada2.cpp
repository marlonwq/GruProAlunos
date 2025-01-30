// pensando "de fora para dentro""
#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) { //i começa a partir do 1, para quando for 10 (testa a condição), executa os comandos, incremento (i++), depois volta para o teste de condição e fica nesse loope até que a condição seja falsa
    for (int j = 1; j <= 10; j++) { //o comando executado é outro loop, onde basicamente vai ser impresso os números de 1 a 10, então após chegar ao 10, o loop é encerrado e volta para o loop de fora, onde agora será impresso o 2, e assim por diante até chegar ao 10
      cout << i << " * " << j << " = " << i * j << endl; // imprime o valor de i, o sinal de multiplicação, o valor de j, o sinal de igual e o resultado da multiplicação de i por j, assim imprimindo a tabuada de 1 a 10
    }
  }
}
