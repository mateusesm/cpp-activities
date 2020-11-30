#include <iostream>
using namespace std;

int main() {
  int menu;
  
  while (menu != 5) {
    cout << "==================" << endl;
    cout << "1 - Saldo" << endl;
    cout << "2 - Saque" << endl;
    cout << "3 - Depósito" << endl;
    cout << "4 - Transferência" << endl;
    cout << "5 - SAIR" << endl;
    cout << "==================" << endl;
    cin >> menu;
    system("clear||cls");
    if (menu == 1) {
      cout << "Operação de Saldo em execução..." << endl;
    }
    if (menu == 2) {
      cout << "Operação de Saque em execução..." << endl;
    }
    if (menu == 3) {
      cout << "Operação de Depósito em execução..." << endl;
    }
    if (menu == 4) {
      cout << "Operação de Transferência em execução..." << endl;
    }
  }
  cout << "Fim da execução." << endl;
 }