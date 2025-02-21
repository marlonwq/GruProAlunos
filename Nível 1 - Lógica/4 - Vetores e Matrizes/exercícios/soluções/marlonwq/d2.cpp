#include <iostream>
using namespace std;

int main() {
    int N, Y;
    cin >> N;

    int habilidades[N];
    int identificadores[N];

    for (int i = 0; i < N; i++) {
        cin >> habilidades[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> identificadores[i];
    }

    cin >> Y;

    bool encontrou = false;
    for (int i = 0; i < N; i++) {
        if (habilidades[i] == Y) {
            cout << identificadores[i] << " ";
            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Nenhum";
    }

    cout << endl;
    return 0;
}
