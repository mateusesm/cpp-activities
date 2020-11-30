#include <iostream>
using namespace std;

int main() {
  
  int contas_bancarias [2][2]{};

  //Cliente 1
  contas_bancarias[0][0]  = 4418;
  contas_bancarias[0][1] = 5971;

  //Cliente 2
  contas_bancarias[1][0] = 3976;
  contas_bancarias[1][1] = 1728;

  for (int i = 0 ; i < 2 ; i++) {
    cout <<  "Cliente " << (i+1) << endl;
    for (int j = 0 ; j < 2 ; j++)  {
      if (j < 1) { 
        cout <<  "Conta Corrente: " << contas_bancarias[i][j] << endl;
      }
      else {
        cout << "Conta Poupança: " << contas_bancarias[i][j]<< endl;
      }
    }
    cout << endl;
  }
}