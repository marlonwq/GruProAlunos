#include <iostream>
using namespace std;

int main(){
  int Q1, Q2, Q3, E1, E2, E3, ovos_perdidos;
  cin >> Q1 >> Q2 >> Q3 >> E1 >> E2 >> E3;
  ovos_perdidos = 2 * (E1 + E2 + E3) + E1 + E2 + E3; 
  cout << (Q1 + Q2 + Q3) - ovos_perdidos << endl;
}