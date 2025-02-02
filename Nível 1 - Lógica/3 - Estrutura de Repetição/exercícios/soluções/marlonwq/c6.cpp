#include <iostream>
using namespace std;

int main() {
  int E, P, ataques = 0;
  cin >> E >> P;

  while (E > 0 && P > 0) {
    E -= P;
    P--;
    ataques++;
  }

  if (E > 0) {
    cout << "F";
  } else {
    cout << ataques << endl;
  }
}
