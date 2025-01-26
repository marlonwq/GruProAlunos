#include <iostream>
using namespace std;

int main() {
  int X, Y, area_coberta_atual, difusores_necessarios;
  cin >> X >> Y;

  area_coberta_atual = Y * 9;
  difusores_necessarios = X / 9;

  if (X % 9 != 0) {
    difusores_necessarios = difusores_necessarios + 1;
  }

  if (area_coberta_atual < X) {
    cout << "Precisa de mais difusores!" << endl;
    cout << difusores_necessarios - Y << endl;
  }

  else {
    cout << "Lar doce lar." << endl;
  }
}
