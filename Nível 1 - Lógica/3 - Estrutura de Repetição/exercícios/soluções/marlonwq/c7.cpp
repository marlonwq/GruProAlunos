#include <iostream>
using namespace std;

int main() {
  int P;
  cin >> P;
  for (int i = 1; i <= P; i++) {

    for (int j = 0; j < P - i; j++) {
      cout << ">";
    }

    for (int j = 0; j < i; j++) {
      cout << "#";
    }
    cout << endl;
  }

  return 0;
}