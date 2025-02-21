#include <iostream>
using namespace std;

int main() {
    int N, S, pulos = 0;
    cin >> N;

    int obstaculos[N];

    for (int i = 0; i < N; i++) {
        cin >> obstaculos[i];
    }

    cin >> S;

    for (int i = 0; i < N; i++) {
        if (obstaculos[i] > S) {
            break; 
        }
        pulos++;
    }

    cout << pulos << endl;
    cout << (pulos == N ? 1 : 0) << endl;

    return 0;
}
