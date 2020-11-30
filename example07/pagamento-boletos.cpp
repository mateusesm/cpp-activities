#include <iostream>
using namespace std;

int main () {
  float saldoConta = 1000.0;
  float valorBoleto;
  float juros = 0.05;
  int numeroParcelas = 0;

while ((saldoConta > 0.0) && (numeroParcelas < 2))  {
  valorBoleto = 100.0;
  valorBoleto +=  valorBoleto * juros;
  saldoConta -=  valorBoleto;
  numeroParcelas++;

  cout << "Saldo após: R$"<< numeroParcelas;
  cout <<  "Pagamento(s): " << saldoConta;
  cout << endl;
}
}