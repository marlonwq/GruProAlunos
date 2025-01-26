#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int tradicional = 0;
  int geleia = 0;

  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    if (num == 10) {
      tradicional++;
    } else if (num == 11) {
      geleia++;
    }
  }
  if (tradicional > geleia) {
    cout << "Tradicional" << endl;
  } else {
    cout << "Geleia" << endl;
  }
}
