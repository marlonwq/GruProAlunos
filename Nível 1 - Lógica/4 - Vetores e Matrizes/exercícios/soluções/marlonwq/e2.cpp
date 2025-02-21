#include <iostream>
using namespace std;

int main() {
    int N, C, totalEspecies = 0;
    cin >> N;

    int mapa[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mapa[i][j];
        }
    }

    cin >> C;

    for (int i = 0; i < C; i++) {
        int X, Y;
        cin >> X >> Y;
        totalEspecies += mapa[X][Y];
    }

    cout << totalEspecies << endl;

    return 0;
}
