#include <iostream>
using namespace std;

int main() {
  
  int numeros_camisa[5] = {4, 9, 7, 11, 27};

  cout << endl << "Números dos jogadores:" << endl;
  for (int i = 0 ; i < 5 ; i++) {
    cout << numeros_camisa[i] << endl;
  }

  int gols_temporada[8] = {2, 1, 1};
  cout << endl << "Gols marcados em cada jogo: " << endl;
  for (int i = 0 ; i < 5 ; i++) {
    cout << " Jogo " << (i+1) << " " << gols_temporada[i] << endl;
  }
}