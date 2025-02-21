#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    bool alarme = false;
    int P;

    while (true) {
        cin >> P; 
        if (P == 0) break; 
        if (P > T) alarme = true;
    }

    if (alarme) {
        cout << "ALARME" << endl;
    } else {
        cout << "O Havai pode dormir tranquilo" << endl;
    }

    return 0;
}
