#include <iostream>
using namespace std;

int main() {
  char zagueiro, goleiro, drible, chute;
  cin >> zagueiro >> goleiro >> drible >> chute;

  if (drible != zagueiro) {
    cout << "Bloqueado" << endl;
  } else {
    cout << "Driblado" << endl;
    if (chute != goleiro) {
      cout << "...e o goleiro pega" << endl;
    } else {
      cout << "Gol" << endl;
    }
  }
}