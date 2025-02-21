#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    
    int terreno[M][N];
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> terreno[i][j];
        }
    }
    
    char tipo;
    int X;
    cin >> tipo >> X;
    
    int soma = 0;
    if (tipo == 'L') {
        for (int j = 0; j < N; j++) {
            soma += terreno[X-1][j];
        }
    } else if (tipo == 'C') {
        for (int i = 0; i < M; i++) {
            soma += terreno[i][X-1];
        }
    }
    
    cout << soma << endl;
    
    return 0;
}
