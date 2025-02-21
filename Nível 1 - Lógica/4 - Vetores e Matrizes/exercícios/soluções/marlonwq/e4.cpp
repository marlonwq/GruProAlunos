#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> matriz(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    int destruicoes = 0;

    for (int i = 0; i < M; i++) {
        int L, C;
        cin >> L >> C;

        for (int linha = L; linha >= 0; linha--) {
            if (matriz[linha][C] == 1) {
                destruicoes++;
                matriz[linha][C] = 0;
                break;
            }
        }
    }

    cout << destruicoes << endl;

    return 0;
}

