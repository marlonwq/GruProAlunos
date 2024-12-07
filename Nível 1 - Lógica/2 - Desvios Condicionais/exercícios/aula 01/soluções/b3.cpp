#include <iostream>
using namespace std;

int main() {
  int N, valor, total;
  cin >> N >> valor;
  total = N * valor;

  if (total >= 7500) {
    cout << "Vara de Iridio";
  } else {
    if (total >= 1800) {
      cout << "Vara de Fibra de Vidro";
    } else {
      if (total >= 500) {
        cout << "Vara de Bambu";
      } else {
        cout << "Paciencia Firmino!";
      }
    }
  }
}