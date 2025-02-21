#include <iostream>
using namespace std;

int main() {
  int N, M, P, count = 0;
  cin >> N >> M;

  int matriz[N][M];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> matriz[i][j];
    }
  }

  cin >> P;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (matriz[i][j] == P) {
        count++;
      }
    }
  }

  cout << "Ash pegou " << count << " pokemon" << endl;

  return 0;
}
