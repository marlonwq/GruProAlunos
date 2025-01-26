#include <iostream>
using namespace std;

int main() {
  int T, X, distancia;
  cin >> T >> X;
  distancia = X % T;
  cout << distancia;
}