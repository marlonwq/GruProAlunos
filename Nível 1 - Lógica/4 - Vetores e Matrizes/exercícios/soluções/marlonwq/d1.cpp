#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, C;
  cin >> N;
  int caixas[N];
  for (int i = 0; i < N; i++) {
    cin >> caixas[i];
  }
  cin >> C;
  for (int i = 0; i < N; i++) {
    if (caixas[i] == C) {
      cout << C << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}