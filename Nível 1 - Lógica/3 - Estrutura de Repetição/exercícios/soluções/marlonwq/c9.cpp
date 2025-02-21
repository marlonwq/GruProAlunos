#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int level = 1;

  for (int i = 0; i < N; i++) {
    char tipo;
    cin >> tipo;

    if (tipo == 't') {
      int q;
      cin >> q;
      level += q;
    } else if (tipo == 'm') {
      int f;
      cin >> f;
      cout << "Combate iniciado" << endl;

      if (level >= f) {
        level += 1;
        cout << "VITORIA" << endl;
      } else {
        cout << "Derrota! Fim da aventura" << endl;
        return 0;
      }
    } else if (tipo == 'b') {
      int c;
      cin >> c;
      level -= c;
      if (level < 0)
        level = 0;
    }

    if (level >= 5) {
      cout << "Aventura concluida" << endl;
      return 0;
    }
  }
}
