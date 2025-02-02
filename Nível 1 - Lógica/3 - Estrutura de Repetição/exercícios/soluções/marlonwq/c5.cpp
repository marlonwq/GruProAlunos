#include <iostream>
using namespace std;

int main() {
  int N, casal = 2, triplo = 3, familia = 5, quadruplo = 4;
  cin >> N;
  string input;

  while (true) {
    cin >> input;

    if (input == "FIM") {
      break;
    }

    if (input == "Casal") {
      N -= casal;
    } else if (input == "Triplo") {
      N -= triplo;
    } else if (input == "Quadruplo") {
      N -= quadruplo;
    } else if (input == "Familia") {
      N -= familia;
    }

    if (N <= 0) {
      break;
    }
  }

  if (N <= 0) {
    cout << "Pode reservar! Esses quartos cabem todos." << endl;
  } else {
    cout << "Procure outra pousada." << endl;
  }

  return 0;
}
